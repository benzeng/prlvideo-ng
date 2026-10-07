
undefined8 FUN_1000af660(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000003;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x1168) = param_2;
    FUN_1002a4820(param_2);
    uVar1 = 0;
  }
  return uVar1;
}

