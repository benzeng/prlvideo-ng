
void FUN_100db4c90(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100db4670(param_1,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x58))((long *)param_1[2],param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000100db4ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at Prefetch(uiSize, uiOffset)");
  return;
}

