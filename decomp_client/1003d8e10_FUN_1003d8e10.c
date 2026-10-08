
void FUN_1003d8e10(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar3 == 0) {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Quit",4);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_38,param_3,&local_40);
  iVar2 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d8eb3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003d8eb3:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d8ee3;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003d8ee3:
  QObject::property((char *)&local_60);
  QVariant::toString();
  QVariant::~QVariant(&local_60);
  if (iVar2 == 0) {
    iVar2 = QString::compare_helper
                      (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),"Never",
                       0xffffffff,1);
  }
  else {
    if (iVar2 != 1) {
      bVar4 = false;
      goto LAB_1003d8f6e;
    }
    iVar2 = QString::compare_helper
                      (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),
                       "WhenConnectedToPower",0xffffffff,1);
  }
  bVar4 = iVar2 == 0;
LAB_1003d8f6e:
  bVar1 = QAbstractButton::isChecked();
  if ((bVar1 ^ bVar4) == 1) {
    QAbstractButton::setChecked(SUB81(lVar3,0));
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

