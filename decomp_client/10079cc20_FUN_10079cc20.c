
void FUN_10079cc20(long param_1)

{
  long *plVar1;
  long lVar2;
  QObject *pQVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  param_1 = param_1 + 0x10;
  CAppliance::getApplianceId();
  plVar1 = (long *)FUN_100613ce0(param_1,&local_38);
  lVar2 = 0;
  if ((*plVar1 != 0) && (lVar2 = 0, *(int *)(*plVar1 + 4) != 0)) {
    lVar2 = plVar1[1];
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10079cc9d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10079cc9d:
  if (lVar2 == 0) goto LAB_10079cd73;
  CAppliance::getApplianceId();
  plVar1 = (long *)FUN_100613ce0(param_1,&local_40);
  pQVar3 = (QObject *)0x0;
  if ((*plVar1 != 0) && (pQVar3 = (QObject *)0x0, *(int *)(*plVar1 + 4) != 0)) {
    pQVar3 = (QObject *)plVar1[1];
  }
  QObject::removeEventFilter(pQVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10079cd0e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10079cd0e:
  CAppliance::getApplianceId();
  FUN_100613ce0(param_1,&local_48);
  QWidget::close();
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10079cd73;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10079cd73:
  CAppliance::getApplianceId();
  FUN_10079d160(param_1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

