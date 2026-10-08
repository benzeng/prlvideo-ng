
void FUN_100cd7870(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_100cd73c0(param_1);
    lVar1 = 0;
    do {
      FUN_100cd6400(param_1,*(undefined4 *)((long)&DAT_101daf1a0 + lVar1));
      lVar1 = lVar1 + 4;
    } while (lVar1 != 0xdc);
    return;
  }
  FUN_100df99c0("","hid",0,"[HIDMacHook] dumpEvent: Ivolid pointer to event");
  return;
}

