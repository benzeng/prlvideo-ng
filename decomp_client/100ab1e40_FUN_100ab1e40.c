
void FUN_100ab1e40(long param_1,undefined4 param_2)

{
  undefined1 local_58 [64];
  
  FUN_100aafe50(local_58,param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_100aaf7b0(param_1 + 0x40);
  }
  FUN_100aafde0(local_58);
  return;
}

