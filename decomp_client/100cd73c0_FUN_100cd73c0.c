
void FUN_100cd73c0(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = _CGEventGetType();
  switch(uVar1) {
  case 0:
    pcVar2 = "NX_NULLEVENT";
    break;
  case 1:
    pcVar2 = "NX_LMOUSEDOWN";
    break;
  case 2:
    pcVar2 = "NX_LMOUSEUP";
    break;
  case 3:
    pcVar2 = "NX_RMOUSEDOWN";
    break;
  case 4:
    pcVar2 = "NX_RMOUSEUP";
    break;
  case 5:
    pcVar2 = "NX_MOUSEMOVED";
    break;
  case 6:
    pcVar2 = "NX_LMOUSEDRAGGED";
    break;
  case 7:
    pcVar2 = "NX_RMOUSEDRAGGED";
    break;
  case 10:
    pcVar2 = "NX_KEYDOWN";
    break;
  case 0xb:
    pcVar2 = "NX_KEYUP";
    break;
  case 0xc:
    pcVar2 = "NX_FLAGSCHANGED";
    break;
  case 0x16:
    pcVar2 = "NX_SCROLLWHEELMOVED";
    break;
  case 0x17:
    pcVar2 = "NX_TABLETPOINTER";
    break;
  case 0x18:
    pcVar2 = "NX_TABLETPROXIMITY";
    break;
  case 0x19:
    pcVar2 = "NX_OMOUSEDOWN";
    break;
  case 0x1a:
    pcVar2 = "NX_OMOUSEUP";
    break;
  case 0x1b:
    pcVar2 = "NX_OMOUSEDRAGGED";
    break;
  case 0xfffffffe:
    FUN_100df99c0("","hid",0,
                  "[HIDMacHook eventDump] event : kCGEventTapDisabledBy(Timeout/UserInput)");
    return;
  default:
    uVar1 = _CGEventGetType(param_1);
    FUN_100df99c0("","hid",0,"[HIDMacHook eventDump] Unknown event type: 0x%x",uVar1);
    return;
  }
  FUN_100df99c0("","hid",0,"[HIDMacHook eventDump] event type = %s",pcVar2);
  return;
}

