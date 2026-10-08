
void FUN_100c7d3c0(long param_1)

{
  long lVar1;
  
  if ((*(long **)(param_1 + 0xb0) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0xb0), lVar1 != 0)) {
    FUN_100c60790(lVar1,FUN_100c74e10);
    **(undefined8 **)(param_1 + 0xb0) = 0;
  }
  return;
}

