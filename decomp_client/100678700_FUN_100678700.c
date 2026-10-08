
void FUN_100678700(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    CContentModel::setBusy(SUB81(param_1,0));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
    }
    uVar2 = FUN_10016f500(uVar2);
    FUN_10068bc30(uVar1,uVar2);
    return;
  }
  return;
}

