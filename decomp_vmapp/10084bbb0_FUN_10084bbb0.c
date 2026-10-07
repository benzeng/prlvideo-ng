
undefined8 FUN_10084bbb0(long *param_1,long param_2)

{
  long *plVar1;
  
  if (*(int *)((long)param_1 + 0xc) < 1) {
    plVar1 = (long *)FUN_10084b660(param_1,1);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*param_1 != 0) {
      FUN_10081e1a0();
    }
    *param_1 = (long)plVar1;
    *(undefined4 *)((long)param_1 + 0xc) = 1;
  }
  else {
    plVar1 = (long *)*param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *plVar1 = param_2;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  return 1;
}

