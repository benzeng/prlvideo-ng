
undefined8 FUN_10023abf0(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00010023ac2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
    return uVar2;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010023ac3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 200))(param_1);
    return uVar2;
  case 2:
    uVar2 = FUN_10023aca0(param_1);
    return uVar2;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010023ac6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,1);
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00010023ac79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
    return uVar2;
  default:
    return 0x80000001;
  }
}

