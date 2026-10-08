
undefined8 FUN_100b0cfe0(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if (((((param_1 & 0xf) != 0) && (uVar1 = 8, (param_1 & 7) != 0)) &&
      (uVar1 = 4, (param_1 & 3) != 0)) && (uVar1 = 2, (param_1 & 1) != 0)) {
    FUN_100df99c0("","dimg",0,"Unable to determine heads count from size %llu");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

