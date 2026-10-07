
undefined8 FUN_1008ca280(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_48 [12];
  
  if (param_2 - 1U < 9) {
LAB_1008ca2df:
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    local_48[0] = param_2;
    if (DAT_1011c2a10 != 0) {
      iVar1 = FUN_100885160(DAT_1011c2a10,local_48);
      if ((iVar1 != -1) && (iVar1 != -10)) goto LAB_1008ca2df;
    }
    FUN_100887ce0(0x22,0x8d,0x92,"v3_purp.c",0x94);
    uVar2 = 0;
  }
  return uVar2;
}

