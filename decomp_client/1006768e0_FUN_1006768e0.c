
void FUN_1006768e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar2 = FUN_10016f500(uVar2);
  cVar1 = FUN_10061b4d0(uVar2,0x200);
  if (cVar1 != '\0') {
    return;
  }
  CContentModel::setBusy(SUB81(param_1,0));
  *(undefined4 *)(param_1 + 0x154) = 1;
  FUN_10084a960(param_1);
  FUN_10068a610(*(undefined8 *)(param_1 + 0x20),uVar2);
  return;
}

