
void FUN_100709b60(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100709540(param_1,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x58))((long *)param_1[2],param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000100709b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at Prefetch(uiSize, uiOffset)");
  return;
}

