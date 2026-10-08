
long FUN_100c8ca30(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100c7ae20();
  if (lVar2 == 0) {
    FUN_100c62ee0(0xd,0xca,0x41,"p5_pbe.c",0x86);
  }
  else {
    iVar1 = FUN_100c8c880(lVar2,param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_100c7ae40(lVar2);
  }
  return 0;
}

