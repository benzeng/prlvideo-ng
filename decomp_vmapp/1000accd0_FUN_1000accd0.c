
void FUN_1000accd0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000accfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1a40) + 0x10))
            (*(long **)(param_1 + 0x1a40),
             *(long *)(param_1 + 0x1938) + 0xd440 + (ulong)*(uint *)(param_2 + 4) * 0x1040);
  return;
}

