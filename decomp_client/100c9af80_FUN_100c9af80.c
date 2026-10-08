
undefined8 FUN_100c9af80(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_40 [10];
  
  if (param_2 - 1U < 8) {
LAB_100c9afdf:
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    local_40[0] = param_2;
    if (DAT_102318438 != 0) {
      iVar1 = FUN_100c60360(DAT_102318438,local_40);
      if ((iVar1 != -1) && (iVar1 != -9)) goto LAB_100c9afdf;
    }
    FUN_100c62ee0(0xb,0x8d,0x7b,"x509_trs.c",0xa3);
    uVar2 = 0;
  }
  return uVar2;
}

