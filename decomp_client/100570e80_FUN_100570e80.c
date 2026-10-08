
void FUN_100570e80(long param_1)

{
  AnonymousBitField0 AVar1;
  long lVar2;
  long lVar3;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  Data_conflict local_50;
  uint local_48;
  QVariant local_40;
  
  QObject::property(&local_50.field0);
  QVariant::~QVariant((QVariant *)&local_50);
  if ((local_48 & 0x3fffffff) != 0) {
    CWidgetMapper::removeMapping(*(QWidget **)(param_1 + 0x48));
  }
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  local_78 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_1,&local_80,PTR_staticMetaObject_1021e1540,&local_78,1);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar2 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_70 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar2 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_50.field0 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_50.field0 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_50.field0) goto LAB_100570fad;
    }
    QListData::dispose(local_78);
  }
LAB_100570fad:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_50.field0 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_50.field0) goto LAB_100570fdd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100570fdd:
  if ((local_58 != 0) && (local_68 != local_60)) {
    do {
      QObject::property((char *)&local_40);
      AVar1 = local_40.field0_0x0.field1_0x8;
      QVariant::~QVariant(&local_40);
      if ((AVar1.bitField0_30 & 0x3fffffff) != 0) {
        CWidgetMapper::removeMapping(*(QWidget **)(param_1 + 0x48));
      }
      local_68 = local_68 + 8;
      local_58 = 1;
    } while (local_68 != local_60);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_50.field0 = '\0';
    }
    QListData::dispose(local_70);
  }
  return;
}

