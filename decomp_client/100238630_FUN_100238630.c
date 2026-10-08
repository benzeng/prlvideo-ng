
void FUN_100238630(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 9) {
    CAbstractTask::removeSubTask((int)param_1);
  }
  else {
    iVar1 = CAbstractTask::getCurrentSubTask();
    lVar2 = 0;
    if ((param_1[0xe] != 0) && (lVar2 = 0, *(int *)(param_1[0xe] + 4) != 0)) {
      lVar2 = param_1[0xf];
    }
    if (iVar1 != 10) {
      CAbstractTask::setOption(lVar2,2,0);
      return;
    }
    QObject::deleteLater();
  }
                    /* WARNING: Could not recover jumptable at 0x000100238693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

