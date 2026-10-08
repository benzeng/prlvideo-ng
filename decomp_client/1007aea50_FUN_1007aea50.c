
void FUN_1007aea50(long param_1,undefined8 param_2,int param_3)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_3 == 1) {
    QVariant::toString();
    FUN_1007b3a00(*(undefined8 *)(param_1 + 0x108),&local_28);
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
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

