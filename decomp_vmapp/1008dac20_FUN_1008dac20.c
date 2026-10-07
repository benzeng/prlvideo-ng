
undefined8 FUN_1008dac20(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 < 0xcd) {
    switch(iVar1) {
    case 0x16:
    case 0x19:
      puVar3 = *(undefined8 **)(param_1[1] + 0x10);
      break;
    case 0x17:
      goto switchD_1008dac4e_caseD_17;
    default:
switchD_1008dac4e_caseD_18:
      FUN_100887ce0(0x2e,0x82,0x98,"cms_lib.c",0x10c);
      return 0;
    case 0x1a:
      puVar3 = *(undefined8 **)(param_1[1] + 8);
    }
  }
  else {
    if (iVar1 == 0xcd) {
      puVar3 = *(undefined8 **)(param_1[1] + 0x28);
      goto LAB_1008daca9;
    }
    if (iVar1 != 0x312) goto switchD_1008dac4e_caseD_18;
switchD_1008dac4e_caseD_17:
    puVar3 = *(undefined8 **)(param_1[1] + 0x18);
  }
LAB_1008daca9:
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *puVar3;
  }
  return uVar2;
}

