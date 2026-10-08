
void FUN_100805c80(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10019dc20(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 1:
      FUN_10019da50();
      return;
    case 2:
      FUN_10019da70();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100805ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))(param_1,**(undefined8 **)(param_4 + 8));
      return;
    }
  }
  return;
}

