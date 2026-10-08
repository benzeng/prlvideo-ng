
undefined8 FUN_100cdbd00(long param_1)

{
  char cVar1;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",2,"[HIDMacHook] Ungrab mouse from pure qt-mode");
  }
  *(undefined8 *)(param_1 + 0x50c) = 0;
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    FUN_100cdbd60(param_1);
  }
  return 1;
}

