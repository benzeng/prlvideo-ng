
void FUN_10018dcf0(undefined8 param_1,int param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("{F3A039D6-1161-4128-8FA9-5C64DB865C5E}",0x26);
  local_38 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_30,&local_38,(long)param_2,0,10,0x20);
  FUN_100198ac0(param_1,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10018dd8a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10018dd8a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10018ddba;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10018ddba:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

