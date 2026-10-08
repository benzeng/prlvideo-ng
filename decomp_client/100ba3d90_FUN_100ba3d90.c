
int * FUN_100ba3d90(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    piVar1 = (int *)FUN_100ba3dd0(*(undefined8 *)(param_1 + 0x38));
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 7) {
        return piVar1;
      }
      FUN_100ba3950(piVar1);
    }
  }
  return (int *)0x0;
}

