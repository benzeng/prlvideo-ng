
void FUN_1000a3b70(undefined8 param_1,long *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*param_2 != 0) {
    piVar1 = *(int **)(*param_2 + 0x10);
  }
  if (piVar1[1] - 1U < 5) {
    switch(piVar1[1]) {
    case 1:
      if (*piVar1 == 1) {
        FUN_1000a1990();
        return;
      }
      FUN_1000a11c0();
      return;
    case 2:
      FUN_1000a1a00();
      return;
    case 3:
      FUN_1000a2b00();
      return;
    case 5:
      FUN_1000a38f0(param_1,piVar1 + 8,param_3 + -0x20);
      return;
    }
  }
  return;
}

