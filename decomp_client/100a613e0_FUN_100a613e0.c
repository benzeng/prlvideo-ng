
QByteArray * FUN_100a613e0(QByteArray *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_19;
  
  lVar2 = _CFStringGetLength(param_2);
  if (lVar2 != 0) {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    QByteArray::resize((int)&local_28);
    if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f)
      ;
    }
    cVar1 = _CFStringGetCString(param_2,local_28 + *(long *)(local_28 + 0x10),
                                (long)(int)*(uint *)(local_28 + 4),0x8000100);
    if (cVar1 != '\0') {
      QByteArray::QByteArray(param_1,(char *)(local_28 + *(long *)(local_28 + 0x10)),-1);
      if (*(int *)local_28 == -1) {
        return param_1;
      }
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_1b = 0;
      }
      QArrayData::deallocate(local_28,1,8);
      return param_1;
    }
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_100a614d7;
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_100a614d7:
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

