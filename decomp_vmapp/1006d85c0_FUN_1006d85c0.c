
void FUN_1006d85c0(void)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QDir local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1006d9070(&local_50,0);
  if ((*(int *)(local_50.field0_0x0 + 4) != 0) && (DAT_1011ccaf0 == '\0')) {
    DAT_1011ccaf0 = '\x01';
  }
  if (2 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",3,"App path is \'%s\', detecting SBA mode...",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8669;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1006d8669:
  QDir::QDir(local_60,&local_50);
  do {
    QDir::absolutePath();
    uVar3 = QDir::separator();
    local_80 = local_88;
    if (1 < *(uint *)local_88 + 1) {
      LOCK();
      *(uint *)local_88 = *(uint *)local_88 + 1;
      local_31 = *(uint *)local_88 != 0;
      UNLOCK();
    }
    uVar5 = *(uint *)(local_88 + 4);
    if ((1 < *(uint *)local_88) || ((*(uint *)(local_88 + 8) & 0x7fffffff) < uVar5 + 2)) {
      QString::reallocData((uint)&local_80,SUB41(uVar5 + 2,0));
      uVar5 = *(uint *)(local_80 + 4);
    }
    *(uint *)(local_80 + 4) = uVar5 + 1;
    *(undefined2 *)(local_80 + (long)(int)uVar5 * 2 + *(long *)(local_80 + 0x10)) = uVar3;
    *(undefined2 *)(local_80 + (long)(int)*(uint *)(local_80 + 4) * 2 + *(long *)(local_80 + 0x10))
         = 0;
    if (1 < *(uint *)local_80 + 1) {
      LOCK();
      *(uint *)local_80 = *(uint *)local_80 + 1;
      local_31 = *(uint *)local_80 != 0;
      UNLOCK();
    }
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
    QString::fromUtf8_helper((char *)&local_48,0xae8b3b);
    QString::append(&local_78);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d877b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1006d877b:
    uVar3 = QDir::separator();
    local_70 = (QArrayData *)local_78.field0_0x0;
    if (1 < *(uint *)local_78.field0_0x0 + 1) {
      LOCK();
      *(uint *)local_78.field0_0x0 = *(uint *)local_78.field0_0x0 + 1;
      local_31 = *(uint *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    uVar5 = *(uint *)(local_78.field0_0x0 + 4);
    if ((1 < *(uint *)local_78.field0_0x0) ||
       ((*(uint *)(local_78.field0_0x0 + 8) & 0x7fffffff) < uVar5 + 2)) {
      QString::reallocData((uint)&local_70,SUB41(uVar5 + 2,0));
      uVar5 = *(uint *)(local_70 + 4);
    }
    *(uint *)(local_70 + 4) = uVar5 + 1;
    *(undefined2 *)(local_70 + (long)(int)uVar5 * 2 + *(long *)(local_70 + 0x10)) = uVar3;
    *(undefined2 *)(local_70 + (long)(int)*(uint *)(local_70 + 4) * 2 + *(long *)(local_70 + 0x10))
         = 0;
    if (1 < *(uint *)local_70 + 1) {
      LOCK();
      *(uint *)local_70 = *(uint *)local_70 + 1;
      local_31 = *(uint *)local_70 != 0;
      UNLOCK();
    }
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
    QString::fromUtf8_helper((char *)&local_40,0xae8b4b);
    QString::append(&local_68);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8858;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1006d8858:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8888;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1006d8888:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d88b8;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1006d88b8:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d88e8;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1006d88e8:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8918;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1006d8918:
    cVar1 = QFile::exists(&local_68);
    if ((cVar1 == '\0') && (iVar4 = FUN_1006d65a0(), iVar4 != 6)) {
      cVar1 = QDir::cdUp();
      iVar4 = 5;
      if (cVar1 != '\0') {
        bVar2 = QDir::isRoot();
        iVar4 = (uint)bVar2 + (uint)bVar2 * 4;
      }
    }
    else {
      QDir::absolutePath();
      uVar3 = QDir::separator();
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      iVar4 = *(int *)(local_98 + 4);
      if ((1 < *(uint *)local_98) || ((*(uint *)(local_98 + 8) & 0x7fffffff) < iVar4 + 2U)) {
        QString::reallocData((uint)&local_90,SUB41(iVar4 + 2U,0));
        iVar4 = *(int *)(local_90.field0_0x0 + 4);
      }
      *(int *)(local_90.field0_0x0 + 4) = iVar4 + 1;
      *(undefined2 *)(local_90.field0_0x0 + (long)iVar4 * 2 + *(long *)(local_90.field0_0x0 + 0x10))
           = uVar3;
      *(undefined2 *)
       (local_90.field0_0x0 +
       (long)*(int *)(local_90.field0_0x0 + 4) * 2 + *(long *)(local_90.field0_0x0 + 0x10)) = 0;
      QString::operator=((QString *)&DAT_1011ccaf8,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006d8a0f;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1006d8a0f:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006d8a45;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1006d8a45:
      iVar4 = 1;
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","cmn_utils",2,"SBA mode approved, path \'%s\'",
                      local_a0 + *(long *)(local_a0 + 0x10));
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006d8b00;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
      }
    }
LAB_1006d8b00:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8b30;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1006d8b30:
  } while (iVar4 == 0);
  if ((iVar4 == 5) && (0 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",1,"SBA mode rejected, no vm app was found (%s)",
                  local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d8bbb;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_1006d8bbb:
  QDir::~QDir(local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

