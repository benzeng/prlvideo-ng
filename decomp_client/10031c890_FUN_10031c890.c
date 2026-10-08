
void FUN_10031c890(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x160) != '\0') {
    FUN_10031c7c0(param_1,0);
    if (((*(long *)(param_1 + 0x168) != 0) && (*(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) &&
       (*(long *)(param_1 + 0x170) != 0)) {
      cVar1 = FUN_10072a410();
      if (cVar1 != '\0') {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x168) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x170);
        }
        FUN_10072a120(uVar2);
        if (((*(long *)(param_1 + 0x168) != 0) && (*(int *)(*(long *)(param_1 + 0x168) + 4) != 0))
           && (*(long **)(param_1 + 0x170) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010031c91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x170) + 0x20))();
          return;
        }
      }
    }
  }
  return;
}

