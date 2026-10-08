
undefined1 FUN_10032ec90(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long local_38;
  long local_30;
  
  local_30 = 0;
  iVar1 = _PrlUIEmuInput_Create(&local_30);
  if (iVar1 < 0) {
    if (DAT_10230ffd0 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      FUN_100df99c0("UIEMU","prl_client_app",1,"PrlUIEmuInput_Create err %#x",iVar1);
    }
  }
  else {
    iVar1 = _PrlUIEmuInput_AddText(local_30,param_2,param_3);
    if (iVar1 < 0) {
      if (DAT_10230ffd0 < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        FUN_100df99c0("UIEMU","prl_client_app",1,"PrlUIEmuInput_AddText err %#x",iVar1);
      }
    }
    else {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar2 = FUN_100319390(uVar2);
      FUN_10018c250(&local_38,uVar2);
      iVar1 = _PrlVm_UIEmuSendInput(local_38,local_30,0);
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
      uVar3 = 1;
      if (iVar1 < 0) {
        if (DAT_10230ffd0 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          FUN_100df99c0("UIEMU","prl_client_app",1,"PrlVm_UIEmuSendInput err %#x",iVar1);
        }
      }
    }
  }
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

