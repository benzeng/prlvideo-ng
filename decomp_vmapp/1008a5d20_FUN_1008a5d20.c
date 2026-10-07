
ulong FUN_1008a5d20(long *param_1,void *param_2,int *param_3,char *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  void **ppvVar7;
  undefined1 local_19;
  void *local_18;
  
  local_18 = param_2;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_4 + 0x20) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001008a5d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)();
    return uVar5;
  }
  if ((*param_4 == '\0') && (*(long *)(param_4 + 8) == 1)) {
LAB_1008a5d75:
    if (*(long *)(param_4 + 8) == -4) {
      piVar1 = (int *)*param_1;
      iVar3 = *piVar1;
      *param_3 = iVar3;
      param_1 = (long *)(piVar1 + 2);
    }
    else {
      iVar3 = *param_3;
    }
  }
  else {
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*param_4 != '\x05') goto LAB_1008a5d75;
    iVar3 = *(int *)(*param_1 + 4);
    *param_3 = iVar3;
  }
  if (iVar3 < 0x102) {
    uVar5 = 0;
    switch(iVar3) {
    case 1:
      iVar3 = (int)*param_1;
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (*(long *)(param_4 + 8) != -4) {
        if (iVar3 == 0) {
          if (*(long *)(param_4 + 0x28) == 0) {
            return 0xffffffff;
          }
        }
        else if (0 < *(long *)(param_4 + 0x28)) {
          return 0xffffffff;
        }
      }
      local_19 = (undefined1)iVar3;
      uVar5 = 1;
      puVar6 = &local_19;
      break;
    case 2:
    case 10:
switchD_1008a5da9_caseD_2:
      ppvVar7 = &local_18;
      if (param_2 == (void *)0x0) {
        ppvVar7 = (void **)0x0;
      }
      uVar4 = FUN_10089aad0(*param_1,ppvVar7);
      return (ulong)uVar4;
    case 3:
      ppvVar7 = &local_18;
      if (param_2 == (void *)0x0) {
        ppvVar7 = (void **)0x0;
      }
      uVar4 = FUN_100899950(*param_1,ppvVar7);
      return (ulong)uVar4;
    default:
      goto switchD_1008a5da9_caseD_4;
    case 5:
      goto switchD_1008a5da9_caseD_5;
    case 6:
      puVar6 = *(undefined1 **)(*param_1 + 0x18);
      uVar5 = (ulong)*(uint *)(*param_1 + 0x14);
    }
  }
  else {
    if ((iVar3 == 0x102) || (iVar3 == 0x10a)) goto switchD_1008a5da9_caseD_2;
switchD_1008a5da9_caseD_4:
    puVar2 = (uint *)*param_1;
    if ((*(long *)(param_4 + 0x28) == 0x800) && ((puVar2[4] & 0x10) != 0)) {
      if (param_2 == (void *)0x0) {
        return 0xfffffffe;
      }
      *(void **)(puVar2 + 2) = param_2;
      *puVar2 = 0;
      return 0xfffffffe;
    }
    puVar6 = *(undefined1 **)(puVar2 + 2);
    uVar5 = (ulong)*puVar2;
  }
  if (((int)uVar5 != 0) && (param_2 != (void *)0x0)) {
    _memcpy(param_2,puVar6,(long)(int)uVar5);
  }
switchD_1008a5da9_caseD_5:
  return uVar5;
}

