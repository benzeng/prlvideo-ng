
void FUN_10047fca0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  undefined8 uVar3;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = FUN_10044e560();
  local_40 = (QArrayData *)QString::fromAscii_helper("Settings.Runtime.ResourceQuota",0x1e);
  FUN_1003e1800(&local_38,uVar3,&local_40,0);
  QVariant::QVariant(&local_50,100);
  cVar2 = QVariant::cmp(&local_38);
  if (cVar2 == '\0') {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1df6af0);
  }
  else {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1df6a78);
  }
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10047fd7d;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10047fd7d:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

