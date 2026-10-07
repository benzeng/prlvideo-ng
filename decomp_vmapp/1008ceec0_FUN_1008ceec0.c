
long FUN_1008ceec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_40 [16];
  long local_30;
  
  if (param_1 == 0) {
    lVar1 = FUN_1008cf6d0(0,param_2,param_3);
    if (lVar1 == 0) {
      FUN_100887ce0(0xe,0x6d,0x6a,"conf_lib.c",0x141);
      lVar1 = 0;
    }
  }
  else {
    if (DAT_1011c2a18 == 0) {
      DAT_1011c2a18 = FUN_1008cfaa0();
    }
    (**(code **)(DAT_1011c2a18 + 0x10))(local_40);
    local_30 = param_1;
    lVar1 = FUN_1008cf6d0(local_40,param_2,param_3);
    if (lVar1 == 0) {
      FUN_100887ce0(0xe,0x6d,0x6c,"conf_lib.c",0x144);
      lVar1 = 0;
      FUN_1008890a0(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}

