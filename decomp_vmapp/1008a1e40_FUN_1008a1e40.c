
void FUN_1008a1e40(long param_1)

{
  long lVar1;
  
  if ((*(long **)(param_1 + 0xb0) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0xb0), lVar1 != 0)) {
    FUN_100885590(lVar1,FUN_100899890);
    **(undefined8 **)(param_1 + 0xb0) = 0;
  }
  return;
}

