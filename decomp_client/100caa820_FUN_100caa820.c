
undefined4 FUN_100caa820(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long local_38 [2];
  undefined8 local_28;
  
  uVar1 = 0;
  lVar2 = FUN_100c59ef0(param_2,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xe,0x68,7,"conf_lib.c",0xcc);
  }
  else {
    if (DAT_102318458 == 0) {
      DAT_102318458 = FUN_100cab020();
    }
    (**(code **)(DAT_102318458 + 0x10))(local_38);
    local_28 = param_1;
    uVar1 = (**(code **)(local_38[0] + 0x30))(local_38,lVar2);
    FUN_100c586e0(lVar2);
  }
  return uVar1;
}

