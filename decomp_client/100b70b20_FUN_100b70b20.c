
undefined8 FUN_100b70b20(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 9) && ((0x1f2U >> (param_2 & 0x1f) & 1) != 0)) {
    *(uint *)(param_1 + 0x120) = param_2;
    FUN_100b93c80(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

