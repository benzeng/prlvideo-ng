
void FUN_10047a2c0(long param_1)

{
  QArrayData *local_20;
  
  QString::toUtf8();
  FUN_10047a190(param_1 + 8,local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(local_20 + 4),
                0x2066);
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

