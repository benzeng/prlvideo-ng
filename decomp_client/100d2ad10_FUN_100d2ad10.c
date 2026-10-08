
undefined1 FUN_100d2ad10(undefined2 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("(\\d+)\\.(\\d+)(.*)",0x10);
  QRegExp::QRegExp((QRegExp *)&local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d2ad7a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d2ad7a:
  cVar1 = QRegExp::exactMatch(&local_28);
  if (cVar1 == '\0') {
    uVar3 = 0;
    goto LAB_100d2ae4f;
  }
  QRegExp::cap((int)&local_38);
  uVar2 = QString::toShort((bool *)&local_38,0);
  *param_1 = uVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d2ade4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d2ade4:
  QRegExp::cap((int)&local_40);
  uVar2 = QString::toShort((bool *)&local_40,0);
  param_1[1] = uVar2;
  uVar3 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d2ae4f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d2ae4f:
  QRegExp::~QRegExp((QRegExp *)&local_28);
  return uVar3;
}

