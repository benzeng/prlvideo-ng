
undefined8 FUN_100ab1c40(long param_1)

{
  undefined1 local_50 [64];
  
  FUN_100aafe50(local_50,param_1 + 200);
  if (*(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0x38)) {
    FUN_100ab10b0(param_1);
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  FUN_100aafde0(local_50);
  return 1;
}

