
void FUN_10033d480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100350f40(param_1 + 0x1f8);
  if (lVar1 != 0) {
    FUN_100350bf0(lVar1,param_3);
    *(ulong *)(param_1 + 0x188) =
         *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3050);
  }
  return;
}

