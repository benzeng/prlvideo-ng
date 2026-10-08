
void FUN_100361020(long *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((((*(char *)((long)param_1 + 0x14) != '\0') && (*param_1 != 0)) &&
      (*(int *)(*param_1 + 4) != 0)) && (param_1[1] != 0)) {
    uVar2 = FUN_10018c280();
    uVar2 = FUN_100319d40(uVar2);
    FUN_10035bc20(uVar2,(int)param_1[2]);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1);
    }
  }
  return;
}

