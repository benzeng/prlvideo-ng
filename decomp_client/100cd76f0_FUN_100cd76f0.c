
void FUN_100cd76f0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = _CGEventGetIntegerValueField();
  if (lVar2 < 0x80) {
    switch(lVar2) {
    case 0:
      return;
    case 1:
      FUN_100cd6400(param_1,param_2);
      pcVar3 = "kCGScrollPhaseBegan";
      break;
    case 2:
      FUN_100cd6400(param_1,param_2);
      pcVar3 = "kCGScrollPhaseChanged";
      break;
    default:
switchD_100cd771c_caseD_3:
      uVar1 = _CGEventGetIntegerValueField(param_1,param_2);
      FUN_100df99c0("","hid",0,"[HIDMacHook eventDump] Unknown event phase: %d",uVar1);
      return;
    case 4:
      FUN_100cd6400(param_1,param_2);
      pcVar3 = "kCGScrollPhaseEnded";
      break;
    case 8:
      FUN_100cd6400(param_1,param_2);
      pcVar3 = "kCGScrollPhaseCancelled";
    }
  }
  else {
    if (lVar2 != 0x80) goto switchD_100cd771c_caseD_3;
    FUN_100cd6400(param_1,param_2);
    pcVar3 = "kCGScrollPhaseMayBegin";
  }
  FUN_100df99c0("","hid",0,"[HIDMacHook printEventPhase] event phase = %s",pcVar3);
  return;
}

