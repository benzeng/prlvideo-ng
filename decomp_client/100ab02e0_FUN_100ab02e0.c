
void FUN_100ab02e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[1];
  while (plVar2 = plVar1, plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[2];
    param_1[1] = (long)plVar1;
    if (*plVar2 == 0) {
      FUN_100aafb40(plVar2,plVar2[1]);
      plVar1 = (long *)param_1[1];
    }
  }
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 0) {
      FUN_100aafe50(plVar1,plVar1[1]);
    }
    plVar1[3] = param_1[2];
  }
  return;
}

