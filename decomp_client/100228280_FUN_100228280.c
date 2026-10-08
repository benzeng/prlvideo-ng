
void FUN_100228280(QList *param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 local_24;
  Data *local_20;
  undefined1 local_12;
  
  if (param_3 != 1) {
    if (param_3 == 2) {
      CAbstractTask::insertAfterSubTask((int)param_1,4);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
      uVar1 = 0;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
      uVar1 = 0x80000275;
    }
                    /* WARNING: Could not recover jumptable at 0x000100228334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
    return;
  }
  local_20 = (Data *)PTR_shared_null_1021e15e8;
  local_24 = 6;
  FUN_100129840(&local_20,&local_24);
  CAbstractTask::setSubTaskList(param_1);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_1002282e2;
    }
    QListData::dispose(local_20);
  }
LAB_1002282e2:
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}

