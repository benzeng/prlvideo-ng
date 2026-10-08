
void FUN_100224ae0(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000275;
  if (((param_3 & 0xfffffffd) != 0) && (uVar1 = 0, param_3 == 1)) {
    CAbstractTask::removeSubTask((int)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100224b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

