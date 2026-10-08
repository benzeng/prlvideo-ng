
undefined8 FUN_100cb2720(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_100c94a50(0,0);
    if (param_2 == 0) {
      FUN_100c62ee0(0x21,0x87,0x41,"pk7_attr.c",0x90);
      return 0;
    }
  }
  uVar1 = FUN_100cb10f0(param_1,0x34,0x17,param_2);
  return uVar1;
}

