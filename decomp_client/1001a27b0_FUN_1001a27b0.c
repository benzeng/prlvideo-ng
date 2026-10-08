
void FUN_1001a27b0(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  QString *pQVar1;
  QPixmap *pQVar2;
  QFont *pQVar3;
  char cVar4;
  int iVar5;
  QString local_f0;
  QLocale local_e8 [8];
  QString local_e0;
  Connection local_d8 [8];
  Connection local_d0 [8];
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  QFont local_80 [16];
  QArrayData *local_70;
  QArrayData *local_68;
  QPixmap local_60 [32];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fda20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fdc10;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fdc60;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  *(undefined **)(param_1 + 0xe8) = PTR_shared_null_1021e1288;
  FUN_1001a35e0(param_1 + 0x60,param_1);
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_original_Boot_Camp_virtual_m_10226fed8);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a287e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a287e:
  pQVar1 = *(QString **)(param_1 + 0xa8);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Click_Import_to_create_a_new_vir_10226fee0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a28e3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a28e3:
  pQVar2 = *(QPixmap **)(param_1 + 0x78);
  QString::fromUtf8_helper((char *)&local_70,0x1dd6731);
  QString::normalized(&local_68,&local_70,1,0);
  QPixmap::QPixmap(local_60,&local_68,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2966;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001a2966:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2996;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001a2996:
  pQVar3 = *(QFont **)(param_1 + 0xb8);
  FontUtils::getSmallFont(SUB81(local_80,0));
  CProgressIndicator::setTextFont(pQVar3);
  QFont::~QFont(local_80);
  if (*(long *)(param_1 + 0xe0) != 0) {
    local_a8 = (QArrayData *)
               QString::fromAscii_helper(":/pixmaps/AppIcon/PD/AppIcon_128x128.png",0x28);
    QPixmap::QPixmap(local_a0,&local_a8,0,0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001a2a30;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1001a2a30:
    pQVar2 = *(QPixmap **)(param_1 + 0x88);
    local_30 = 0x3000000030;
    QPixmap::scaled(local_c8,local_a0,&local_30,1,1);
    QLabel::setPixmap(pQVar2);
    QPixmap::~QPixmap(local_c8);
    QPixmap::~QPixmap(local_a0);
  }
  QObject::connect(local_d0,*(undefined8 *)(param_1 + 200),"2clicked()",param_1,"1onCancel()",0);
  QMetaObject::Connection::~Connection(local_d0);
  QObject::connect(local_d8,*(undefined8 *)(param_1 + 0xd0),"2clicked()",param_1,"1onImport()",0);
  QMetaObject::Connection::~Connection(local_d8);
  QLocale::QLocale(local_e8);
  QLocale::name();
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("en_US",5);
  cVar4 = operator==(&local_e0,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_21 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2b77;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1001a2b77:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_21 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2bad;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1001a2bad:
  QLocale::~QLocale(local_e8);
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  iVar5 = 500;
  if (cVar4 != '\0') {
    iVar5 = 0x172;
  }
  QWidget::setFixedSize((int)param_1,iVar5);
  return;
}

