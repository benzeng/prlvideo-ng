
void FUN_1005d5450(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x48);
  plVar2[4] = param_2[2];
  lVar1 = *param_2;
  plVar2[3] = param_2[1];
  plVar2[2] = lVar1;
  lVar1 = param_2[3];
  plVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1005b6da0(plVar2 + 6,param_2 + 4);
  plVar2[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}

