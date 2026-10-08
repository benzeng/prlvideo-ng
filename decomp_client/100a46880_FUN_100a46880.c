
undefined8 FUN_100a46880(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar2 = 0;
  if (param_2 == 0) {
    lVar1 = QObject::sender();
    uVar2 = 0;
    if (lVar1 != 0) {
      QObject::property((char *)&local_30);
      QVariant::toString();
      QVariant::~QVariant(&local_30);
      uVar2 = FUN_100a464e0(&local_20);
      if (*(int *)local_20 != -1) {
        if (*(int *)local_20 != 0) {
          LOCK();
          *(int *)local_20 = *(int *)local_20 + -1;
          UNLOCK();
          if (*(int *)local_20 != 0) {
            return uVar2;
          }
          local_11 = 0;
        }
        QArrayData::deallocate(local_20,2,8);
      }
    }
  }
  return uVar2;
}

