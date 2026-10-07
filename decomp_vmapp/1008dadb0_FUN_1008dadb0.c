
ulong FUN_1008dadb0(int *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = FUN_100821ab0(*(undefined8 *)param_1);
  if (0xcc < iVar1) {
    if (iVar1 == 0xcd) {
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_1008dadde_caseD_18;
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x18);
    }
    goto switchD_1008dadde_caseD_15;
  }
  switch(iVar1) {
  case 0x15:
    break;
  case 0x16:
  case 0x19:
    param_1 = *(int **)(*(long *)(param_1 + 2) + 0x10);
    break;
  case 0x17:
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 2) + 0x18) + 0x10);
    goto LAB_1008dae19;
  default:
switchD_1008dadde_caseD_18:
    param_1 = *(int **)(param_1 + 2);
    if (*param_1 != 4) {
      FUN_100887ce0(0x2e,0x81,0x98,"cms_lib.c",0xea);
      return 0xffffffff;
    }
    break;
  case 0x1a:
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 2) + 8) + 0x10);
    goto LAB_1008dae19;
  }
switchD_1008dadde_caseD_15:
  plVar2 = (long *)(param_1 + 2);
LAB_1008dae19:
  return (ulong)(*plVar2 == 0);
}

