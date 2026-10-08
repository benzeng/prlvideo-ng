
undefined1 FUN_1003620a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 uVar2;
  long local_20;
  
  lVar1 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
  if (lVar1 == 0) {
    uVar2 = 0;
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                  "(!)Error: can\'t get VM instance to send the scancode.");
  }
  else {
    FUN_10018c250(&local_20,lVar1);
    _PrlDevKeyboard_SendKeyEventEx(local_20,param_2,param_3);
    uVar2 = 1;
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar2;
}

