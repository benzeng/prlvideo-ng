
void FUN_100ab0a70(long *param_1)

{
  uint uVar1;
  uint uVar2;
  
  do {
    do {
      uVar1 = *(uint *)((long)param_1 + 0x1c);
    } while ((uVar1 & 1) != 0);
    if ((uVar1 & 6) == 0) {
      return;
    }
    LOCK();
    uVar2 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 == uVar2) {
      *(uint *)((long)param_1 + 0x1c) = uVar1 | 1;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ab0aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}

