
void FUN_100676830(long param_1,byte param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    *(uint *)(param_1 + 0x148) = param_2 + 1;
    if (param_2 == 0) {
      CContentModel::setBusy(SUB81(param_1,0));
    }
    if (1 < DAT_10230ffd0) {
      if (*(int *)(param_1 + 0x148) == 2) {
        pcVar2 = " in background";
      }
      else {
        pcVar2 = "";
      }
      FUN_100df99c0("[LICENSE]","prl_client_app",2,"Start keys download%s",pcVar2);
    }
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_1006894e0(*(undefined8 *)(param_1 + 0x20),uVar1);
    return;
  }
  return;
}

