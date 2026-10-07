
undefined8 FUN_1008cede0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  long local_20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (DAT_1011c2a18 == 0) {
      DAT_1011c2a18 = FUN_1008cfaa0();
    }
    (**(code **)(DAT_1011c2a18 + 0x10))(local_30);
    local_20 = param_1;
    if (param_2 == 0) {
      FUN_100887ce0(0xe,0x6c,0x6b,"conf_lib.c",0x12d);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_1008cf600(local_30,param_2);
    }
  }
  return uVar1;
}

