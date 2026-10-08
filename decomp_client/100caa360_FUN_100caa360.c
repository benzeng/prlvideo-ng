
undefined8 FUN_100caa360(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  long local_20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (DAT_102318458 == 0) {
      DAT_102318458 = FUN_100cab020();
    }
    (**(code **)(DAT_102318458 + 0x10))(local_30);
    local_20 = param_1;
    if (param_2 == 0) {
      FUN_100c62ee0(0xe,0x6c,0x6b,"conf_lib.c",0x12d);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_100caab80(local_30,param_2);
    }
  }
  return uVar1;
}

