
long * FUN_1005451b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,int *param_6,code *param_7,long param_8)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  *param_6 = 1;
  if ((*(char *)(param_4 + 8) != '\0') &&
     (plVar2 = operator_new(0xe0,(nothrow_t *)PTR_nothrow_100ba21c8), plVar2 != (long *)0x0)) {
    FUN_100548d70(plVar2,param_1,param_2,param_3,param_4,param_5);
    pcVar4 = param_7;
    if (((ulong)param_7 & 1) != 0) {
      pcVar4 = *(code **)(param_7 + *(long *)((long)plVar2 + param_8) + -1);
    }
    iVar1 = (*pcVar4)();
    if (iVar1 - 2U < 2) {
      *param_6 = iVar1;
      lVar3 = *plVar2;
      goto LAB_100545311;
    }
    if (iVar1 == 4) {
      *param_6 = 4;
    }
    else if (iVar1 == 0) {
      *param_6 = 0;
      return plVar2;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(char *)(param_4 + 10) == '\0') {
    return (long *)0x0;
  }
  plVar2 = operator_new(0x70,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_100546a30(plVar2,param_1,param_2,param_3,param_4,param_5);
  if (((ulong)param_7 & 1) != 0) {
    param_7 = *(code **)(param_7 + *(long *)((long)plVar2 + param_8) + -1);
  }
  iVar1 = (*param_7)();
  if (iVar1 - 2U < 2) {
    *param_6 = iVar1;
  }
  else if (iVar1 == 4) {
    *param_6 = 4;
  }
  else if (iVar1 == 0) {
    *param_6 = 0;
    return plVar2;
  }
  lVar3 = *plVar2;
LAB_100545311:
  (**(code **)(lVar3 + 8))(plVar2);
  return (long *)0x0;
}

