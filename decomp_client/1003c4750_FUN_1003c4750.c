
void FUN_1003c4750(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  QVariant local_58;
  Data_conflict local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  MappingHelpers::getFirstValue((QHash *)&local_40);
  iVar1 = QComboBox::findData(uVar2,(QHash *)&local_40,0x100);
  if (iVar1 < 0) {
    QMetaObject::tr(&local_48.field0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Legacy__RTL8029AS__10226e7d0);
    local_60 = 0;
    QVariant::QVariant(&local_58,4,&local_60,0);
    QIcon::QIcon((QIcon *)&local_30);
    QComboBox::insertItem((int)uVar2,(QIcon *)0x0,&local_30,(QVariant *)&local_48);
    QIcon::~QIcon((QIcon *)&local_30);
    QVariant::~QVariant(&local_58);
    if (*(int *)local_48.field15 != -1) {
      if (*(int *)local_48.field15 != 0) {
        LOCK();
        *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
        local_21 = *(int *)local_48.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003c483e;
      }
      QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
    }
  }
LAB_1003c483e:
  QComboBox::setCurrentIndex((int)uVar2);
  QVariant::~QVariant(&local_40);
  return;
}

