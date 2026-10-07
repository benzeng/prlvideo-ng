
undefined8 FUN_100112a90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1008e3970("","vm",0,"Initing VM Memory");
  uVar1 = FUN_100112b10(param_1);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_100112c10(param_1);
    if (-1 < (int)uVar1) {
      FUN_1008e3970("","vm",0,"Load Monitor");
      uVar1 = FUN_100114fc0(param_1,param_2);
      if (-1 < (int)uVar1) {
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

