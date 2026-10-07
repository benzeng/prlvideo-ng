
undefined8 FUN_1008da5d0(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_100821ab0(*(undefined8 *)param_1);
  if (0xcc < iVar1) {
    if (iVar1 == 0xcd) {
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_1008da602_caseD_18;
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x18);
    }
    goto switchD_1008da602_caseD_15;
  }
  switch(iVar1) {
  case 0x15:
    break;
  case 0x16:
  case 0x19:
    param_1 = *(int **)(*(long *)(param_1 + 2) + 0x10);
    break;
  case 0x17:
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 2) + 0x18) + 0x10);
    goto LAB_1008da63d;
  default:
switchD_1008da602_caseD_18:
    param_1 = *(int **)(param_1 + 2);
    if (*param_1 != 4) {
      uVar5 = 0x81;
      uVar3 = 0x98;
      uVar6 = 0xea;
      goto LAB_1008da6d9;
    }
    break;
  case 0x1a:
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 2) + 8) + 0x10);
    goto LAB_1008da63d;
  }
switchD_1008da602_caseD_15:
  plVar4 = (long *)(param_1 + 2);
LAB_1008da63d:
  lVar2 = *plVar4;
  if (param_2 == 0) {
    if (lVar2 == 0) {
      lVar2 = FUN_1008a8380();
      *plVar4 = lVar2;
      if (lVar2 == 0) {
        uVar5 = 0x93;
        uVar3 = 0x41;
        uVar6 = 0x14c;
LAB_1008da6d9:
        FUN_100887ce0(0x2e,uVar5,uVar3,"cms_lib.c",uVar6);
        return 0;
      }
    }
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 0x20;
  }
  else if (lVar2 != 0) {
    FUN_1008a83a0();
    *plVar4 = 0;
  }
  return 1;
}

