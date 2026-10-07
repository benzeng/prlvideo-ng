
int FUN_1008626a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  lVar2 = FUN_100862750(param_1,0);
  if (lVar2 == 0) {
    FUN_100887ce0(0x10,0xbf,0x78,"ec_asn1.c",0x3ea);
  }
  else {
    iVar1 = FUN_1008a52d0(lVar2,param_2,&DAT_100bdc998);
    if (iVar1 == 0) {
      FUN_100887ce0(0x10,0xbf,0x79,"ec_asn1.c",0x3ee);
      FUN_1008a4c40(lVar2,&DAT_100bdc998);
      iVar1 = 0;
    }
    else {
      FUN_1008a4c40(lVar2,&DAT_100bdc998);
    }
  }
  return iVar1;
}

