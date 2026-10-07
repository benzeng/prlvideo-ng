
undefined4 FUN_100818220(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    FUN_100887ce0(0x14,0xb1,0x43,"ssl_rsa.c",0x1fc);
  }
  else {
    iVar1 = FUN_100812370((undefined8 *)(param_1 + 0x130));
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0xb1,0x41,"ssl_rsa.c",0x200);
    }
    else {
      lVar3 = FUN_100891f40();
      if (lVar3 == 0) {
        FUN_100887ce0(0x14,0xb1,6,"ssl_rsa.c",0x204);
      }
      else {
        FUN_10086c550(param_2);
        iVar1 = FUN_100892130(lVar3,6,param_2);
        if (0 < iVar1) {
          uVar2 = FUN_1008179d0(*(undefined8 *)(param_1 + 0x130),lVar3);
          FUN_1008924e0(lVar3);
          return uVar2;
        }
        FUN_10086c430(param_2);
      }
    }
  }
  return 0;
}

