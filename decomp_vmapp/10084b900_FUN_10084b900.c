
long * FUN_10084b900(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_1;
  if (*(int *)((long)param_1 + 0xc) < param_2) {
    lVar1 = FUN_10084b660(param_1,param_2);
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      if (*param_1 != 0) {
        FUN_10081e1a0();
      }
      *param_1 = lVar1;
      *(int *)((long)param_1 + 0xc) = param_2;
      plVar2 = param_1;
    }
  }
  return plVar2;
}

