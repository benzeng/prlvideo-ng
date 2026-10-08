
void FUN_10057df70(undefined8 param_1,undefined8 param_2,int param_3)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_3 == 1) {
    QVariant::toString();
    FUN_10057dd40(param_1,&local_28);
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

