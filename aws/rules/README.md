## Sample rules
this is an example of some simple rules that leverage the device hierarchy that is built using the Device Collection and Device Profile files

Rules are defined in a module, more than one file can be used in the rules/ directory. In order to invoke a specific method in the thingTranslator-defined schema, user can use the device hierarchy defined in the Device Collection file.
The structure uses the following schema: `system.<DeviceCollection Name>.<device Structure>.device.<thingTranslator method to call>`.

The following is an example of few rules that uses the sample structure included with this app
```javascript
var system = null;
module.exports = {
    init:function(devCollection) {
      system = devCollection;  
    },
    
    checkTemperatureInLivingRoom:function(event){
      //if it is a temperature sensor
      if(event.device.type.indexOf("org.openT2T.sample.superPopular.temperatureSensor") != -1) {
      if(event.state.temperature > 80) {
        console.log("==> Temperature is over 100 turning off light");
        system.myHome.LivingRoom.Light.device.turnOff();
      }
      }
    },
   turnOffLights(event) {
       var eitherLights = event.device.id === "light1" || event.device.id === "consoleLight";
       if(eitherLights && event.state.light === "On") { 
       system.myHome.LivingRoom.Light.device.turnOff();
       system.myHome.LivingRoom.ConsoleLight.device.turnOff();
       }
   }
}   ```
the `init` method is called by the ruleEngine to initialize the device hierarchy.

