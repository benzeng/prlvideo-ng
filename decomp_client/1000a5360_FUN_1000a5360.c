
void FUN_1000a5360(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar2 = QObject::sender();
  if ((lVar2 == 0) ||
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0), lVar2 == 0)) {
    uVar3 = QObject::sender();
    FUN_100df99c0("VSDD","prl_client_app",0,
                  "Error: signal sender=%p is invalid for slot onVmStateChanged()",uVar3);
    return;
  }
  if (param_2 == 0x30000004) {
    FUN_100188480(&local_28,lVar2);
    FUN_1000a4ad0(param_1,&local_28);
    if (*(int *)local_28 == -1) goto LAB_1000a5466;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      iVar1 = *(int *)local_28;
      UNLOCK();
joined_r0x0001000a5451:
      local_19 = iVar1 != 0;
      if ((bool)local_19) goto LAB_1000a5466;
    }
  }
  else {
    FUN_100188480(&local_30,lVar2);
    FUN_1000a4cf0(param_1,&local_30);
    if (*(int *)local_30 == -1) goto LAB_1000a5466;
    local_28 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      iVar1 = *(int *)local_30;
      UNLOCK();
      goto joined_r0x0001000a5451;
    }
  }
  QArrayData::deallocate(local_28,2,8);
LAB_1000a5466:
  FUN_1000a54f0(param_1);
  return;
}

