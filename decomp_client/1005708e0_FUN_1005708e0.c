
void FUN_1005708e0(char *param_1)

{
  QVariant *pQVar1;
  char *pcVar2;
  AnonymousBitField0 AVar3;
  long lVar4;
  long lVar5;
  QVariant local_b8;
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("VirtualNetworks.VirtualNetwork[%1]",0x22);
  QString::arg(&local_60,&local_68,(long)*(int *)(param_1 + 0x50),0,10,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100570962;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100570962:
  QObject::property((char *)&local_58);
  QVariant::~QVariant(&local_58);
  if ((local_58.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    pQVar1 = *(QVariant **)PTR_DynamicPathPart_1021e1568;
    QVariant::QVariant(&local_78,&local_60);
    QObject::setProperty(param_1,pQVar1);
    QVariant::~QVariant(&local_78);
    CWidgetMapper::addMapping(*(QWidget **)(param_1 + 0x48));
  }
  local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_1,&local_a8,PTR_staticMetaObject_1021e1540,&local_a0,1);
  local_98 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_98);
      lVar4 = (long)*(int *)(local_98 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_98 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar4 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100570ade;
    }
    QListData::dispose(local_a0);
  }
LAB_100570ade:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100570b14;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100570b14:
  if ((local_80 != 0) && (local_90 != local_88)) {
    do {
      pcVar2 = *(char **)local_90;
      QObject::property((char *)&local_48);
      AVar3 = local_48.field0_0x0.field1_0x8;
      QVariant::~QVariant(&local_48);
      if ((AVar3.bitField0_30 & 0x3fffffff) != 0) {
        pQVar1 = *(QVariant **)PTR_DynamicPathPart_1021e1568;
        QVariant::QVariant(&local_b8,&local_60);
        QObject::setProperty(pcVar2,pQVar1);
        QVariant::~QVariant(&local_b8);
        CWidgetMapper::addMapping(*(QWidget **)(param_1 + 0x48));
      }
      local_90 = local_90 + 8;
      local_80 = 1;
    } while (local_90 != local_88);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100570bf9;
    }
    QListData::dispose(local_98);
  }
LAB_100570bf9:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return;
}

