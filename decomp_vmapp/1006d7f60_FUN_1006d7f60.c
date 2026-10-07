
void FUN_1006d7f60(void)

{
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (DAT_1011b55f8 < 1) {
    return;
  }
  QString::toUtf8();
  FUN_1008e3970("","cmn_utils",1,"User with name %s",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1006d7fe4;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1006d7fe4:
  if (0 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",1,"User with home path %s",local_30 + *(long *)(local_30 + 0x10));
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

