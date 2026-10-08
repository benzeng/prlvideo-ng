
undefined8 FUN_100a346f0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString QVar6;
  char cVar7;
  long *plVar8;
  QArrayData *pQVar9;
  long *plVar10;
  QArrayData *pQVar11;
  uint uVar12;
  QArrayData *pQVar13;
  QArrayData *pQVar14;
  ulong uVar15;
  QArrayData *pQVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long local_a8 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::fromRawData((QChar *)&local_50,param_3);
  QString::QString(&local_40,0x5c);
  QString::section(&local_48,&local_50,&local_40,0xffffffff,0xffffffff,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a34777;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a34777:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a347a7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a347a7:
  QDir::tempPath();
  local_60 = local_68;
  if (1 < *(uint *)local_68 + 1) {
    LOCK();
    *(uint *)local_68 = *(uint *)local_68 + 1;
    local_31 = *(uint *)local_68 != 0;
    UNLOCK();
  }
  uVar12 = *(uint *)(local_68 + 4);
  if ((1 < *(uint *)local_68) || ((*(uint *)(local_68 + 8) & 0x7fffffff) < uVar12 + 2)) {
    QString::reallocData((uint)&local_60,SUB41(uVar12 + 2,0));
    uVar12 = *(uint *)(local_60 + 4);
  }
  *(uint *)(local_60 + 4) = uVar12 + 1;
  *(undefined2 *)(local_60 + (long)(int)uVar12 * 2 + *(long *)(local_60 + 0x10)) = 0x2f;
  *(undefined2 *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 2 + *(long *)(local_60 + 0x10)) =
       0;
  if (1 < *(uint *)local_60 + 1) {
    LOCK();
    *(uint *)local_60 = *(uint *)local_60 + 1;
    local_31 = *(uint *)local_60 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  QString::append(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a34872;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a34872:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a348a2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a348a2:
  iVar20 = 0;
LAB_100a348c0:
  do {
    QFileInfo::QFileInfo(local_70,&local_58);
    cVar7 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_70);
    if (cVar7 == '\0') break;
    QDir::tempPath();
    local_88 = local_90;
    if (1 < *(uint *)local_90 + 1) {
      LOCK();
      *(uint *)local_90 = *(uint *)local_90 + 1;
      local_31 = *(uint *)local_90 != 0;
      UNLOCK();
    }
    uVar12 = *(uint *)(local_90 + 4);
    if ((1 < *(uint *)local_90) || ((*(uint *)(local_90 + 8) & 0x7fffffff) < uVar12 + 2)) {
      QString::reallocData((uint)&local_88,SUB41(uVar12 + 2,0));
      uVar12 = *(uint *)(local_88 + 4);
    }
    *(uint *)(local_88 + 4) = uVar12 + 1;
    *(undefined2 *)(local_88 + (long)(int)uVar12 * 2 + *(long *)(local_88 + 0x10)) = 0x2f;
    *(undefined2 *)(local_88 + (long)(int)*(uint *)(local_88 + 4) * 2 + *(long *)(local_88 + 0x10))
         = 0;
    QString::number((int)&local_98,iVar20);
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
    if (1 < *(uint *)local_88 + 1) {
      LOCK();
      *(uint *)local_88 = *(uint *)local_88 + 1;
      local_31 = *(uint *)local_88 != 0;
      UNLOCK();
    }
    QString::append(&local_80);
    local_78.field0_0x0 = local_80.field0_0x0;
    if (1 < *(uint *)local_80.field0_0x0 + 1) {
      LOCK();
      *(uint *)local_80.field0_0x0 = *(uint *)local_80.field0_0x0 + 1;
      local_31 = *(uint *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_78);
    QString::operator=(&local_58,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a349fc;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100a349fc:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a34a2c;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100a34a2c:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a34a62;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a34a62:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a34a92;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100a34a92:
    iVar20 = iVar20 + 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a348c0;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  } while( true );
  QFile::QFile((QFile *)local_a8,&local_58);
  cVar7 = (**(code **)(local_a8[0] + 0x68))(local_a8,3);
  QFile::~QFile((QFile *)local_a8);
  if (cVar7 != '\0') {
    plVar8 = operator_new(0x28);
    QVar6.field0_0x0 = local_58.field0_0x0;
    lVar1 = *(long *)(local_58.field0_0x0 + 0x10);
    uVar12 = *(uint *)(local_58.field0_0x0 + 4);
    uVar21 = (ulong)(int)uVar12;
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (long)&PTR_FUN_1022810a8;
    *(undefined4 *)((long)plVar8 + 0xc) = 0x18;
    if ((long)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar12 < 0xb) {
      *(char *)(plVar8 + 2) = (char)uVar12 * '\x02';
      pQVar9 = (QArrayData *)((long)plVar8 + 0x12);
      if (uVar12 != 0) goto LAB_100a34ba4;
    }
    else {
      uVar15 = uVar21 + 8 & 0xfffffffffffffff8;
      pQVar9 = operator_new(uVar15 * 2);
      plVar8[4] = (long)pQVar9;
      plVar8[2] = uVar15 | 1;
      plVar8[3] = uVar21;
LAB_100a34ba4:
      pQVar11 = (QArrayData *)(QVar6.field0_0x0 + lVar1);
      pQVar13 = pQVar9;
      uVar15 = uVar21;
      if (uVar12 != 0) {
        uVar18 = uVar21 & 0xfffffffffffffff0;
        uVar17 = 0;
        if ((uVar18 != 0) &&
           (((QArrayData *)(QVar6.field0_0x0 + lVar1 + uVar21 * 2 + -2) < pQVar9 ||
            (uVar17 = 0, pQVar9 + uVar21 * 2 + -2 < pQVar11)))) {
          pQVar13 = pQVar9 + uVar18 * 2;
          uVar15 = uVar21 - uVar18;
          pQVar11 = pQVar11 + uVar18 * 2;
          pQVar16 = pQVar9 + 0x10;
          pQVar14 = (QArrayData *)(QVar6.field0_0x0 + lVar1 + 0x10);
          uVar19 = uVar21 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pQVar14 + -8);
            uVar4 = *(undefined8 *)pQVar14;
            uVar5 = *(undefined8 *)(pQVar14 + 8);
            *(undefined8 *)(pQVar16 + -0x10) = *(undefined8 *)(pQVar14 + -0x10);
            *(undefined8 *)(pQVar16 + -8) = uVar3;
            *(undefined8 *)pQVar16 = uVar4;
            *(undefined8 *)(pQVar16 + 8) = uVar5;
            pQVar16 = pQVar16 + 0x20;
            pQVar14 = pQVar14 + 0x20;
            uVar19 = uVar19 - 0x10;
            uVar17 = uVar18;
          } while (uVar19 != 0);
        }
        if (uVar21 == uVar17) goto LAB_100a34c53;
      }
      do {
        *(undefined2 *)pQVar13 = *(undefined2 *)pQVar11;
        pQVar13 = pQVar13 + 2;
        pQVar11 = pQVar11 + 2;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
LAB_100a34c53:
    *(undefined2 *)(pQVar9 + uVar21 * 2) = 0;
    *plVar8 = (long)&PTR_FUN_102237ef8;
    plVar2 = *(long **)(param_1 + 0x10);
    plVar10 = operator_new(0x18);
    plVar10[2] = (long)plVar8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar10[1] = (long)plVar2;
    lVar1 = *plVar2;
    *plVar10 = lVar1;
    *(long **)(lVar1 + 8) = plVar10;
    *plVar2 = (long)plVar10;
    plVar2[2] = plVar2[2] + 1;
    LOCK();
    plVar2 = plVar8 + 1;
    lVar1 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a34cec;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a34cec:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 1;
}

