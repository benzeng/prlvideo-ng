
void FUN_10067e870(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  CContentModel::setBusy(SUB81(param_1,0));
  FUN_10084a8e0(param_1);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_10068c950(*(undefined8 *)(param_1 + 0x20),uVar1,param_2);
  return;
}

