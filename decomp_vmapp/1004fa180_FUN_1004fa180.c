
void FUN_1004fa180(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 - param_2 != 0) {
    lVar3 = 0;
    do {
      plVar2 = operator_new(8);
      lVar1 = **(long **)(param_3 + lVar3);
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(long **)(param_1 + lVar3) = plVar2;
      lVar3 = lVar3 + 8;
    } while ((param_1 - param_2) + lVar3 != 0);
  }
  return;
}

