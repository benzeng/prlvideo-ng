
void FUN_100cd6400(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_2) {
  case 0:
    uVar1 = _CGEventGetIntegerValueField(param_1,0);
    _CGEventGetDoubleValueField(param_1,0);
    pcVar2 = "kCGMouseEventNumber";
    break;
  case 1:
    uVar1 = _CGEventGetIntegerValueField(param_1,1);
    _CGEventGetDoubleValueField(param_1,1);
    pcVar2 = "kCGMouseEventClickState";
    break;
  case 2:
    uVar1 = _CGEventGetIntegerValueField(param_1,2);
    _CGEventGetDoubleValueField(param_1,2);
    pcVar2 = "kCGMouseEventPressure";
    break;
  case 3:
    uVar1 = _CGEventGetIntegerValueField(param_1,3);
    _CGEventGetDoubleValueField(param_1,3);
    pcVar2 = "kCGMouseEventButtonNumber";
    break;
  case 4:
    uVar1 = _CGEventGetIntegerValueField(param_1,4);
    _CGEventGetDoubleValueField(param_1,4);
    pcVar2 = "kCGMouseEventDeltaX";
    break;
  case 5:
    uVar1 = _CGEventGetIntegerValueField(param_1,5);
    _CGEventGetDoubleValueField(param_1,5);
    pcVar2 = "kCGMouseEventDeltaY";
    break;
  case 6:
    uVar1 = _CGEventGetIntegerValueField(param_1,6);
    _CGEventGetDoubleValueField(param_1,6);
    pcVar2 = "kCGMouseEventInstantMouser";
    break;
  case 7:
    uVar1 = _CGEventGetIntegerValueField(param_1,7);
    _CGEventGetDoubleValueField(param_1,7);
    pcVar2 = "kCGMouseEventSubtype";
    break;
  case 8:
    uVar1 = _CGEventGetIntegerValueField(param_1,8);
    _CGEventGetDoubleValueField(param_1,8);
    pcVar2 = "kCGKeyboardEventAutorepeat";
    break;
  case 9:
    uVar1 = _CGEventGetIntegerValueField(param_1,9);
    _CGEventGetDoubleValueField(param_1,9);
    pcVar2 = "kCGKeyboardEventKeycode";
    break;
  case 10:
    uVar1 = _CGEventGetIntegerValueField(param_1,10);
    _CGEventGetDoubleValueField(param_1,10);
    pcVar2 = "kCGKeyboardEventKeyboardType";
    break;
  case 0xb:
    uVar1 = _CGEventGetIntegerValueField(param_1,0xb);
    _CGEventGetDoubleValueField(param_1,0xb);
    pcVar2 = "kCGScrollWheelEventDeltaAxis1";
    break;
  case 0xc:
    uVar1 = _CGEventGetIntegerValueField(param_1,0xc);
    _CGEventGetDoubleValueField(param_1,0xc);
    pcVar2 = "kCGScrollWheelEventDeltaAxis2";
    break;
  case 0xd:
    uVar1 = _CGEventGetIntegerValueField(param_1,0xd);
    _CGEventGetDoubleValueField(param_1,0xd);
    pcVar2 = "kCGScrollWheelEventDeltaAxis3";
    break;
  case 0xe:
    uVar1 = _CGEventGetIntegerValueField(param_1,0xe);
    _CGEventGetDoubleValueField(param_1,0xe);
    pcVar2 = "kCGScrollWheelEventInstantMouser";
    break;
  case 0xf:
    uVar1 = _CGEventGetIntegerValueField(param_1,0xf);
    _CGEventGetDoubleValueField(param_1,0xf);
    pcVar2 = "kCGTabletEventPointX";
    break;
  case 0x10:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x10);
    _CGEventGetDoubleValueField(param_1,0x10);
    pcVar2 = "kCGTabletEventPointY";
    break;
  case 0x11:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x11);
    _CGEventGetDoubleValueField(param_1,0x11);
    pcVar2 = "kCGTabletEventPointZ";
    break;
  case 0x12:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x12);
    _CGEventGetDoubleValueField(param_1,0x12);
    pcVar2 = "kCGTabletEventPointButtons";
    break;
  case 0x13:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x13);
    _CGEventGetDoubleValueField(param_1,0x13);
    pcVar2 = "kCGTabletEventPointPressure";
    break;
  case 0x14:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x14);
    _CGEventGetDoubleValueField(param_1,0x14);
    pcVar2 = "kCGTabletEventTiltX";
    break;
  case 0x15:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x15);
    _CGEventGetDoubleValueField(param_1,0x15);
    pcVar2 = "kCGTabletEventTiltY";
    break;
  case 0x16:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x16);
    _CGEventGetDoubleValueField(param_1,0x16);
    pcVar2 = "kCGTabletEventRotation";
    break;
  case 0x17:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x17);
    _CGEventGetDoubleValueField(param_1,0x17);
    pcVar2 = "kCGTabletEventTangentialPressure";
    break;
  case 0x18:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x18);
    _CGEventGetDoubleValueField(param_1,0x18);
    pcVar2 = "kCGTabletEventDeviceID";
    break;
  case 0x19:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x19);
    _CGEventGetDoubleValueField(param_1,0x19);
    pcVar2 = "kCGTabletEventVendor1";
    break;
  case 0x1a:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1a);
    _CGEventGetDoubleValueField(param_1,0x1a);
    pcVar2 = "kCGTabletEventVendor2";
    break;
  case 0x1b:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1b);
    _CGEventGetDoubleValueField(param_1,0x1b);
    pcVar2 = "kCGTabletEventVendor3";
    break;
  case 0x1c:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1c);
    _CGEventGetDoubleValueField(param_1,0x1c);
    pcVar2 = "kCGTabletProximityEventVendorID";
    break;
  case 0x1d:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1d);
    _CGEventGetDoubleValueField(param_1,0x1d);
    pcVar2 = "kCGTabletProximityEventTabletID";
    break;
  case 0x1e:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1e);
    _CGEventGetDoubleValueField(param_1,0x1e);
    pcVar2 = "kCGTabletProximityEventPointerID";
    break;
  case 0x1f:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x1f);
    _CGEventGetDoubleValueField(param_1,0x1f);
    pcVar2 = "kCGTabletProximityEventDeviceID";
    break;
  case 0x20:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x20);
    _CGEventGetDoubleValueField(param_1,0x20);
    pcVar2 = "kCGTabletProximityEventSystemTabletID";
    break;
  case 0x21:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x21);
    _CGEventGetDoubleValueField(param_1,0x21);
    pcVar2 = "kCGTabletProximityEventVendorPointerType";
    break;
  case 0x22:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x22);
    _CGEventGetDoubleValueField(param_1,0x22);
    pcVar2 = "kCGTabletProximityEventVendorPointerSerialNumber";
    break;
  case 0x23:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x23);
    _CGEventGetDoubleValueField(param_1,0x23);
    pcVar2 = "kCGTabletProximityEventVendorUniqueID";
    break;
  case 0x24:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x24);
    _CGEventGetDoubleValueField(param_1,0x24);
    pcVar2 = "kCGTabletProximityEventCapabilityMask";
    break;
  case 0x25:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x25);
    _CGEventGetDoubleValueField(param_1,0x25);
    pcVar2 = "kCGTabletProximityEventPointerType";
    break;
  case 0x26:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x26);
    _CGEventGetDoubleValueField(param_1,0x26);
    pcVar2 = "kCGTabletProximityEventEnterProximity";
    break;
  case 0x27:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x27);
    _CGEventGetDoubleValueField(param_1,0x27);
    pcVar2 = "kCGEventTargetProcessSerialNumber";
    break;
  case 0x28:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x28);
    _CGEventGetDoubleValueField(param_1,0x28);
    pcVar2 = "kCGEventTargetUnixProcessID";
    break;
  case 0x29:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x29);
    _CGEventGetDoubleValueField(param_1,0x29);
    pcVar2 = "kCGEventSourceUnixProcessID";
    break;
  case 0x2a:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x2a);
    _CGEventGetDoubleValueField(param_1,0x2a);
    pcVar2 = "kCGEventSourceUserData";
    break;
  case 0x2b:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x2b);
    _CGEventGetDoubleValueField(param_1,0x2b);
    pcVar2 = "kCGEventSourceUserID";
    break;
  case 0x2c:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x2c);
    _CGEventGetDoubleValueField(param_1,0x2c);
    pcVar2 = "kCGEventSourceGroupID";
    break;
  case 0x2d:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x2d);
    _CGEventGetDoubleValueField(param_1,0x2d);
    pcVar2 = "kCGEventSourceStateID";
    break;
  default:
    uVar1 = _CGEventGetIntegerValueField(param_1,param_2);
    _CGEventGetDoubleValueField(param_1,param_2);
    FUN_100df99c0("","hid",0,"[HIDMacHook eventDump] Undefined field : (int)%lld : (double) %g",
                  uVar1);
    return;
  case 0x58:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x58);
    _CGEventGetDoubleValueField(param_1,0x58);
    pcVar2 = "kCGScrollWheelEventIsContinuous";
    break;
  case 0x5d:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x5d);
    _CGEventGetDoubleValueField(param_1,0x5d);
    pcVar2 = "kCGScrollWheelEventFixedPtDeltaAxis1";
    break;
  case 0x5e:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x5e);
    _CGEventGetDoubleValueField(param_1,0x5e);
    pcVar2 = "kCGScrollWheelEventFixedPtDeltaAxis2";
    break;
  case 0x5f:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x5f);
    _CGEventGetDoubleValueField(param_1,0x5f);
    pcVar2 = "kCGScrollWheelEventFixedPtDeltaAxis3";
    break;
  case 0x60:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x60);
    _CGEventGetDoubleValueField(param_1,0x60);
    pcVar2 = "kCGScrollWheelEventPointDeltaAxis1";
    break;
  case 0x61:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x61);
    _CGEventGetDoubleValueField(param_1,0x61);
    pcVar2 = "kCGScrollWheelEventPointDeltaAxis2";
    break;
  case 0x62:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x62);
    _CGEventGetDoubleValueField(param_1,0x62);
    pcVar2 = "kCGScrollWheelEventPointDeltaAxis3";
    break;
  case 99:
    uVar1 = _CGEventGetIntegerValueField(param_1,99);
    _CGEventGetDoubleValueField(param_1,99);
    pcVar2 = "kCGScrollWheelEventScrollPhase";
    break;
  case 0x7b:
    uVar1 = _CGEventGetIntegerValueField(param_1,0x7b);
    _CGEventGetDoubleValueField(param_1,0x7b);
    pcVar2 = "kCGScrollWheelEventMomentumPhase";
  }
  FUN_100df99c0("","hid",0,"[HIDMacHook eventDump] %s : (int)%lld : (double) %g",pcVar2,uVar1);
  return;
}

