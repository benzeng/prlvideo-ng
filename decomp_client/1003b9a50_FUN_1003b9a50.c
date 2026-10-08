
bool FUN_1003b9a50(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.%1",0xb);
  FUN_1003b0eb0(&local_50,param_2);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b9ae3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003b9ae3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b9b13;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003b9b13:
  FUN_1003e17d0(&local_58,param_1,&local_40);
  local_78 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_78);
      lVar2 = (long)*(int *)(local_78 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_78 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_78 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar2 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      iVar4 = *(int *)local_70;
      local_a0 = (QArrayData *)QString::fromAscii_helper("[%1].Index",10);
      QString::arg(&local_98,&local_a0,(long)iVar4,0,10,0x20);
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      QString::append(&local_90);
      FUN_1003e1800(&local_88,param_1,&local_90,0);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b9c7c;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1003b9c7c:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b9cb2;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1003b9cb2:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b9ce8;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1003b9ce8:
      bVar5 = false;
      if ((local_88.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
        iVar1 = QVariant::toUInt((bool *)&local_88);
        bVar5 = iVar1 == param_3;
        if ((bVar5) && (param_4 != (int *)0x0)) {
          *param_4 = iVar4;
          bVar5 = true;
        }
      }
      QVariant::~QVariant(&local_88);
      iVar4 = 1;
      if (bVar5) goto LAB_1003b9d61;
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  iVar4 = 2;
LAB_1003b9d61:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b9d87;
    }
    QListData::dispose(local_78);
  }
LAB_1003b9d87:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b9dad;
    }
    QListData::dispose(local_58);
  }
LAB_1003b9dad:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1003b9ddd;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003b9ddd:
  return iVar4 != 2;
}

