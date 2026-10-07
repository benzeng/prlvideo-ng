
void FUN_1000c56a0(long param_1)

{
  long lVar1;
  
  FUN_1008e3970("","vm",0," ");
  FUN_1008e3970("","vm",0,
                "     VMM/VM time profiling statistics >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
    do {
      FUN_1000c4ed0(*(undefined8 *)(param_1 + 0x48 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}

