
void FUN_10058ffe0(long param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
                    /* WARNING: Could not recover jumptable at 0x000100590013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                    ((ulong)uVar1 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                          ((ulong)((int)*(long *)(param_1 + 0x58) + uVar1) & 0x1ff) * 8) + 0x60))();
  return;
}

