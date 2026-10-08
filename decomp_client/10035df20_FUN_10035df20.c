
void FUN_10035df20(long param_1,long *param_2)

{
  int *piVar1;
  int *local_20;
  undefined1 local_11;
  
  if (*(long *)(param_1 + 0x40) != *param_2) {
    FUN_10006b440(&local_20);
    piVar1 = *(int **)(param_1 + 0x40);
    *(int **)(param_1 + 0x40) = local_20;
    if (*piVar1 != -1) {
      if (*piVar1 != 0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) {
          return;
        }
        local_11 = 0;
      }
      local_20 = piVar1;
      FUN_10006b5d0(&local_20,piVar1);
    }
  }
  return;
}

