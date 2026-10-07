
undefined4 FUN_1008cf480(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = FUN_10087ecf0(param_2,0);
  if (lVar2 == 0) {
    FUN_100887ce0(0xe,0x72,7,"conf_lib.c",0x112);
  }
  else {
    if (param_1 == (long *)0x0) {
      FUN_100887ce0(0xe,0x6e,0x69,"conf_lib.c",0x11e);
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3);
    }
    FUN_10087d4e0(lVar2);
  }
  return uVar1;
}

