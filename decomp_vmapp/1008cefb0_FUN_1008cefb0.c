
long FUN_1008cefb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1008cf6d0();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      FUN_100887ce0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
      lVar1 = 0;
    }
    else {
      FUN_100887ce0(0xe,0x6d,0x6c,"conf_lib.c",0x144);
      lVar1 = 0;
      FUN_1008890a0(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}

