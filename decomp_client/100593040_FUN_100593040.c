
void FUN_100593040(void)

{
  QString *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  pQVar1 = (QString *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
  MappingHelpers::getFirstValue((QHash *)&local_30);
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  QVariant::toString();
  FUN_1009e01f0(&local_38,&local_40,&local_48);
  QLineEdit::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005930d5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005930d5:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100593105;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100593105:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100593135;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100593135:
  QVariant::~QVariant(&local_30);
  return;
}

