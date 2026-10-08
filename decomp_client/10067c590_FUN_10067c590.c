
void FUN_10067c590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  CContentModel::setBusy(SUB81(param_1,0));
  *(undefined4 *)(param_1 + 0x158) = 1;
  uVar2 = FUN_1006268d0();
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  FUN_10068a710(uVar1,uVar3,param_2);
  return;
}

