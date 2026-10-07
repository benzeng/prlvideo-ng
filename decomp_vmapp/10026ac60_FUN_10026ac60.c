
void FUN_10026ac60(QByteArray *param_1,QByteArray *param_2)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  if (0x3f < *(int *)(*(long *)param_2 + 4)) {
    QByteArray::operator=(param_1,param_2);
    return;
  }
  QByteArray::append(param_1);
  if (0x40 < *(int *)(*(long *)param_1 + 4)) {
    QByteArray::right((int)(QByteArray *)&local_28);
    QByteArray::operator=(param_1,(QByteArray *)&local_28);
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
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

