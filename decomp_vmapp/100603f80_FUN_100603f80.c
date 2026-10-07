
void FUN_100603f80(long param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100603fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xf8))
            (param_2,param_4,param_5,param_3 + *(long *)(param_1 + 8),param_5,
             *(code **)(*param_2 + 0xf8));
  return;
}

