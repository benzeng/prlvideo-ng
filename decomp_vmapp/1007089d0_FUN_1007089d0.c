
undefined8 FUN_1007089d0(long param_1,uint param_2,undefined4 param_3)

{
  if (2 < param_2) {
    FUN_1008e3970("","AbstractFile",0,"SetHandle: Incorrent index %u specified");
    return 0x80000003;
  }
  *(undefined4 *)(param_1 + 8 + (ulong)param_2 * 4) = param_3;
  return 0;
}

