
void FUN_1008a5130(long *param_1,char *param_2)

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
LAB_1008a518b:
    if (iVar2 < 5) {
      if (iVar2 == -4) {
        FUN_1008a5130(param_1,0);
        FUN_10081e1a0(*param_1);
        goto LAB_1008a51dd;
      }
      if (iVar2 == 1) {
LAB_1008a51c2:
        if (param_2 != (char *)0x0) {
          *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
          return;
        }
        *(undefined4 *)param_1 = 0xffffffff;
        return;
      }
    }
    else {
      if (iVar2 == 5) goto LAB_1008a51dd;
      if (iVar2 == 6) {
        FUN_100899890(*param_1);
        goto LAB_1008a51dd;
      }
    }
  }
  else {
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x18),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001008a5159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    if (*param_2 != '\x05') {
      iVar2 = *(int *)(param_2 + 8);
      if (iVar2 == 1) goto LAB_1008a51c2;
      if (*param_1 == 0) {
        return;
      }
      goto LAB_1008a518b;
    }
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_1008afd70(*param_1);
  *param_1 = 0;
LAB_1008a51dd:
  *param_1 = 0;
  return;
}

