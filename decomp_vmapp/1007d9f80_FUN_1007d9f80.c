
void FUN_1007d9f80(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  return;
}

