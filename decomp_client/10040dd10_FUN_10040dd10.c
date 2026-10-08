
void FUN_10040dd10(void)

{
  uint uVar1;
  long lVar2;
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QIcon local_d8 [8];
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  QIcon local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  undefined8 local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  undefined8 local_48;
  QVariant local_40;
  int *local_30;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar2 == 0) {
    return;
  }
  local_30 = (int *)PTR_shared_null_1021e15e8;
  local_48 = 0;
  QVariant::QVariant(&local_40,4,&local_48,0);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1df3536);
  FUN_10041e0f0(&local_60,&local_68,&local_40);
  FUN_10041e170(&local_30,&local_60);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040ddd8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10040ddd8:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040de08;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10040de08:
  local_80 = 1;
  QVariant::QVariant(&local_78,4,&local_80,0);
  QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,0x1dc6886);
  FUN_10041e0f0(&local_98,&local_a0,&local_78);
  FUN_10041e170(&local_30,&local_98);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040deaf;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10040deaf:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040dee5;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10040dee5:
  FUN_1003fa820();
  uVar1 = QComboBox::findData(lVar2,&local_40,0x100,0x10);
  local_d0 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/lpt_port_16x16.png",0x1c);
  QPixmap::QPixmap(local_c8,&local_d0,0,0);
  QIcon::QIcon(local_a8,local_c8);
  QComboBox::setItemIcon((int)lVar2,(QIcon *)(ulong)uVar1);
  QIcon::~QIcon(local_a8);
  QPixmap::~QPixmap(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040dfaa;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10040dfaa:
  uVar1 = QComboBox::findData(lVar2,&local_78,0x100,0x10);
  local_100 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_usb_16x16.png",0x2c);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  QIcon::QIcon(local_d8,local_f8);
  QComboBox::setItemIcon((int)lVar2,(QIcon *)(ulong)uVar1);
  QIcon::~QIcon(local_d8);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040e063;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10040e063:
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_40);
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_10041b480(&local_30,local_30);
  }
  return;
}

