
void FUN_10002e760(long *param_1,long param_2)

{
  *param_1 = param_2;
  FUN_10002e210(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010002e799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x1a48) + 0x20))
            (*(long **)(*param_1 + 0x1a48),10,FUN_10002e720,param_1);
  return;
}

