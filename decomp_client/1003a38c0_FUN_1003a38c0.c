
undefined8 * FUN_1003a38c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1003b0a60(*(long *)(param_2 + 0x40) + 0x20);
  if (lVar1 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    uVar2 = FUN_1003b0a60(*(long *)(param_2 + 0x40) + 0x20);
    FUN_10015aab0(param_1,uVar2);
  }
  return param_1;
}

