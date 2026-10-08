
void FUN_1000bd4e0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 2);
  uVar1 = 0;
  if (lVar2 != 0) {
    FUN_10018c2b0(lVar2,0);
    lVar2 = CVmConfiguration::getVmSettings();
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = CVmSettings::getVmTools();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001000bd53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,0);
  return;
}

