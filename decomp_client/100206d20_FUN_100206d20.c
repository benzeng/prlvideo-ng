
void FUN_100206d20(long *param_1,undefined8 param_2)

{
  char cVar1;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (((param_1[10] == 0) || (*(int *)(param_1[10] + 4) == 0)) || (param_1[0xb] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
                    /* WARNING: Could not recover jumptable at 0x000100206e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
    FUN_100188480(&local_30,param_2);
    cVar1 = operator==(&local_30,(QString *)(param_1 + 7));
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100206db9;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100206db9:
    if (cVar1 == '\0') {
      return;
    }
  }
  if (((param_1[0x10] != 0) && (*(int *)(param_1[0x10] + 4) != 0)) && (param_1[0x11] != 0)) {
    QWidget::hide();
  }
  FUN_100188480(&local_38,param_2);
  FUN_100116b80(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100206e2c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100206e2c:
  FUN_10080e230(param_1,100);
  CAbstractTask::appendSubTask((int)param_1);
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

