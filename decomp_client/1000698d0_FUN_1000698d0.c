
void FUN_1000698d0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_100df99c0("","prl_client_app",0,"Shell process was finished with status: %d, exit code: %d ",
                param_3,param_2);
  if ((((param_3 == 0) && (param_1[3] != 0)) && (*(int *)(param_1[3] + 4) != 0)) &&
     (param_1[4] != 0)) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 0) {
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 5) = 2;
      }
      else if (param_2 == 1) {
        *(undefined4 *)(param_1 + 5) = 3;
      }
      else if (param_2 == 0) {
        *(undefined4 *)(param_1 + 5) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 5) = 0;
      }
    }
  }
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && ((long *)param_1[4] != (long *)0x0))
  {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  uVar2 = 0x80000009;
  if (param_3 == 0) {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000699a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar2);
  return;
}

