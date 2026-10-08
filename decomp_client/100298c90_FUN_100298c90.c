
undefined4 FUN_100298c90(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c280(uVar4);
  iVar2 = FUN_100319ae0(uVar4);
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = 0x3bfa;
  if ((iVar1 != 0) && (iVar1 != iVar2)) {
    if ((iVar2 == 1) || (iVar1 == 2)) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_10018c280(uVar4);
      local_30 = 3;
      local_28 = 0;
      local_2c = 0;
      local_24 = 0xffff;
      local_20 = 0;
      local_1c = 0;
      uVar4 = FUN_10031bef0(uVar4,*(undefined4 *)(param_1 + 0x2c),&local_30);
      uVar3 = FUN_100298870(param_1,uVar4);
    }
    else {
      CAbstractTask::prependSubTask((int)param_1);
      CAbstractTask::prependSubTask((int)param_1);
    }
  }
  return uVar3;
}

