
undefined1 FUN_10033fc40(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      if (param_2 != (undefined4 *)0x0) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x28);
        }
        uVar2 = FUN_1002308e0(uVar3);
        *param_2 = uVar2;
      }
      uVar4 = 1;
      if (param_3 != (undefined4 *)0x0) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x28);
        }
        uVar2 = FUN_1002308f0(uVar3);
        *param_3 = uVar2;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

