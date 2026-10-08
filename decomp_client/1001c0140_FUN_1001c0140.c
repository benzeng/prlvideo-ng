
void FUN_1001c0140(long param_1)

{
  int *piVar1;
  int *local_28;
  int *local_20;
  undefined1 local_11;
  
  FUN_1001c0220(&local_28,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c));
  if (*(int **)(param_1 + 0x10) != local_28) {
    FUN_1001c14c0(&local_20,&local_28);
    piVar1 = *(int **)(param_1 + 0x10);
    *(int **)(param_1 + 0x10) = local_20;
    local_20 = piVar1;
    if (*piVar1 != -1) {
      if (*piVar1 != 0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_11 = *piVar1 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001c01a9;
      }
      FUN_1001c13c0(&local_20,piVar1);
    }
  }
LAB_1001c01a9:
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      local_20 = (int *)CONCAT71(local_20._1_7_,*local_28 != 0);
      if (*local_28 != 0) goto LAB_1001c01d3;
    }
    FUN_1001c13c0(&local_28,local_28);
  }
LAB_1001c01d3:
  CAbstaractConflictsChecker::checkFinished();
  return;
}

