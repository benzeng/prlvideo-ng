
undefined4 FUN_1005db030(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)
             QString::fromAscii_helper(".*(-(\\d{6}))?(-flat|-s\\d{3}|-f\\d{3})?\\.vmdk$",0x2c);
  QRegExp::QRegExp((QRegExp *)&local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005db09a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005db09a:
  cVar1 = QRegExp::exactMatch(&local_28);
  if (cVar1 == '\0') {
    uVar3 = 0;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    goto LAB_1005db124;
  }
  iVar2 = QRegExp::captureCount();
  uVar3 = 0;
  if (1 < iVar2) {
    QRegExp::cap((int)&local_38);
    uVar3 = QString::toUInt((bool *)&local_38,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005db10e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1005db10e:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
LAB_1005db124:
  QRegExp::~QRegExp((QRegExp *)&local_28);
  return uVar3;
}

