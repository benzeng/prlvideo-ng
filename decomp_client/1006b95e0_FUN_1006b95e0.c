
long * FUN_1006b95e0(long *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_2;
  piVar2 = *(int **)(lVar1 + 0x28);
  *param_1 = (long)piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)param_1);
      lVar3 = *param_1;
      lVar4 = (long)*(int *)(lVar3 + 8);
      lVar1 = *(long *)(lVar1 + 0x28);
      if ((lVar1 + (long)*(int *)(lVar1 + 8) * 8 != lVar3 + lVar4 * 8) &&
         (lVar5 = *(int *)(lVar3 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar4 * 8),
                (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

