
long FUN_100547330(long param_1,undefined8 param_2,ulong param_3,uint *param_4)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (param_3 < uVar1) {
    if (uVar1 < *param_4 + param_3) {
      *param_4 = (int)uVar1 - (int)param_3;
    }
    lVar2 = param_3 + *(long *)(param_1 + 8);
  }
  else {
    FUN_1008e3970("","TransMem",0,
                  "CBuffCompressionCtx::check_range() offset %#llx is out of size %#llx");
    lVar2 = 0;
  }
  return lVar2;
}

