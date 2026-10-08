
undefined8 FUN_100222a30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_24 [4];
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_100223940(param_1 + 0x28);
    uVar3 = 0;
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100319b00(uVar2);
    FUN_1000bf010(param_1 + 0x28,local_24);
    FUN_100223370(param_1);
  }
  else {
    uVar3 = 0x80000001;
    if (iVar1 == 0) {
      uVar3 = FUN_100222ac0(param_1);
      return uVar3;
    }
  }
  return uVar3;
}

