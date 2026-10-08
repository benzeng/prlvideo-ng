
void FUN_100c806b0(long *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    piVar1 = (int *)*param_1;
    if (*(long *)(piVar1 + 2) == 0) {
      return;
    }
    iVar2 = *piVar1;
    param_1 = (long *)(piVar1 + 2);
LAB_100c8070b:
    if (iVar2 < 5) {
      if (iVar2 == -4) {
        FUN_100c806b0(param_1,0);
        FUN_100bf3910(*param_1);
        goto LAB_100c8075d;
      }
      if (iVar2 == 1) {
LAB_100c80742:
        if (param_2 != (char *)0x0) {
          *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
          return;
        }
        *(undefined4 *)param_1 = 0xffffffff;
        return;
      }
    }
    else {
      if (iVar2 == 5) goto LAB_100c8075d;
      if (iVar2 == 6) {
        FUN_100c74e10(*param_1);
        goto LAB_100c8075d;
      }
    }
  }
  else {
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x18),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c806d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    if (*param_2 != '\x05') {
      iVar2 = *(int *)(param_2 + 8);
      if (iVar2 == 1) goto LAB_100c80742;
      if (*param_1 == 0) {
        return;
      }
      goto LAB_100c8070b;
    }
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_100c8b2f0(*param_1);
  *param_1 = 0;
LAB_100c8075d:
  *param_1 = 0;
  return;
}

