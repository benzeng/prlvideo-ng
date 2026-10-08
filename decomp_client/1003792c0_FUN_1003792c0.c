
void FUN_1003792c0(CScrollArea *param_1,undefined8 param_2,QWidget *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CScrollArea::CScrollArea(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10220e520;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220e6f0;
  pvVar1 = operator_new(0x68);
  FUN_100376bb0(pvVar1,param_1,param_2);
  *(void **)(param_1 + 0x38) = pvVar1;
  FUN_100376e60(pvVar1);
  FUN_100377490(*(undefined8 *)(param_1 + 0x38));
  if (DAT_10230ffd0 < 3) {
    return;
  }
  FUN_100323d90(&local_40,param_2);
  QString::toUtf8();
  pQVar3 = local_38 + *(long *)(local_38 + 0x10);
  uVar2 = FUN_100323dd0(param_2);
  FUN_1001884b0(&local_50,uVar2);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"Create console widget this=%p VmUuid %s ServerUuid %s",
                param_1,pQVar3,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003793da;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1003793da:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037940a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10037940a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037943a;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10037943a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

