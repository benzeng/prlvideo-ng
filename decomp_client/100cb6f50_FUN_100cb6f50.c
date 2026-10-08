
undefined8 FUN_100cb6f50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_100bf7220(*(undefined8 *)param_1);
  if (0xcc < iVar2) {
    if (iVar2 == 0xcd) {
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x28);
    }
    else {
      if (iVar2 != 0x312) goto switchD_100cb6f7e_caseD_18;
      param_1 = *(int **)(*(long *)(param_1 + 2) + 0x18);
    }
    goto switchD_100cb6f7e_caseD_15;
  }
  switch(iVar2) {
  case 0x15:
    break;
  case 0x16:
  case 0x19:
    param_1 = *(int **)(*(long *)(param_1 + 2) + 0x10);
    break;
  case 0x17:
    param_1 = (int *)(*(long *)(*(long *)(param_1 + 2) + 0x18) + 0x10);
    goto LAB_100cb6fb9;
  default:
switchD_100cb6f7e_caseD_18:
    param_1 = *(int **)(param_1 + 2);
    if (*param_1 != 4) {
      FUN_100c62ee0(0x2e,0x81,0x98,"cms_lib.c",0xea);
      return 0;
    }
    break;
  case 0x1a:
    param_1 = (int *)(*(long *)(*(long *)(param_1 + 2) + 8) + 0x10);
    goto LAB_100cb6fb9;
  }
switchD_100cb6f7e_caseD_15:
  param_1 = param_1 + 2;
LAB_100cb6fb9:
  puVar1 = *(undefined4 **)param_1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = FUN_100c59d10();
  }
  else {
    if (*(long *)(puVar1 + 4) != 0x20) {
      uVar3 = FUN_100c59870(*(undefined8 *)(puVar1 + 2),*puVar1);
      return uVar3;
    }
    uVar3 = FUN_100c59860();
  }
  uVar3 = FUN_100c58530(uVar3);
  return uVar3;
}

