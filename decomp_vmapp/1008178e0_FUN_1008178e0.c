
undefined4 FUN_1008178e0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    FUN_100887ce0(0x14,0xcc,0x43,"ssl_rsa.c",0x96);
  }
  else {
    iVar1 = FUN_100812370((undefined8 *)(param_1 + 0x100));
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0xcc,0x41,"ssl_rsa.c",0x9a);
    }
    else {
      lVar3 = FUN_100891f40();
      if (lVar3 == 0) {
        FUN_100887ce0(0x14,0xcc,6,"ssl_rsa.c",0x9e);
      }
      else {
        FUN_10086c550(param_2);
        iVar1 = FUN_100892130(lVar3,6,param_2);
        if (0 < iVar1) {
          uVar2 = FUN_1008179d0(*(undefined8 *)(param_1 + 0x100),lVar3);
          FUN_1008924e0(lVar3);
          return uVar2;
        }
        FUN_10086c430(param_2);
      }
    }
  }
  return 0;
}

