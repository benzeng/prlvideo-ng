
undefined8 FUN_1008cee60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x69;
    uVar2 = 0x128;
  }
  else {
    if (param_2 != 0) {
      uVar1 = FUN_1008cf600();
      return uVar1;
    }
    uVar1 = 0x6b;
    uVar2 = 0x12d;
  }
  FUN_100887ce0(0xe,0x6c,uVar1,"conf_lib.c",uVar2);
  return 0;
}

