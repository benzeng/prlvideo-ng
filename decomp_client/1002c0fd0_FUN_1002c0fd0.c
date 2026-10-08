
undefined8 FUN_1002c0fd0(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1[4] != 0) && (*(int *)(param_1[4] + 4) != 0)) && (param_1[5] != 0)) {
    FUN_100df99c0("","prl_client_app",0,"Acronis True Image for Mac wizard already shown");
    uVar1 = 0x80000009;
    if ((int)param_1[3] != 0) {
      CAbstractTask::clearSubTaskList();
      (**(code **)(*param_1 + 0x80))(param_1);
      uVar1 = 0;
    }
  }
  return uVar1;
}

