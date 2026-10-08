
void FUN_1002141c0(long *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  QString this;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 0) {
      param_2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000100214338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  CSdkRequest::getResultAsString((int)&local_38);
  if (*(int *)(local_38 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong disk info result from server.");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    iVar1 = CAbstractTask::getCurrentSubTask();
    uVar2 = 0x80000014;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
    goto LAB_100214395;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Received disk resize info: %s");
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100214283;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100214283:
  this.field0_0x0 = operator_new(0xc0);
  CDiskImageInfo::CDiskImageInfo((CDiskImageInfo *)this.field0_0x0);
  local_48 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CBaseNode::fromString(this,SUB81(&local_48,0),(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002142f7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002142f7:
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 0) {
    param_1[6] = (long)this.field0_0x0;
  }
  else {
    param_1[7] = (long)this.field0_0x0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
LAB_100214395:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

