
void FUN_100754920(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  QString *pQVar1;
  QPixmap *pQVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  QString local_100;
  QLocale local_f8 [8];
  QString local_f0;
  Connection local_e8 [8];
  Connection local_e0 [8];
  Connection local_d8 [8];
  QPixmap local_d0 [32];
  QArrayData *local_b0;
  QPixmap local_a8 [32];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102228480;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102228670;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022286c0;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  *(undefined **)(param_1 + 0xe8) = PTR_shared_null_1021e1288;
  FUN_100756370(param_1 + 0x60,param_1);
  uVar8 = FUN_10018c2b0(param_2);
  FUN_100758ba0(&local_40,uVar8);
  QLabel::text();
  QString::arg(&local_48,&local_50,&local_40,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007549ff;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007549ff:
  QLabel::setText(*(QString **)(param_1 + 0xa8));
  if (*(long *)(param_1 + 0xe0) == 0) {
    cVar3 = '\0';
  }
  else {
    FUN_10018c2b0();
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    lVar9 = FUN_100ccebf0(&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100754a76;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100754a76:
    if (lVar9 == 0) {
LAB_100754b9e:
      uVar8 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0xe0));
      cVar3 = FUN_100112cc0(uVar8);
      uVar8 = FUN_100152280();
      FUN_100188480(&local_78,*(undefined8 *)(param_1 + 0xe0));
      lVar9 = FUN_1001547d0(uVar8,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100754c0e;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100754c0e:
      if ((lVar9 == 0) || (cVar4 = FUN_100111de0(lVar9), cVar4 != '\0')) {
        pQVar1 = *(QString **)(param_1 + 0xb0);
        QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Mind_that_Boot_Camp_partitions_a_10226feb0);
        QLabel::setText(pQVar1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100754cfd;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
      else {
        pQVar1 = *(QString **)(param_1 + 0xb0);
        QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_As_no_Boot_Camp_partition_was_fo_10226feb8);
        QLabel::setText(pQVar1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100754cfd;
          }
          QArrayData::deallocate(local_80,2,8);
        }
      }
    }
    else {
      local_60 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_68 = (QArrayData *)QString::fromAscii_helper("Undo Disks",10);
      iVar5 = FUN_100ccd670(lVar9,&local_60,&local_68,10,0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100754af3;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100754af3:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100754b23;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100754b23:
      if (iVar5 == 0) goto LAB_100754b9e;
      pQVar1 = *(QString **)(param_1 + 0xb0);
      QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Note__Converting_the_virtual_mac_10226fea8);
      QLabel::setText(pQVar1);
      cVar3 = '\x01';
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100754cfd;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_100754cfd:
    uVar6 = FUN_10018f860(param_2);
    uVar7 = FUN_10018f890(param_2);
    ResourceUtils::getOsIconPath(&local_b0,uVar6,uVar7,4);
    QPixmap::QPixmap(local_a8,&local_b0,0,0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100754d71;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100754d71:
    pQVar2 = *(QPixmap **)(param_1 + 0x88);
    local_38 = 0x3000000030;
    QPixmap::scaled(local_d0,local_a8,&local_38,1,1);
    QLabel::setPixmap(pQVar2);
    QPixmap::~QPixmap(local_d0);
    QPixmap::~QPixmap(local_a8);
  }
  QObject::connect(local_d8,*(undefined8 *)(param_1 + 0xb8),"2clicked()",param_1,"1onCancel()",0);
  QMetaObject::Connection::~Connection(local_d8);
  QObject::connect(local_e0,*(undefined8 *)(param_1 + 0xc0),"2clicked()",param_1,
                   "1onBackupAndConvert()",0);
  QMetaObject::Connection::~Connection(local_e0);
  QObject::connect(local_e8,*(undefined8 *)(param_1 + 200),"2clicked()",param_1,"1onConvert()",0);
  QMetaObject::Connection::~Connection(local_e8);
  QPushButton::setDefault(SUB81(*(undefined8 *)(param_1 + 0xc0),0));
  QWidget::setFocus(*(undefined8 *)(param_1 + 0xc0),7);
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x68))(*(long **)(param_1 + 0xb0),cVar3);
  QLocale::QLocale(local_f8);
  QLocale::name();
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("en_US",5);
  cVar4 = operator==(&local_f0,&local_100);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_29 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100754f27;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100754f27:
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100754f5d;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100754f5d:
  QLocale::~QLocale(local_f8);
  iVar5 = 500;
  if (cVar4 != '\0') {
    iVar5 = 0x172;
  }
  if (cVar3 == '\0') {
    QWidget::setFixedSize((int)param_1,iVar5);
  }
  else {
    QWidget::setFixedSize((int)param_1,iVar5);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100754fc9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100754fc9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

