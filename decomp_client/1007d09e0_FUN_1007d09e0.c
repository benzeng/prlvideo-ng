
void FUN_1007d09e0(QString *param_1,undefined8 *param_2)

{
  QArrayData *local_48;
  QDateTime local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  ClientStatistics::setInstalledSoftware((QTypedArrayData<unsigned_short> *)(param_1 + 2));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d0a4a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007d0a4a:
  QDateTime::currentDateTime();
  QDateTime::operator=((QDateTime *)(param_1 + 0x43),&local_40);
  QDateTime::~QDateTime(&local_40);
  CBaseNode::toString(SUB81(&local_48,0),SUB81((QTypedArrayData<unsigned_short> *)(param_1 + 2),0));
  CCepStatisticsCollector::collected(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

