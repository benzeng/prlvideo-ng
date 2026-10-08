
undefined8 FUN_100cb7510(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 < 0xcd) {
    switch(iVar1) {
    case 0x16:
    case 0x19:
      plVar4 = *(long **)(param_1[1] + 0x10);
      break;
    case 0x17:
      goto switchD_100cb7545_caseD_17;
    default:
switchD_100cb7545_caseD_18:
      FUN_100c62ee0(0x2e,0x82,0x98,"cms_lib.c",0x10c);
      return 0;
    case 0x1a:
      plVar4 = *(long **)(param_1[1] + 8);
    }
  }
  else {
    if (iVar1 == 0xcd) {
      plVar4 = *(long **)(param_1[1] + 0x28);
      goto LAB_100cb75a0;
    }
    if (iVar1 != 0x312) goto switchD_100cb7545_caseD_18;
switchD_100cb7545_caseD_17:
    plVar4 = *(long **)(param_1[1] + 0x18);
  }
LAB_100cb75a0:
  uVar3 = 0;
  if (plVar4 != (long *)0x0) {
    if (param_2 != 0) {
      lVar2 = FUN_100bf8640(param_2);
      if (lVar2 == 0) {
        return 0;
      }
      FUN_100c74e10(*plVar4);
      *plVar4 = lVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}

