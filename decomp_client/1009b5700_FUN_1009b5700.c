
void FUN_1009b5700(long param_1,char param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  puVar1 = PTR_staticMetaObject_1021e1520;
  if ((param_3 == 0x8000000) && (param_2 != '\0')) {
    uVar2 = FUN_1009983c0(param_1);
    FUN_100992840(uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    return;
  }
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_An_error_occurred_while_collecti_10227e130);
  QMetaObject::tr((char *)&local_30,puVar1,(int)PTR_s__10227e138);
  FUN_1009b6410(param_1,&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b57c0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009b57c0:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

