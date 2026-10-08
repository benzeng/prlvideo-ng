
undefined8 FUN_1000e0710(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_1 + 0x108) != 2) {
    if (*(uint *)(param_1 + 0x108) < 2) {
      uVar1 = FUN_1000bd150();
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

