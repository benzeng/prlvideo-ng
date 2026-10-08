
undefined8 * FUN_100ccd600(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 *in_R8;
  long *local_28;
  undefined1 local_19;
  
  FUN_100ccd530(&local_28);
  if ((local_28 != (long *)0x0) && (local_28[2] != 0)) {
    in_R8 = (undefined8 *)(local_28[2] + 8);
  }
  piVar2 = (int *)*in_R8;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_19 = *piVar2 != 0;
    UNLOCK();
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return param_1;
}

