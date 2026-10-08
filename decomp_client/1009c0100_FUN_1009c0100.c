
void FUN_1009c0100(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10099f0b0();
      return;
    case 1:
      FUN_10099f0c0();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0001009c0144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))
                (param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 3:
      FUN_1009a2f60();
      return;
    }
  }
  return;
}

