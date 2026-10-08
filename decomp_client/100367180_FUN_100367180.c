
undefined8 FUN_100367180(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    if (*(int *)(*(long *)(param_1 + 8) + 0x80) == 0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),0xf,0);
    }
    else if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Skipping mouse release: btns != 0");
    }
  }
  return 0;
}

