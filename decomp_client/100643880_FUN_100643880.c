
void FUN_100643880(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  uVar3 = FUN_10063f730(param_1);
  lVar4 = FUN_100675e00(uVar3);
  iVar2 = 0;
  if (lVar4 != 0) {
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_100675e00(uVar3);
    uVar3 = FUN_10016f500(uVar3);
    cVar1 = FUN_10061b4d0(uVar3,0x20);
    iVar2 = 0;
    if (cVar1 != '\0') {
      FUN_10061abe0(&local_58,uVar3,0);
      iVar2 = QVariant::toInt((bool *)&local_58);
      bVar6 = true;
      if (iVar2 != 0) {
        FUN_10061abe0(&local_68,uVar3,0);
        iVar2 = QVariant::toInt((bool *)&local_68);
        bVar6 = true;
        if (iVar2 != -0x7ffeefa8) {
          FUN_10061abe0(&local_78,uVar3,0);
          iVar2 = QVariant::toInt((bool *)&local_78);
          bVar6 = true;
          if (iVar2 != -0x7ffeefff) {
            FUN_10061abe0(&local_88,uVar3,0);
            iVar2 = QVariant::toInt((bool *)&local_88);
            bVar6 = true;
            if (iVar2 != -0x7ffeef8c) {
              FUN_10061abe0(&local_98,uVar3,0);
              iVar2 = QVariant::toInt((bool *)&local_98);
              bVar6 = true;
              if (iVar2 != -0x7ffeef89) {
                FUN_10061abe0(&local_a8,uVar3,0);
                iVar2 = QVariant::toInt((bool *)&local_a8);
                bVar6 = iVar2 == -0x7ffeef9b;
                QVariant::~QVariant(&local_a8);
              }
              QVariant::~QVariant(&local_98);
            }
            QVariant::~QVariant(&local_88);
          }
          QVariant::~QVariant(&local_78);
        }
        QVariant::~QVariant(&local_68);
      }
      QVariant::~QVariant(&local_58);
      iVar2 = 0;
      if (bVar6) {
        QString::fromUtf8_helper((char *)&local_40,0x1e0a191);
        QString::operator=(&local_48,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100643a74;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100643a74:
        iVar2 = 0x96;
      }
    }
  }
  if (param_2 == 0) goto LAB_100643c49;
  local_b0 = (QArrayData *)QString::fromAscii_helper("pageTitleBackground",0x13);
  lVar4 = qt_qFindChild_helper(param_2,&local_b0,PTR_staticMetaObject_1021e1368,1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100643aef;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100643aef:
  if (lVar4 == 0) goto LAB_100643c49;
  uVar3 = CDeclarativeWizardPage::pageContentItem();
  local_b8 = (QArrayData *)QString::fromAscii_helper("pageTitleBackground",0x13);
  pcVar5 = (char *)qt_qFindChild_helper(uVar3,&local_b8,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_c8,iVar2);
  QObject::setProperty(pcVar5,(QVariant *)"height");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100643ba0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100643ba0:
  uVar3 = CDeclarativeWizardPage::pageContentItem();
  local_d0 = (QArrayData *)QString::fromAscii_helper("pageTitleBackground",0x13);
  pcVar5 = (char *)qt_qFindChild_helper(uVar3,&local_d0,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_e0,&local_48);
  QObject::setProperty(pcVar5,(QVariant *)"source");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100643c49;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100643c49:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

