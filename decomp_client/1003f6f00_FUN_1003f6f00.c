
undefined8 FUN_1003f6f00(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  QVariant *this;
  long lVar4;
  long lVar5;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  cVar2 = QVariant::isNull();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  FUN_1003e17d0(&local_60,uVar3);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1003f6fed:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003f6fed;
    }
    if (local_40 == 0) goto LAB_1003f717d;
  }
  if (local_50 != local_48) {
    do {
      iVar1 = *(int *)local_50;
      uVar3 = FUN_1003ae480(param_1 + 0x20,param_1 + 0x28);
      local_78 = (QArrayData *)QString::fromAscii_helper("[%1]",4);
      QString::arg(&local_70,&local_78,(long)iVar1,0,10,0x20);
      local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x30);
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_68);
      this = (QVariant *)FUN_1002edf40(uVar3,&local_68);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      QVariant::operator=(this,(QVariant *)&local_88);
      QVariant::~QVariant((QVariant *)&local_88);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f7100;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1003f7100:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f7130;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1003f7130:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f7160;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003f7160:
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1003f717d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return 0;
}

