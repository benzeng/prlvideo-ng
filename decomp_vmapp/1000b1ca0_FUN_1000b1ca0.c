
undefined8 FUN_1000b1ca0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10e8) == '\0') {
    uVar1 = 0x80000083;
  }
  else {
    FUN_1007685b0(200);
    uVar1 = FUN_100093380(param_1,0);
    *(undefined2 *)(param_1 + 0x10e8) = 0;
  }
  return uVar1;
}

