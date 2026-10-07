
void FUN_100402310(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0xa0);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + *(int *)(lVar1 + 0x50);
    }
    *(undefined4 *)(param_2 + 0xac) = 0;
    LOCK();
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
    UNLOCK();
    if (*(long *)(param_1 + 0x160) == 0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x100))
                (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 0xa0));
    }
    else {
      FUN_100405340(*(long *)(param_1 + 0x160),*(undefined8 *)(param_2 + 0xa0));
    }
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  return;
}

