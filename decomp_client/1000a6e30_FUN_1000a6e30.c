
void FUN_1000a6e30(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar1 = QObject::sender();
  if ((lVar1 != 0) &&
     (lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0), lVar1 != 0)) {
    if ((param_3 < 0) && (param_3 != -0x7ffffaad)) {
      FUN_100188480(&local_28,lVar1);
      FUN_1000a6b90(param_1,&local_28);
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
  uVar2 = QObject::sender();
  FUN_100df99c0("SGAD","prl_client_app",0,
                "Error: signal sender=%p is invalid for slot vmStartChecksCompleted()",uVar2);
  return;
}

