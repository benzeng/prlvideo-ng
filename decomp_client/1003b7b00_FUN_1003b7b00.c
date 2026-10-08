
undefined8 FUN_1003b7b00(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  QString local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  uint local_80;
  QString local_78;
  Data *local_70;
  QString local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = FUN_1003b0a60();
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_1003b0af0(param_1);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df1f84);
  QString::append(&local_60);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7b9f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003b7b9f:
  FUN_1003e1800(&local_58,uVar3,&local_60,0);
  iVar1 = QVariant::toUInt((bool *)&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7bf8;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003b7bf8:
  if ((iVar1 != 0) && (iVar1 != 3)) {
    return 0;
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar3 = FUN_1003b0af0(param_1);
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df1f92);
  QString::append(&local_78);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7c89;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003b7c89:
  FUN_1003e17d0(&local_70,uVar3,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7cc9;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1003b7cc9:
  local_98 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_98);
      lVar2 = (long)*(int *)(local_98 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_98 + lVar2 * 8) &&
         (lVar5 = *(int *)(local_98 + 0xc) - lVar2, lVar5 != 0 && lVar2 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar2 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    do {
      if (local_80 == 0) {
LAB_1003b7f68:
        local_90 = local_90 + 8;
        local_80 = 1;
      }
      else {
        if (*(int *)(local_68.field0_0x0 + 4) == 0) {
          iVar1 = *(int *)local_90;
          uVar3 = FUN_1003b0af0(param_1);
          local_c8 = (QArrayData *)QString::fromAscii_helper(".Partition[%1].SystemName",0x19);
          QString::arg(&local_c0,&local_c8,(long)iVar1,0,10,0x20);
          local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
          if (1 < *(int *)local_b8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_b8);
          FUN_1003e1800(&local_b0,uVar3,&local_b8,0);
          QVariant::toString();
          QString::operator=(&local_68,&local_a0);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003b7eb0;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1003b7eb0:
          QVariant::~QVariant(&local_b0);
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003b7eee;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
LAB_1003b7eee:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003b7f24;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1003b7f24:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003b7f68;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
          goto LAB_1003b7f68;
        }
        local_90 = local_90 + 8;
        uVar4 = local_80 ^ 1;
        bVar6 = local_80 == 1;
        local_80 = uVar4;
        if (bVar6) break;
      }
    } while (local_90 != local_88);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7fb5;
    }
    QListData::dispose(local_98);
  }
LAB_1003b7fb5:
  uVar3 = FUN_1003b0a60(param_1);
  uVar3 = FUN_10015a340(uVar3);
  uVar3 = FUN_100112d30(&local_68,uVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b7ffa;
    }
    QListData::dispose(local_70);
  }
LAB_1003b7ffa:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return uVar3;
}

