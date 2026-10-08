
void FUN_100ad5540(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long local_30;
  
  local_30 = 0;
  iVar1 = _PrlUIEmuInput_Create(&local_30);
  if (iVar1 < 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"PrlUIEmuInput_Create err %#x",iVar1);
    }
  }
  else {
    iVar1 = _PrlUIEmuInput_AddText(local_30,param_2,param_3);
    if (iVar1 < 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"PrlUIEmuInput_AddText err %#x",iVar1);
      }
    }
    else {
      iVar1 = _PrlVm_UIEmuSendInput(*(undefined8 *)(param_1 + 0xf0),local_30,0);
      if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"PrlVm_UIEmuSendInput err %#x",iVar1);
      }
    }
  }
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return;
}

