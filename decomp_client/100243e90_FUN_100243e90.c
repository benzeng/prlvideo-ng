
undefined8 FUN_100243e90(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x18a8e) {
    uVar1 = 0x3ae9;
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar1 = 0x3aed;
    }
  }
  else {
    uVar1 = 0x80000007;
    if (((param_2 == 0x18a8d) && (uVar1 = 0x3c9d, *(char *)(param_1 + 0x68) == '\0')) &&
       (uVar1 = 0x3ae8, *(int *)(param_1 + 0x2c) != 0)) {
      return 0x3aec;
    }
  }
  return uVar1;
}

