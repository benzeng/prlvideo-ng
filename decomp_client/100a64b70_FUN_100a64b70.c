
void FUN_100a64b70(long param_1)

{
  undefined1 local_50 [64];
  
  FUN_100aafe50(local_50,param_1 + 0x18);
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    _write(*(int *)(param_1 + 0x14),(void *)(param_1 + 0x10),1);
  }
  FUN_100aafde0(local_50);
  return;
}

