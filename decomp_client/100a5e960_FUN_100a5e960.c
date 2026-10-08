
void FUN_100a5e960(undefined8 param_1,long *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*param_2 != 0) {
    piVar1 = *(int **)(*param_2 + 0x10);
  }
  if (*piVar1 == 3) {
    FUN_100a5e0f0();
    return;
  }
  if (*piVar1 == 1) {
    FUN_100a5dff0(param_1,piVar1 + 2,piVar1[1] + -8);
    return;
  }
  return;
}

