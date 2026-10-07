
void FUN_1008a1e80(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 8), lVar1 != 0)) {
    FUN_100885590(lVar1,FUN_100899890);
    *(undefined8 *)(*(long *)(param_1 + 0xb0) + 8) = 0;
  }
  return;
}

