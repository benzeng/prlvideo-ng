
long FUN_100caa440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_40 [16];
  long local_30;
  
  if (param_1 == 0) {
    lVar1 = FUN_100caac50(0,param_2,param_3);
    if (lVar1 == 0) {
      FUN_100c62ee0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
      lVar1 = 0;
    }
  }
  else {
    if (DAT_102318458 == 0) {
      DAT_102318458 = FUN_100cab020();
    }
    (**(code **)(DAT_102318458 + 0x10))(local_40);
    local_30 = param_1;
    lVar1 = FUN_100caac50(local_40,param_2,param_3);
    if (lVar1 == 0) {
      FUN_100c62ee0(0xe,0x6d,0x6c,"conf_lib.c",0x144);
      lVar1 = 0;
      FUN_100c642a0(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}

