
ulong FUN_10080ef10(long param_1,int param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 < 0x32) {
    if (param_2 < 0x20) {
      if (param_2 == 0x10) {
        *(undefined8 *)(param_1 + 0xa0) = param_4;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 0x20:
        param_3 = param_3 | *(ulong *)(param_1 + 0x1a8);
LAB_10080efb5:
        *(ulong *)(param_1 + 0x1a8) = param_3;
        return param_3;
      case 0x21:
        param_3 = param_3 | *(ulong *)(param_1 + 0x1b0);
LAB_10080f003:
        *(ulong *)(param_1 + 0x1b0) = param_3;
        return param_3;
      case 0x28:
        return (long)*(int *)(param_1 + 0x90);
      case 0x29:
        iVar1 = *(int *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = (int)param_3;
        return (long)iVar1;
      }
    }
  }
  else {
    if (param_2 < 0x33) {
      return *(ulong *)(param_1 + 0x1b8);
    }
    if (param_2 < 0x34) {
      uVar2 = *(ulong *)(param_1 + 0x1b8);
      *(ulong *)(param_1 + 0x1b8) = param_3;
      return uVar2;
    }
    if (param_2 < 0x4d) {
      if (param_2 == 0x34) {
        if (param_3 - 0x200 < 0x3e01) {
          *(int *)(param_1 + 0x1c8) = (int)param_3;
          return 1;
        }
      }
      else {
        if (param_2 != 0x4c) goto switchD_10080ef5d_caseD_22;
        if (*(long *)(param_1 + 0x80) != 0) {
          return (long)*(int *)(*(long *)(param_1 + 0x80) + 0x4a4);
        }
      }
      return 0;
    }
    if (param_2 == 0x4d) {
      param_3 = ~param_3 & *(ulong *)(param_1 + 0x1a8);
      goto LAB_10080efb5;
    }
    if (param_2 == 0x4e) {
      param_3 = ~param_3 & *(ulong *)(param_1 + 0x1b0);
      goto LAB_10080f003;
    }
  }
switchD_10080ef5d_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x00010080effa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))();
  return uVar2;
}

