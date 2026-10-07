
void FUN_1002888e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[0x741a];
  while (plVar2 = plVar1, plVar2 != param_1 + 0x741a) {
    plVar1 = (long *)*plVar2;
    if (*(int *)((long)plVar2 + 0x3c) == 0) {
      (**(code **)(*param_1 + 0xa0))(param_1,plVar2 + -0x13,0);
    }
  }
  plVar1 = (long *)param_1[0x741c];
  while (plVar2 = plVar1, plVar2 != param_1 + 0x741c) {
    plVar1 = (long *)*plVar2;
    if (*(int *)((long)plVar2 + 0x3c) == 0) {
      (**(code **)(*param_1 + 0xa0))(param_1,plVar2 + -0x13,0);
    }
  }
  (**(code **)(*param_1 + 0xd0))(param_1);
  if ((long *)param_1[0x7418] == param_1 + 0x7418) {
    (**(code **)(*param_1 + 200))(param_1);
  }
  FUN_100287530(param_1);
  return;
}

