
int FUN_100811690(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100816a00();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0x16 < iVar1) goto LAB_1008116dc;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0x16 < iVar1) goto LAB_1008116dc;
    uVar2 = 0;
  }
  FUN_1008111a0(param_1,uVar2,iVar1,param_4);
LAB_1008116dc:
  return iVar1 + -0x17;
}

