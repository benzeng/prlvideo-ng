
void FUN_1005bcc20(void)

{
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMutex::lock();
  QDomDocument::toString((int)&local_30);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Disk XML itself:\n %s",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005bccb1;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1005bccb1:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005bcce1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005bcce1:
  QMutex::unlock();
  return;
}

