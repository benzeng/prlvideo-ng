
long * FUN_100c26b00(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_1;
  if (*(int *)((long)param_1 + 0xc) < param_2) {
    lVar1 = FUN_100c26860(param_1,param_2);
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      if (*param_1 != 0) {
        FUN_100bf3910();
      }
      *param_1 = lVar1;
      *(int *)((long)param_1 + 0xc) = param_2;
      plVar2 = param_1;
    }
  }
  return plVar2;
}

