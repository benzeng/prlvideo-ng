
undefined8 FUN_100c5aef0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == -1) {
    if (piVar1 == (int *)0x0) goto LAB_100c5af67;
  }
  else {
    if (*piVar1 == 6) {
      _shutdown(iVar2,2);
      iVar2 = *(int *)(param_1 + 0x28);
    }
    _close(iVar2);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  if (*(long *)(piVar1 + 2) != 0) {
    FUN_100bf3910();
  }
  if (*(long *)(piVar1 + 4) != 0) {
    FUN_100bf3910();
  }
  FUN_100bf3910(piVar1);
LAB_100c5af67:
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

