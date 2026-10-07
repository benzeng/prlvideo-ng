
undefined1 FUN_100044ce0(long param_1,undefined8 param_2,QString *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_3->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(param_3,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100044d4c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100044d4c:
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar3 + 0x18) == 0) goto LAB_100044dbb;
  FUN_1004d2110(&local_40,*(long *)(lVar3 + 0x18) + 0x48,param_2);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100044da7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100044da7:
  if (*(int *)(param_3->field0_0x0 + 4) != 0) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
LAB_100044dbb:
  plVar1 = *(long **)(lVar3 + 0x90);
  if (((plVar1 != (long *)0x0) &&
      (cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3), cVar2 != '\0')) &&
     (*(int *)(param_3->field0_0x0 + 4) != 0)) {
    return 1;
  }
  QString::toUtf8();
  FUN_1008e3970("SGAH","vm",0,"Error: failed to get host path for guest file \"%s\"",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return 0;
}

