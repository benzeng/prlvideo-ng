
undefined8 * FUN_1003d63d0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  undefined8 uVar6;
  QVariant *this;
  int iVar7;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  iVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12b8);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar7 = 0;
  do {
    iVar3 = QListWidget::count();
    if (iVar3 <= iVar7) {
      return param_1;
    }
    plVar4 = (long *)QListWidget::item(iVar2);
    (**(code **)(*plVar4 + 0x20))(&local_60,plVar4,0x100);
    QVariant::toString();
    QVariant::~QVariant(&local_60);
    QString::fromUtf8_helper((char *)&local_68,0x1df271e);
    QString::append(&local_68);
    iVar3 = -1;
    if (puVar1 != (undefined *)0x0) {
      sVar5 = _strlen(puVar1);
      iVar3 = (int)sVar5;
    }
    local_70 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    uVar6 = FUN_1003ae480(param_1,&local_70);
    this = (QVariant *)FUN_1002edf40(uVar6,&local_68);
    (**(code **)(*plVar4 + 0x20))(&local_48,plVar4,10);
    iVar3 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    QVariant::QVariant(&local_80,iVar3 == 2);
    QVariant::operator=(this,&local_80);
    QVariant::~QVariant(&local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d6564;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1003d6564:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d6598;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1003d6598:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d6420;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1003d6420:
    iVar7 = iVar7 + 1;
  } while( true );
}

