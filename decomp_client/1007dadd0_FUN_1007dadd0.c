
void FUN_1007dadd0(long param_1,int param_2)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102207580);
  if (lVar1 != 0) {
    if (param_2 < 0) {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) < 0) {
        QTimer::start();
        return;
      }
    }
    else {
      local_28 = *(QArrayData **)(lVar1 + 0x20);
      if (1 < *(int *)local_28 + 1U) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_1b = *(int *)local_28 != 0;
        UNLOCK();
      }
      FUN_1007db320(param_1 + 0x18,&local_28);
      FUN_1007dbf00(param_1 + 0x2c,&local_28);
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
  }
  return;
}

