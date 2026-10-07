
void FUN_1003ff180(long param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x1d8))();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | 1;
  }
  return;
}

