
long * FUN_100446850(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == (long *)0x0) {
    *param_1 = (long)PTR_shared_null_1021e15e8;
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = (long)piVar1;
    if (*piVar1 != -1) {
      if (*piVar1 == 0) {
        QListData::detach((int)param_1);
        lVar2 = *param_1;
        lVar4 = (long)*(int *)(lVar2 + 8);
        lVar3 = *param_2;
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
  }
  return param_1;
}

