
ulong FUN_100cb75f0(int *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)param_1);
  if (0xcc < iVar1) {
    if (iVar1 == 0xcd) {
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_100cb761e_caseD_18;
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x18);
    }
    goto switchD_100cb761e_caseD_15;
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
    goto LAB_100cb7659;
  default:
switchD_100cb761e_caseD_18:
    param_1 = *(int **)(param_1 + 2);
    if (*param_1 != 4) {
      FUN_100c62ee0(0x2e,0x81,0x98,"cms_lib.c",0xea);
      return 0xffffffff;
    }
    break;
  case 0x1a:
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 2) + 8) + 0x10);
    goto LAB_100cb7659;
  }
switchD_100cb761e_caseD_15:
  plVar2 = (long *)(param_1 + 2);
LAB_100cb7659:
  return (ulong)(*plVar2 == 0);
}

