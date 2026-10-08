
char * FUN_1006b05b0(char *param_1,long param_2)

{
  char cVar1;
  void *pvVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (DAT_102310838 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1000392c0(pvVar2);
    DAT_102274b18 = 1;
    DAT_102310838 = pvVar2;
  }
  pvVar2 = DAT_102310838;
  FUN_100188480(&local_38,*(undefined8 *)(param_2 + 0x20));
  cVar1 = FUN_100039390(pvVar2,&local_38);
  if (cVar1 == '\0') {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1e0f5f1);
  }
  else {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1e0f5dd);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

