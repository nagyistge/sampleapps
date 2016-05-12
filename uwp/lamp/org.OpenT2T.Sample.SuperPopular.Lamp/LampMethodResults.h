//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

using namespace concurrency;

namespace org { namespace OpenT2T { namespace Sample { namespace SuperPopular { namespace Lamp {

ref class LampConsumer;

public ref class LampTurnOnResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static LampTurnOnResult^ CreateSuccessResult()
    {
        auto result = ref new LampTurnOnResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static LampTurnOnResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new LampTurnOnResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class LampTurnOffResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static LampTurnOffResult^ CreateSuccessResult()
    {
        auto result = ref new LampTurnOffResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static LampTurnOffResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new LampTurnOffResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class LampSetBrightnessResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static LampSetBrightnessResult^ CreateSuccessResult()
    {
        auto result = ref new LampSetBrightnessResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static LampSetBrightnessResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new LampSetBrightnessResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class LampJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property LampConsumer^ Consumer
    {
        LampConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ LampConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    LampConsumer^ m_consumer;
};

} } } } } 