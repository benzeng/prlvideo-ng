
void FUN_100689640(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 < 0) {
    uVar2 = FUN_100dddcf0(param_2);
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download keys finished: %s",uVar2);
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_10084c890(param_1,param_2,&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    local_48 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
  }
  else {
    QObject::sender();
    lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_102209070);
    uVar2 = FUN_100dddcf0(param_2);
    if (lVar1 == 0) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download keys finished: %s but can\'t get task",
                    uVar2);
      local_40 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_10084c890(param_1,param_2,&local_40);
      if (*(int *)local_40 == -1) {
        return;
      }
      local_48 = local_40;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_29 = 0;
      }
    }
    else {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download keys finished: %s",uVar2);
      FUN_1002ca170(&local_48,lVar1);
      FUN_10084c890(param_1,param_2,&local_48);
      if (*(int *)local_48 == -1) {
        return;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_29 = 0;
      }
    }
  }
  QArrayData::deallocate(local_48,2,8);
  return;
}

