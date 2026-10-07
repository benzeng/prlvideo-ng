
undefined8 FUN_1003ef470(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  char local_89;
  QArrayData *local_88;
  QArrayData *local_80;
  QRegExp local_78 [8];
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QTextStream local_48 [20];
  byte local_34 [4];
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x1fe0) == 0) {
    puVar7 = operator_new__(0x1008);
    *puVar7 = 0x40;
    puVar3 = PTR_shared_null_100ba20d0;
    puVar10 = puVar7 + 1;
    lVar11 = 0;
    do {
      *(undefined **)((long)puVar7 + lVar11 + 0x28) = puVar3;
      *(undefined4 *)((long)puVar7 + lVar11 + 9) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0xd) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x11) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x40) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x38) = 0;
      *(undefined1 *)((long)puVar7 + lVar11 + 0x13) = 2;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x1c) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x20) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x30) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x34) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0;
      *(undefined **)((long)puVar7 + lVar11 + 0x68) = puVar3;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x49) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x4d) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x51) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x80) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x78) = 0;
      *(undefined1 *)((long)puVar7 + lVar11 + 0x53) = 2;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x60) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x70) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x74) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x58) = 0;
      lVar11 = lVar11 + 0x80;
    } while (lVar11 != 0x1000);
  }
  else {
    puVar7 = operator_new__(0x1008);
    *puVar7 = 0x40;
    puVar3 = PTR_shared_null_100ba20d0;
    puVar10 = puVar7 + 1;
    lVar11 = 0;
    do {
      *(undefined **)((long)puVar7 + lVar11 + 0x28) = puVar3;
      *(undefined4 *)((long)puVar7 + lVar11 + 9) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0xd) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x11) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x40) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x38) = 0;
      *(undefined1 *)((long)puVar7 + lVar11 + 0x13) = 2;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x1c) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x20) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x30) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x34) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0;
      *(undefined **)((long)puVar7 + lVar11 + 0x68) = puVar3;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x49) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x4d) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x51) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x80) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x78) = 0;
      *(undefined1 *)((long)puVar7 + lVar11 + 0x53) = 2;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x60) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x70) = 0;
      *(undefined4 *)((long)puVar7 + lVar11 + 0x74) = 0;
      *(undefined8 *)((long)puVar7 + lVar11 + 0x58) = 0;
      lVar11 = lVar11 + 0x80;
    } while (lVar11 != 0x1000);
    lVar11 = *(long *)(param_1 + 0x1fe0);
    *(undefined8 **)(lVar11 + 0x30) = puVar10;
    puVar7[8] = lVar11;
  }
  *(undefined8 **)(param_1 + 0x1fe0) = puVar10;
  QTextStream::QTextStream(local_48,param_2,1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QTextStream::skipWhiteSpace();
  QTextStream::operator>>(local_48,&local_50);
  QTextStream::operator>>(local_48,(uint *)local_34);
  lVar11 = *(long *)(param_1 + 0x1fe0);
  *(uint *)(lVar11 + 0x14) = (uint)local_34[0];
  QString::QString(&local_30,0x20);
  QString::section(&local_58,param_2,&local_30,2,0xffffffff,0);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ef745;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1003ef745:
  QString::operator=((QString *)(lVar11 + 0x20),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ef785;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003ef785:
  lVar11 = *(long *)(param_1 + 0x1fe0);
  *(undefined4 *)(lVar11 + 0x28) = 0x930;
  iVar5 = QString::indexOf(lVar11 + 0x20,0x2f,0,1);
  if (iVar5 < 1) {
    QString::left((int)&local_b8);
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("AUDIO",5);
    cVar4 = operator==(&local_b8,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_21 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003ef8fc;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1003ef8fc:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003ef932;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1003ef932:
    pbVar8 = *(byte **)(param_1 + 0x1fe0);
    if (cVar4 == '\0') {
      *pbVar8 = *pbVar8 & 0xf | 0x40;
    }
    else {
      pbVar8[0x28] = 0x30;
      pbVar8[0x29] = 9;
      pbVar8[0x2a] = 0;
      pbVar8[0x2b] = 0;
      *pbVar8 = *pbVar8 & 0xf;
    }
    **(byte **)(param_1 + 0x1fe0) = **(byte **)(param_1 + 0x1fe0) & 0xf0 | 1;
    *(undefined4 *)(*(long *)(param_1 + 0x1fe0) + 0x28) = 0x930;
  }
  else {
    QString::left((int)&local_60);
    QString::right((int)&local_68);
    QString::operator=((QString *)(*(long *)(param_1 + 0x1fe0) + 0x20),&local_60);
    lVar11 = *(long *)(param_1 + 0x1fe0);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("AUDIO",5);
    cVar4 = operator==((QString *)(lVar11 + 0x20),&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003ef859;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1003ef859:
    if (cVar4 == '\0') {
      local_80 = (QArrayData *)QString::fromAscii_helper("(?:\\s*)(\\d+)",0xc);
      QRegExp::QRegExp(local_78,&local_80,1,0);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003ef9a9;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003ef9a9:
      iVar5 = QRegExp::indexIn(local_78,&local_68,0,0);
      if (iVar5 < 0) {
        puVar7 = (undefined8 *)___cxa_allocate_exception(8);
        *puVar7 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar7,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
      }
      QRegExp::cap((int)&local_88);
      local_89 = '\0';
      uVar6 = QString::toUInt((bool *)&local_88,(int)&local_89);
      *(undefined4 *)(*(long *)(param_1 + 0x1fe0) + 0x28) = uVar6;
      if (local_89 == '\0') {
        puVar7 = (undefined8 *)___cxa_allocate_exception(8);
        *puVar7 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar7,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
      }
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003efa37;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003efa37:
      QString::left((int)&local_98);
      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("MODE1",5);
      cVar4 = operator==(&local_98,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_21 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003efab6;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_1003efab6:
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_21 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003efaec;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1003efaec:
      if (cVar4 == '\0') {
        QString::left((int)&local_a8);
        local_b0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("MODE2",5);
        cVar4 = operator==(&local_a8,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_21 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1003efd1a;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_1003efd1a:
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_21 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1003efd50;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1003efd50:
        if (cVar4 != '\0') {
          **(byte **)(param_1 + 0x1fe0) = **(byte **)(param_1 + 0x1fe0) & 0xf | 0x40;
          pbVar8 = *(byte **)(param_1 + 0x1fe0);
          bVar9 = *pbVar8 & 0xf0 | 2;
          goto LAB_1003efd74;
        }
      }
      else {
        **(byte **)(param_1 + 0x1fe0) = **(byte **)(param_1 + 0x1fe0) & 0xf | 0x40;
        pbVar8 = *(byte **)(param_1 + 0x1fe0);
        bVar9 = *pbVar8 & 0xf0 | 1;
LAB_1003efd74:
        *pbVar8 = bVar9;
      }
      QRegExp::~QRegExp(local_78);
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x1fe0);
      pbVar8[0x28] = 0x30;
      pbVar8[0x29] = 9;
      pbVar8[0x2a] = 0;
      pbVar8[0x2b] = 0;
      *pbVar8 = *pbVar8 & 0xf;
      **(byte **)(param_1 + 0x1fe0) = **(byte **)(param_1 + 0x1fe0) & 0xf0 | 1;
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003efdaf;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1003efdaf:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003efddf;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1003efddf:
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar11 = (ulong)(uVar1 - 1) * 0x40;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x1fe0) + 0x28);
  *(int *)(*(long *)(param_1 + 0x1fe0) + 0x2c) =
       (int)(*(ulong *)(param_1 + 0x30 + lVar11) / (ulong)uVar2);
  if (*(int *)(param_1 + 0x38 + lVar11) == 0) {
    *(uint *)(param_1 + 0x38 + lVar11) = uVar2;
    if (uVar1 < 2) {
      *(undefined8 *)(param_1 + 0x50 + lVar11) = 0;
    }
    else {
      lVar12 = (ulong)(uVar1 - 2) * 0x40;
      *(ulong *)(param_1 + 0x50 + lVar11) =
           (ulong)*(uint *)(param_1 + 0x5c + lVar12) + *(long *)(param_1 + 0x50 + lVar12);
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003efe6a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003efe6a:
  QTextStream::~QTextStream(local_48);
  return 0;
}

