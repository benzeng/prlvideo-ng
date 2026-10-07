
void FUN_1005924e0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  if ((param_4 != 0xffffffff) && (*(char *)(param_1 + 0x7c) != '\0')) {
    uVar1 = (ulong)param_4 + *(long *)(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010059251a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 >> 9) * 8) +
                            (uVar1 & 0x1ff) * 8) + 0x88))();
    return;
  }
  return;
}

