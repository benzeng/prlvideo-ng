
void FUN_100377410(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  
  if (*param_1 != param_2) {
    if (param_2 == 0) {
      (*DAT_1011c6ee0)(0);
    }
    else {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      FUN_10036d070(param_2);
    }
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      piVar1 = (int *)((long)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *param_1 = param_2;
  }
  return;
}

