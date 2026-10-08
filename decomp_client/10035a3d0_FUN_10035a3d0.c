
void FUN_10035a3d0(long param_1,QString *param_2)

{
  char cVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
  QString::arg(&local_40,&local_48,0xc,0,10,0x20);
  QString::arg(&local_38,&local_40,2,0,10,0x20);
  QString::arg(&local_30,&local_38,1,0,10,0x20);
  QString::arg(&local_28,&local_30,0xa28f,0,10,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10035a4a6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10035a4a6:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10035a4d6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10035a4d6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10035a506;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10035a506:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10035a536;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10035a536:
  cVar1 = operator==(&local_28,param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  FUN_10035a170(param_1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

