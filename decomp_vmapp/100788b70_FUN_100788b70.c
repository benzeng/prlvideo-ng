
QString * FUN_100788b70(QString *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar2 = _CFStringGetTypeID();
  if (param_2 == 0) {
    return param_1;
  }
  lVar3 = _CFGetTypeID(param_2);
  if (lVar3 != lVar2) {
    return param_1;
  }
  _CFRetain(param_2);
  lVar2 = _CFStringGetLength(param_2);
  if (((lVar2 < 0) ||
      (sVar4 = _CFStringGetMaximumSizeForEncoding(lVar2 + 1,0x8000100), (long)sVar4 < 0)) ||
     (pcVar5 = _malloc(sVar4), pcVar5 == (char *)0x0)) goto LAB_100788cf9;
  cVar1 = _CFStringGetCString(param_2,pcVar5,sVar4,0x8000100);
  if (cVar1 != '\0') {
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_50,(int)pcVar5);
    QString::normalized(&local_48,&local_50,1,0);
    QString::normalized(&local_40,&local_48,1,0);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100788c91;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100788c91:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100788cc1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100788cc1:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100788cf1;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100788cf1:
  _free(pcVar5);
LAB_100788cf9:
  _CFRelease(param_2);
  return param_1;
}

