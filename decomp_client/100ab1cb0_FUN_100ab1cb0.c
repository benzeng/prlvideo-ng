
void FUN_100ab1cb0(long param_1)

{
  int iVar1;
  undefined1 local_50 [64];
  
  FUN_100aafe50(local_50,param_1 + 200);
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(param_1 + 0xdc) + -1;
    *(int *)(param_1 + 0xdc) = iVar1;
    if ((*(int *)(param_1 + 0xe0) != 0) &&
       (iVar1 + *(int *)(param_1 + 0xd4) < *(int *)(param_1 + 0xd8))) {
      FUN_100aaf7b0(param_1 + 0x40,1);
    }
  }
  FUN_100aafde0(local_50);
  return;
}

