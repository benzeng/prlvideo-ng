
void FUN_100200200(long *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010020023f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    return;
  }
  if (param_1[0xd] != 0) {
    *(undefined1 *)(param_1[0xd] + 0x38) = 1;
    return;
  }
  FUN_1001ff8b0(param_1,0x80000009);
  return;
}

