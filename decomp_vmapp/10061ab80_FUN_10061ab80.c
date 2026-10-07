
undefined8 FUN_10061ab80(long param_1)

{
  uint uVar1;
  void *pvVar2;
  
  ___bzero(param_1 + 0x10,0xb1);
  uVar1 = FUN_1007782a0(1,0);
  if ((uVar1 & 0x2000000) == 0) {
    FUN_1008e3970("","EngAES",0,"AES NI support is not found at CPU [0x%x]",uVar1);
  }
  else {
    FUN_1008e3970("","EngAES",0,"AES NI support is found at CPU. [0x%x]",uVar1);
    if ((char)DAT_1011cca90 == '\0') {
      pvVar2 = *(void **)(param_1 + 0xd8);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = _valloc(0x1e4);
        *(void **)(param_1 + 0xd8) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          FUN_1008e3970("","EngAES",0,"AES NI structure allocation faied.");
          return 0x80000002;
        }
      }
      ___bzero(pvVar2,0x1e4);
      *(code **)(param_1 + 0xe0) = FUN_10061aca0;
      *(code **)(param_1 + 0xe8) = FUN_10061acc0;
    }
    else {
      FUN_1008e3970("","EngAES",0,"AES NI support disabled via VM flags.");
    }
  }
  return 0;
}

