
undefined8 FUN_1000871a0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*param_2 != 0) && (lVar1 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar1 = param_2[1];
  }
  *param_3 = lVar1;
  return CONCAT71((int7)((ulong)lVar1 >> 8),1);
}

