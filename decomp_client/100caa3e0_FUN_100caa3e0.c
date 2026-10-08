
undefined8 FUN_100caa3e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x69;
    uVar2 = 0x128;
  }
  else {
    if (param_2 != 0) {
      uVar1 = FUN_100caab80();
      return uVar1;
    }
    uVar1 = 0x6b;
    uVar2 = 0x12d;
  }
  FUN_100c62ee0(0xe,0x6c,uVar1,"conf_lib.c",uVar2);
  return 0;
}

