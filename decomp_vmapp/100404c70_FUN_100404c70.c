
void FUN_100404c70(long param_1,long param_2)

{
  long lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_1007d9a20(param_2 + 0x30), lVar1 != 0)) &&
     (*(long *)(lVar1 + -0x10) == (ulong)*(uint *)(param_2 + 0x1c) + *(long *)(param_2 + 0x20))) {
    return;
  }
  *(long *)(param_1 + 0x38) = param_2;
  return;
}

