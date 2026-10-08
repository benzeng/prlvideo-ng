
void FUN_10067bad0(long param_1)

{
  undefined8 uVar1;
  
  CContentModel::setBusy(SUB81(param_1,0));
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_10068a870(*(undefined8 *)(param_1 + 0x20),uVar1);
  return;
}

