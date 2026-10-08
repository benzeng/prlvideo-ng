
long * FUN_100753710(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  piVar1 = *(int **)(param_2 + 0x10);
  *param_1 = (long)piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)param_1);
      lVar2 = *param_1;
      lVar4 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar4 * 8) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

