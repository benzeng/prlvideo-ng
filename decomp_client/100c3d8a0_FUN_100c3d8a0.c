
int FUN_100c3d8a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  lVar2 = FUN_100c3d950(param_1,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0x10,0xbf,0x78,"ec_asn1.c",0x3ea);
  }
  else {
    iVar1 = FUN_100c80850(lVar2,param_2,&DAT_10224ccd8);
    if (iVar1 == 0) {
      FUN_100c62ee0(0x10,0xbf,0x79,"ec_asn1.c",0x3ee);
      FUN_100c801c0(lVar2,&DAT_10224ccd8);
      iVar1 = 0;
    }
    else {
      FUN_100c801c0(lVar2,&DAT_10224ccd8);
    }
  }
  return iVar1;
}

