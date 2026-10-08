
undefined8 FUN_100cb7250(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  local_38 = in_RAX;
  iVar1 = FUN_100bf7220(*param_1);
  if (0xcc < iVar1) {
    if (iVar1 == 0xcd) {
      piVar5 = *(int **)(param_1[1] + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_100cb728a_caseD_18;
      piVar5 = *(int **)(param_1[1] + 0x18);
    }
    goto LAB_100cb72c5;
  }
  switch(iVar1) {
  case 0x15:
    plVar6 = param_1 + 1;
    break;
  case 0x16:
  case 0x19:
    piVar5 = *(int **)(param_1[1] + 0x10);
    goto LAB_100cb72c5;
  case 0x17:
    plVar6 = (long *)(*(long *)(param_1[1] + 0x18) + 0x10);
    break;
  default:
switchD_100cb728a_caseD_18:
    piVar5 = (int *)param_1[1];
    if (*piVar5 != 4) {
      uVar7 = 0x81;
      uVar4 = 0x98;
      uVar8 = 0xea;
      goto LAB_100cb73d8;
    }
LAB_100cb72c5:
    plVar6 = (long *)(piVar5 + 2);
    break;
  case 0x1a:
    plVar6 = (long *)(*(long *)(param_1[1] + 8) + 0x10);
  }
  if ((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x10) & 0x20) != 0)) {
    lVar3 = FUN_100c593f0(param_2,0x401);
    if (lVar3 == 0) {
      uVar7 = 0x6e;
      uVar4 = 0x69;
      uVar8 = 0xa9;
      goto LAB_100cb73d8;
    }
    uVar2 = FUN_100c58d60(lVar3,3,0,&local_38);
    FUN_100c58830(lVar3,0x200);
    FUN_100c58d60(lVar3,0x82,0,0);
    FUN_100c8b330(*plVar6,local_38,uVar2);
    *(ulong *)(*plVar6 + 0x10) = *(ulong *)(*plVar6 + 0x10) & 0xffffffffffffffdf;
  }
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 < 0x312) {
    switch(iVar1) {
    case 0x15:
    case 0x17:
    case 0x1a:
      return 1;
    case 0x16:
      uVar4 = FUN_100cb96a0(param_1,param_2);
      return uVar4;
    case 0x19:
      uVar4 = FUN_100cba070(param_1,param_2,0);
      return uVar4;
    }
  }
  else if (iVar1 == 0x312) {
    return 1;
  }
  uVar7 = 0x6e;
  uVar4 = 0x9c;
  uVar8 = 0xc4;
LAB_100cb73d8:
  FUN_100c62ee0(0x2e,uVar7,uVar4,"cms_lib.c",uVar8);
  return 0;
}

