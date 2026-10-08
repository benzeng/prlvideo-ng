
void FUN_100530180(int param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  QArrayData *pQVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  QStandardItem *this;
  int iVar5;
  int iVar6;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  QSize local_118;
  QIcon local_110 [8];
  undefined1 local_108 [16];
  QString local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QPixmap local_88 [32];
  QVariant local_68;
  QVariant local_58;
  Data *local_48;
  QStandardItem *local_40;
  undefined1 local_31;
  
  iVar6 = 0x2a;
  if (param_1 == 6) {
    iVar6 = 0x16;
  }
  pQVar1 = (QArrayData *)*param_5;
  if (*(int *)(pQVar1 + 4) != 0) {
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    goto LAB_100530281;
  }
  switch(param_1) {
  case 0:
    iVar5 = 0x1dff15d;
    break;
  case 1:
    iVar5 = 0x1dff173;
    break;
  case 2:
    iVar5 = 0x1dff189;
    break;
  case 3:
    iVar5 = 0x1dff199;
    break;
  default:
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    goto LAB_100530281;
  case 6:
    QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,0x1dc6192);
    QString::fromUtf8_helper((char *)&local_c0,0x1e24686);
    QString::insert((int)&local_c8,(QChar *)0x0,
                    (int)*(undefined8 *)(local_c0 + 0x10) + (int)local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053081f;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_10053081f:
    QString::toUpper();
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100530281;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
    goto LAB_100530281;
  }
  QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,iVar5);
LAB_100530281:
  this = operator_new(0x10);
  QStandardItem::QStandardItem(this,&local_d0);
  if (param_1 != 6) {
    pcVar2 = *(code **)(*(long *)this + 0x18);
    QVariant::QVariant(&local_b8,&local_d0);
    (*pcVar2)(this,&local_b8,3);
    QVariant::~QVariant(&local_b8);
  }
  pcVar2 = *(code **)(*(long *)this + 0x18);
  QVariant::QVariant(&local_e0,param_1);
  (*pcVar2)(this,&local_e0,0x100);
  QVariant::~QVariant(&local_e0);
  auVar3._8_8_ = local_108._8_8_;
  auVar3._0_8_ = local_108._0_8_;
  pcVar2 = *(code **)(*(long *)this + 0x18);
  pQVar1 = (QArrayData *)*param_3;
  if (*(int *)(pQVar1 + 4) == 0) {
    local_108 = QUuid::createUuid();
    QUuid::toString();
  }
  else {
    local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      local_108 = auVar3;
    }
  }
  QVariant::QVariant(&local_f0,&local_f8);
  (*pcVar2)(this,&local_f0,0x101);
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005303c8;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1005303c8:
  switch(param_1) {
  case 0:
    ResourceUtils::getAppIcon(local_88,2);
    QIcon::QIcon(local_110,local_88);
    QPixmap::~QPixmap(local_88);
    break;
  case 1:
    local_90.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/Images/os_x_shortcuts.png",0x1b);
    QIcon::QIcon(local_110,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
    break;
  case 2:
    local_98.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/Images/mouse_shortcuts.png",0x1c);
    QIcon::QIcon(local_110,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
    break;
  case 3:
    local_a0.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/Images/send_to_vm.png",0x17);
    QIcon::QIcon(local_110,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
    break;
  case 4:
    ResourceUtils::getOsIconPath(&local_a8,(char)((uint)param_4 >> 8),param_4,2);
    QIcon::QIcon(local_110,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
    break;
  default:
    QIcon::QIcon(local_110);
  }
  pcVar2 = *(code **)(*(long *)this + 0x18);
  QIcon::operator_cast_to_QVariant((QIcon *)&local_68);
  (*pcVar2)(this,&local_68,1);
  QVariant::~QVariant(&local_68);
  QIcon::~QIcon(local_110);
  QStandardItem::setSelectable(SUB81(this,0));
  local_118.field0_0x0 = 0;
  pcVar2 = *(code **)(*(long *)this + 0x18);
  local_118.field1_0x4 = iVar6;
  QVariant::QVariant(&local_58,&local_118);
  (*pcVar2)(this,&local_58,0xd);
  QVariant::~QVariant(&local_58);
  local_130 = 0xffffffff;
  local_12c = 0xffffffff;
  local_120 = 0;
  local_128 = 0;
  uVar4 = (**(code **)(*param_2 + 0x78))(param_2,&local_130);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = this;
  FUN_10041a7f0(&local_48,&local_40);
  QStandardItemModel::insertRow((int)param_2,(QList *)(ulong)uVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100530509;
    }
    QListData::dispose(local_48);
  }
LAB_100530509:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      UNLOCK();
      local_40 = (QStandardItem *)CONCAT71(local_40._1_7_,*(int *)local_d0.field0_0x0 != 0);
      if (*(int *)local_d0.field0_0x0 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
  return;
}

