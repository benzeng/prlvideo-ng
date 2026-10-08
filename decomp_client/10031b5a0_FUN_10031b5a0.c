
byte FUN_10031b5a0(long param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x150) == 0) {
    bVar1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x150) + 4) == 0) {
    bVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x158) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = CAbstractTask::isFinished();
    bVar1 = bVar1 ^ 1;
    if ((param_2 != (undefined4 *)0x0) && (bVar1 != 0)) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x150) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x150) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x158);
      }
      uVar2 = FUN_100224f70(uVar3);
      *param_2 = uVar2;
      bVar1 = 1;
    }
  }
  return bVar1;
}

