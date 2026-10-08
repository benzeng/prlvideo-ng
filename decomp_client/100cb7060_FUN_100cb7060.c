
int * FUN_100cb7060(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 < 0xcd) {
    switch(iVar1) {
    case 0x15:
      goto switchD_100cb708e_caseD_15;
    case 0x16:
    case 0x19:
      piVar2 = (int *)(*(long *)(param_1[1] + 0x10) + 8);
      break;
    case 0x17:
      piVar2 = (int *)(*(long *)(param_1[1] + 0x18) + 0x10);
      break;
    default:
switchD_100cb708e_caseD_18:
      if (*(int *)param_1[1] == 4) {
        piVar2 = (int *)param_1[1] + 2;
      }
      else {
        FUN_100c62ee0(0x2e,0x81,0x98,"cms_lib.c",0xea);
        piVar2 = (int *)0x0;
      }
      break;
    case 0x1a:
      piVar2 = (int *)(*(long *)(param_1[1] + 8) + 0x10);
    }
  }
  else {
    if (iVar1 == 0xcd) {
      return (int *)(*(long *)(param_1[1] + 0x28) + 8);
    }
    if (iVar1 != 0x312) goto switchD_100cb708e_caseD_18;
    param_1 = *(undefined8 **)(param_1[1] + 0x18);
switchD_100cb708e_caseD_15:
    piVar2 = (int *)(param_1 + 1);
  }
  return piVar2;
}

