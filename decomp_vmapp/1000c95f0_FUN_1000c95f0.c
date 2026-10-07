
void FUN_1000c95f0(long param_1)

{
  QString *this;
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  uint uVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QFileInfo local_110 [8];
  QArrayData *local_108;
  QString local_100;
  QTypedArrayData<unsigned_short> *local_f8;
  QArrayData *local_f0;
  QTypedArrayData<unsigned_short> *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((*(ushort *)(param_1 + 0x1f2) & 0xc20) == 0) {
    this = (QString *)(param_1 + 0x1d0);
    QString::truncate((int)param_1 + 0x1d8);
    QFileInfo::filePath();
    QString::operator=(this,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c9e75;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_1000c9e75:
    iVar1 = *(int *)(this->field0_0x0 + 4);
    pQVar3 = (QArrayData *)QString::fromAscii_helper(".sav",4);
    iVar2 = *(int *)(pQVar3 + 4);
    pQVar4 = (QArrayData *)QString::fromAscii_helper(".sav",4);
    uVar5 = *(uint *)(pQVar4 + 4);
    local_108 = (QArrayData *)QString::fromAscii_helper(".sav",4);
    QString::replace((int)this,iVar1 - iVar2,(QString *)(ulong)uVar5);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c9f24;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_1000c9f24:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c9f53;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1000c9f53:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c9f89;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1000c9f89:
    uVar5 = *(uint *)(param_1 + 0x1f0);
    if ((uVar5 & 0x1000000) != 0) {
      QFile::remove(this);
      uVar5 = *(uint *)(param_1 + 0x1f0);
    }
    if ((uVar5 & 0x2000000) != 0) {
      QFileInfo::QFileInfo(local_110,this);
      QFileInfo::~QFileInfo(local_110);
    }
    QFileInfo::absolutePath();
    local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_128;
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0xa02eac);
    QString::append(&local_120);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca053;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1000ca053:
    local_118.field0_0x0 = local_120.field0_0x0;
    if (1 < *(int *)local_120.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x9e81e9);
    QString::append(&local_118);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca0c7;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1000ca0c7:
    QString::operator=((QString *)(param_1 + 0x1e0),&local_118);
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca113;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_1000ca113:
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca149;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_1000ca149:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca17f;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1000ca17f:
    pQVar6 = this->field0_0x0;
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"Sav: [%s]",local_130 + *(long *)(local_130 + 0x10));
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ca20c;
      }
      QArrayData::deallocate(local_130,1,8);
    }
LAB_1000ca20c:
    if (*(int *)pQVar6 == -1) {
      return;
    }
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_1000ca233;
  }
  QFileInfo::absolutePath();
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_80,0x9ecb20);
  QString::append(&local_88);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c969d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000c969d:
  QString::operator=((QString *)(param_1 + 0x1e8),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c96dd;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1000c96dd:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9713;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000c9713:
  local_a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x1e8);
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0xa02eac);
  QString::append(&local_a8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9787;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000c9787:
  local_a0.field0_0x0 = local_a8.field0_0x0;
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a0);
  local_98.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x9ecb2b);
  QString::append(&local_98);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9829;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000c9829:
  QString::operator=((QString *)(param_1 + 0x1d0),&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9875;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1000c9875:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c98ab;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1000c98ab:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c98e1;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1000c98e1:
  local_c0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x1e8);
  if (1 < *(int *)local_c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
    local_31 = *(int *)local_c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0xa02eac);
  QString::append(&local_c0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9955;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000c9955:
  local_b8.field0_0x0 = local_c0.field0_0x0;
  if (1 < *(int *)local_c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
    local_31 = *(int *)local_c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_b8);
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_31 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x9e6705);
  QString::append(&local_b0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c99f7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000c99f7:
  QString::operator=((QString *)(param_1 + 0x1d8),&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9a43;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1000c9a43:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9a79;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1000c9a79:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9aaf;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1000c9aaf:
  local_d8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x1e8);
  if (1 < *(int *)local_d8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
    local_31 = *(int *)local_d8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0xa02eac);
  QString::append(&local_d8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9b23;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000c9b23:
  local_d0.field0_0x0 = local_d8.field0_0x0;
  if (1 < *(int *)local_d8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
    local_31 = *(int *)local_d8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_d0);
  local_c8.field0_0x0 = local_d0.field0_0x0;
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x9e81f7);
  QString::append(&local_c8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9bc5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000c9bc5:
  QString::operator=((QString *)(param_1 + 0x1e0),&local_c8);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9c11;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1000c9c11:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9c47;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1000c9c47:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9c7d;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1000c9c7d:
  local_e8 = ((QString *)(param_1 + 0x1d8))->field0_0x0;
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_31 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vm",0,"Mem: [%s]",local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9d0b;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_1000c9d0b:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9d41;
    }
    QArrayData::deallocate((QArrayData *)local_e8,2,8);
  }
LAB_1000c9d41:
  local_f8 = ((QString *)(param_1 + 0x1d0))->field0_0x0;
  if (1 < *(int *)local_f8 + 1U) {
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + 1;
    local_31 = *(int *)local_f8 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vm",0,"Sav: [%s]",local_f0 + *(long *)(local_f0 + 0x10));
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c9dce;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1000c9dce:
  if (*(int *)local_f8 == -1) {
    return;
  }
  pQVar6 = local_f8;
  if (*(int *)local_f8 != 0) {
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + -1;
    UNLOCK();
    if (*(int *)local_f8 != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_1000ca233:
  QArrayData::deallocate((QArrayData *)pQVar6,2,8);
  return;
}

