
long * FUN_1008dfdc0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((long *)*param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar1 = (long *)*param_1;
  do {
    plVar3 = plVar1;
    plVar2 = (long *)0x0;
    if ((long *)plVar3[2] == (long *)0x0) break;
    plVar2 = plVar3;
    plVar1 = (long *)plVar3[2];
  } while (*plVar3 != *param_2);
  if (*plVar3 == *param_2) {
    plVar2 = plVar3;
  }
  return plVar2;
}

