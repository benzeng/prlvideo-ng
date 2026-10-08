
void FUN_10068c250(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_10220a790);
  if (lVar1 != 0) {
    uVar2 = FUN_100dddcf0(param_2);
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"Get Upgrade Permanent to Pro URL was finished: %s"
                  ,uVar2);
    FUN_1002da910(&local_38,lVar1);
    FUN_10084cbe0(param_1,param_2,&local_38);
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

