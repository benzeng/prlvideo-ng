
void FUN_100db4d00(long *param_1,long param_2)

{
  long lVar1;
  
  *(long **)(param_2 + 0x40) = param_1 + 1;
  lVar1 = FUN_100db4670(param_1,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x50))((long *)param_1[2],param_2);
                    /* WARNING: Could not recover jumptable at 0x000100db4d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at Submit(dio)");
  return;
}

