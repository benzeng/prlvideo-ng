
void FUN_1007971f0(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  lVar1 = QObject::sender();
  if (lVar1 == 0) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  else {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1022013c0,0);
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (lVar1 != 0) {
      FUN_100215690(&local_38,lVar1);
      QString::operator=(&local_30,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_21 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10079728b;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
  }
LAB_10079728b:
  if ((param_2 < 0) && (lVar1 = FUN_100795f20(param_1,&local_30), lVar1 != 0)) {
    lVar2 = FUN_100795470(param_1,lVar1,&local_30);
    if (lVar2 != 0) {
      if (param_2 != -0x7ffffd8b) {
        *(int *)(lVar2 + 0x188) = param_2;
      }
      FUN_10079d650(lVar2,2);
    }
    FUN_100161ad0(lVar1);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

