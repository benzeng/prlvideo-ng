
QString * FUN_1006e1490(QString *param_1)

{
  uid_t uVar1;
  long lVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar1 = _geteuid();
  lVar2 = _getpwuid(uVar1);
  if (((lVar2 == 0) || (pcVar5 = *(char **)(lVar2 + 0x30), pcVar5 == (char *)0x0)) ||
     (sVar3 = _strlen(pcVar5), sVar3 == 0)) {
    piVar4 = ___error();
    if (lVar2 == 0) {
      pcVar5 = "null";
    }
    else {
      pcVar5 = *(char **)(lVar2 + 0x30);
    }
    FUN_1008e3970("","cmn_utils",0,"Can\'t get profile by error %d, pswd=%p, pw_dir=%p",*piVar4,
                  lVar2,pcVar5);
    return param_1;
  }
  QString::fromUtf8_helper((char *)&local_38,(int)pcVar5);
  QString::normalized(&local_30,&local_38,1,0);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e153e;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006e153e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e156e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e156e:
  QDir::fromNativeSeparators(&local_40);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

