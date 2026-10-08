
void FUN_100379590(QScrollArea *param_1)

{
  long lVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  *(undefined ***)param_1 = &PTR_FUN_10220e520;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220e6f0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x38) + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Deleting console widget <%p> VM display is NULL",param_1);
    goto LAB_1003796a3;
  }
  FUN_100323d90(&local_30);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Deleting console widget <%p> vmUuid: %s",param_1,
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100379650;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100379650:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003796a3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003796a3:
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  QScrollArea::~QScrollArea(param_1);
  return;
}

