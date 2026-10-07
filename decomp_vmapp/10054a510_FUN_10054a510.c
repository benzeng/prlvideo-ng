
void FUN_10054a510(long param_1,char param_2)

{
  char cVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::close_file(del=%d)",param_2);
  FUN_1007614d0(param_1 + 0x68);
  if (param_2 == '\0') {
    return;
  }
  QString::toUtf8();
  cVar1 = FUN_100761940(local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10054a5a6;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10054a5a6:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::close_file() failed to unlink %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  return;
}

