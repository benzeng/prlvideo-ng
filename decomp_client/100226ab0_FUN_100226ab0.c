
undefined8 FUN_100226ab0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100226acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
    return uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = FUN_100226af0(param_1);
    return uVar2;
  }
  return 0;
}

