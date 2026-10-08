
undefined8 FUN_1002cca80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
  iVar1 = CAbstractTask::getCurrentSubTask();
  lVar2 = param_1 + 0x20;
  if (iVar1 == 1) {
    lVar2 = param_1 + 0x28;
  }
  lVar2 = FUN_10015cb20(uVar3,lVar2);
  if (lVar2 != 0) {
    uVar3 = FUN_10018f120(lVar2,0xf,0);
    return uVar3;
  }
  return 0;
}

