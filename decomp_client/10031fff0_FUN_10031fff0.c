
void FUN_10031fff0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  QArrayData *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220b8e0);
  if ((lVar1 != 0) && (lVar2 = FUN_100319960(param_1), lVar2 == lVar1)) {
    local_38 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100829f70(param_1,&local_38,param_2,param_3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_2a = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}

