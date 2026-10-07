
void FUN_100703c40(char *param_1)

{
  QArrayData *local_40;
  QVariant local_38 [16];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  QObject::property((char *)local_38);
  QVariant::toString();
  QVariant::~QVariant(local_38);
  if (*(int *)(local_28 + 4) == 0) goto LAB_100703cec;
  QString::toUtf8();
  QIODevice::write(param_1,(longlong)(local_40 + *(long *)(local_40 + 0x10)));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100703ce0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100703ce0:
  QProcess::closeWriteChannel();
LAB_100703cec:
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

