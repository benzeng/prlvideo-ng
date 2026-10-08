
ulong FUN_100325c60(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x80) + 4) == 0) {
    uVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x88) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CAbstractTask::isFinished();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

