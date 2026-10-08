
void FUN_100d803a0(void)

{
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (DAT_10230ffd0 < 1) {
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",1,"User with name %s",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_100d80424;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100d80424:
  if (0 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",1,"User with home path %s",local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return;
}

