
void FUN_100060550(int param_1)

{
  QArrayData *local_20;
  
  QString::toUtf8();
  if (param_1 == 3) {
    FUN_1008e3970("","vm",0x10,"%s",local_20 + *(long *)(local_20 + 0x10));
  }
  else if (param_1 == 2) {
    FUN_1008e3970("","vm",0x10,"%s",local_20 + *(long *)(local_20 + 0x10));
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

