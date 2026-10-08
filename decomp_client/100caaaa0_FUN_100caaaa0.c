
undefined4 FUN_100caaaa0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = FUN_100c59ef0(param_2,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xe,0x6a,7,"conf_lib.c",0x166);
  }
  else {
    if (param_1 == (long *)0x0) {
      FUN_100c62ee0(0xe,0x69,0x69,"conf_lib.c",0x172);
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1,lVar2);
    }
    FUN_100c586e0(lVar2);
  }
  return uVar1;
}

