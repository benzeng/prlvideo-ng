
long FUN_100caa530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100caac50();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      FUN_100c62ee0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
      lVar1 = 0;
    }
    else {
      FUN_100c62ee0(0xe,0x6d,0x6c,"conf_lib.c",0x144);
      lVar1 = 0;
      FUN_100c642a0(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}

