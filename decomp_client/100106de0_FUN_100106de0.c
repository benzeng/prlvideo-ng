
void FUN_100106de0(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar1 = QObject::sender();
  if ((lVar1 != 0) &&
     (lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0), lVar1 != 0)) {
    if (param_2 == 0x30000004) {
      FUN_100188480(&local_28,lVar1);
      FUN_100106400(param_1,&local_28);
      if (*(int *)local_28 == -1) {
        return;
      }
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
    }
    else {
      FUN_100188480(&local_30,lVar1);
      FUN_100106890(param_1,&local_30);
      if (*(int *)local_30 == -1) {
        return;
      }
      local_28 = local_30;
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_19 = 0;
      }
    }
    QArrayData::deallocate(local_28,2,8);
    return;
  }
  uVar2 = QObject::sender();
  FUN_100df99c0("GSHEXT","prl_client_app",0,
                "Error: signal sender=%p is invalid for slot onVmStateChanged()",uVar2);
  return;
}

