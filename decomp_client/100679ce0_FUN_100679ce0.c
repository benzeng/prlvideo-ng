
void FUN_100679ce0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
      (param_3 == 1)) && (*(long *)(param_1 + 0x60) != 0)) {
    CContentModel::setBusy(SUB81(param_1,0));
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_100689280(*(undefined8 *)(param_1 + 0x20),uVar1);
    return;
  }
  return;
}

