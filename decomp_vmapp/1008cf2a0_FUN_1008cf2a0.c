
undefined4 FUN_1008cf2a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long local_38 [2];
  undefined8 local_28;
  
  uVar1 = 0;
  lVar2 = FUN_10087ecf0(param_2,0);
  if (lVar2 == 0) {
    FUN_100887ce0(0xe,0x68,7,"conf_lib.c",0xcc);
  }
  else {
    if (DAT_1011c2a18 == 0) {
      DAT_1011c2a18 = FUN_1008cfaa0();
    }
    (**(code **)(DAT_1011c2a18 + 0x10))(local_38);
    local_28 = param_1;
    uVar1 = (**(code **)(local_38[0] + 0x30))(local_38,lVar2);
    FUN_10087d4e0(lVar2);
  }
  return uVar1;
}

