
void FUN_1000b7960(long param_1,char *param_2)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    QByteArray::QByteArray((QByteArray *)&local_28,param_2,0x12);
    FUN_1000d75c0(lVar1,0x92,(QByteArray *)&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

