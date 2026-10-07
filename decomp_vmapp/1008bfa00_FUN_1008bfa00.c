
undefined8 FUN_1008bfa00(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_40 [10];
  
  if (param_2 - 1U < 8) {
LAB_1008bfa5f:
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    local_40[0] = param_2;
    if (DAT_1011c29f8 != 0) {
      iVar1 = FUN_100885160(DAT_1011c29f8,local_40);
      if ((iVar1 != -1) && (iVar1 != -9)) goto LAB_1008bfa5f;
    }
    FUN_100887ce0(0xb,0x8d,0x7b,"x509_trs.c",0xa3);
    uVar2 = 0;
  }
  return uVar2;
}

