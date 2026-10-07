
void FUN_10070a720(long *param_1,long param_2)

{
  long lVar1;
  
  *(long **)(param_2 + 0x40) = param_1 + 1;
  lVar1 = FUN_100709540(param_1,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))((long *)param_1[2],param_2);
                    /* WARNING: Could not recover jumptable at 0x00010070a75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at Resubmit(dio)");
  return;
}

