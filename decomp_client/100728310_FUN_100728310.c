
void FUN_100728310(QString *param_1)

{
  char cVar1;
  QString *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QArrayData *local_f0;
  QPixmap local_e8 [32];
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QPixmap local_78 [32];
  QString local_58;
  QString local_50;
  QPixmap local_48 [32];
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QPixmap::QPixmap(local_48);
  if (*(int *)&param_1[0xf].field0_0x0 == 2) {
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Deploy_to_Virtual_Machine_10226f2a8);
    QString::operator=(&local_20,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_11 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1007283a2;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1007283a2:
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,(int)PTR_s_Deploy_10226f2c0);
    QString::operator=(&local_28,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_11 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10072840d;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_10072840d:
    local_b8 = (QArrayData *)QString::fromAscii_helper(":/Images/tmpl-vm_96.png",0x17);
    QPixmap::QPixmap(local_b0,&local_b8,0,0);
    QPixmap::operator=(local_48,local_b0);
    QPixmap::~QPixmap(local_b0);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_11 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100728779;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
  else if (*(int *)&param_1[0xf].field0_0x0 == 1) {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Clone_a_Template_10226f2b0);
    QString::operator=(&local_20,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_11 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100728503;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100728503:
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s_Clone_10226f2b8);
    QString::operator=(&local_28,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_11 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100728562;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100728562:
    local_80 = (QArrayData *)QString::fromAscii_helper(":/Images/vm-tmpl_96.png",0x17);
    QPixmap::QPixmap(local_78,&local_80,0,0);
    QPixmap::operator=(local_48,local_78);
    QPixmap::~QPixmap(local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_11 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100728779;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
  else {
    pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0xd].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xd].field0_0x0 + 4) != 0)
       ) {
      pQVar3 = param_1[0xe].field0_0x0;
    }
    cVar1 = FUN_10018c770(pQVar3);
    if (cVar1 == '\0') {
      QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Clone_a_Virtual_Machine_10226f2a0);
    }
    else {
      QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Clone_a_Template_10226f2b0);
    }
    QString::operator=(&local_20,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_11 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10072868d;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_10072868d:
    QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Clone_10226f2b8);
    QString::operator=(&local_28,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_11 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1007286f8;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_1007286f8:
    local_f0 = (QArrayData *)QString::fromAscii_helper(":/Images/vm-vm_96.png",0x15);
    QPixmap::QPixmap(local_e8,&local_f0,0,0);
    QPixmap::operator=(local_48,local_e8);
    QPixmap::~QPixmap(local_e8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_11 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100728779;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_100728779:
  QWidget::setWindowTitle(param_1);
  pQVar2 = (QString *)
           QDialogButtonBox::button(*(undefined8 *)(param_1[0xc].field0_0x0 + 0x50),0x400);
  QAbstractButton::setText(pQVar2);
  QLabel::setPixmap(*(QPixmap **)(param_1[0xc].field0_0x0 + 8));
  QPixmap::~QPixmap(local_48);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007287ed;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1007287ed:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

