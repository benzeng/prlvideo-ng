
void FUN_1000e7280(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)*param_2;
  *param_1 = (long)piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)param_1);
      lVar2 = *param_1;
      FUN_1000e7320(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                    lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return;
}

