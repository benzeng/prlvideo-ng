
void FUN_100090910(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  int *piVar13;
  uint *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint in_stack_fffffffffffff68c;
  undefined8 local_950;
  undefined1 local_948 [2104];
  QArrayData *local_110;
  QArrayData *local_108;
  int *local_100;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_78 [24];
  int *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((*(uint *)(param_2 + 0x18) & 0xfffffffe) == 6) {
    QString::fromUtf16((ushort *)&local_58,(int)param_2 + 0x38);
    QString::normalized(&local_50,&local_58,1,0);
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1dbaca4);
    QString::append(&local_48);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000909cd;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1000909cd:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000909fd;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000909fd:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100090a34;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100090a34:
    local_60 = (int *)PTR_shared_null_1021e15e8;
    puVar21 = (undefined8 *)(param_1 + 0x38);
    puVar8 = *(uint **)(param_1 + 0x38);
    if (1 < *puVar8) {
      FUN_100036c40(puVar21,puVar8[1]);
      puVar8 = (uint *)*puVar21;
    }
    puVar14 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar8) {
        FUN_100036c40(puVar21,puVar8[1]);
        puVar8 = (uint *)*puVar21;
      }
      if (puVar14 == puVar8 + (long)(int)puVar8[3] * 2 + 4) break;
      cVar5 = QString::startsWith(puVar14,&local_48,1);
      if ((cVar5 != '\0') &&
         (iVar6 = QString::indexOf(puVar14,0x5c,*(int *)(local_48.field0_0x0 + 4),1), iVar6 == -1))
      {
        FUN_1000341d0(&local_60,puVar14);
      }
      puVar14 = puVar14 + 2;
      puVar8 = (uint *)*puVar21;
    }
    iVar6 = local_60[3];
    iVar2 = local_60[2];
    iVar7 = CMessageManager::instance();
    FUN_1003193e0(local_78 + 0x10,*(undefined8 *)(param_1 + 0x20));
    local_78._8_8_ = PTR_shared_null_1021e15e8;
    local_78._0_8_ = PTR_shared_null_1021e15e8;
    local_b8 = (int *)0x0;
    uStack_b0 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90 = 0x80000000;
    local_98.field7 = 0;
    local_88 = 1;
    local_f8 = (int *)0x0;
    uStack_f0 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x80000000;
    local_d8.field7 = 0;
    local_c8 = 1;
    iVar6 = CMessageManager::showMessageBox
                      (iVar7,(QString *)(ulong)(1 < iVar6 - iVar2 | 0x36ee),
                       (QStringList *)(local_78 + 0x10),(QStringList *)(local_78 + 8),
                       (CSlotInfo *)local_78,SUB81(&local_b8,0),
                       (QWidget *)((ulong)in_stack_fffffffffffff68c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_d8);
    if (local_f8 != (int *)0x0) {
      LOCK();
      *local_f8 = *local_f8 + -1;
      local_31 = *local_f8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_f8 != (int *)0x0)) {
        operator_delete(local_f8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_98);
    if (local_b8 != (int *)0x0) {
      LOCK();
      *local_b8 = *local_b8 + -1;
      local_31 = *local_b8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_b8 != (int *)0x0)) {
        operator_delete(local_b8);
      }
    }
    FUN_100039a80(local_78);
    FUN_100039a80(local_78 + 8);
    if (*(int *)local_78._16_8_ != -1) {
      if (*(int *)local_78._16_8_ != 0) {
        LOCK();
        *(int *)local_78._16_8_ = *(int *)local_78._16_8_ + -1;
        local_31 = *(int *)local_78._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100090cd4;
      }
      QArrayData::deallocate((QArrayData *)local_78._16_8_,2,8);
    }
LAB_100090cd4:
    if (iVar6 != 2) goto LAB_100090fb0;
    uVar9 = FUN_100a39010();
    local_100 = local_60;
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_100);
        iVar6 = local_100[2];
        if (iVar6 != local_100[3]) {
          piVar13 = local_60 + (long)local_60[2] * 2 + 4;
          piVar16 = local_100 + (long)iVar6 * 2 + 4;
          lVar10 = (long)local_100[3] * 8 + (long)iVar6 * -8;
          do {
            piVar3 = *(int **)piVar13;
            *(int **)piVar16 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar16 = piVar16 + 2;
            piVar13 = piVar13 + 2;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    uVar12 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
    FUN_10018c650(&local_110,uVar12);
    FUN_100a3b420(uVar9,&local_100,&local_110);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100090f6e;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100090f6e:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100090fa4;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100090fa4:
    FUN_100039a80(&local_100);
LAB_100090fb0:
    FUN_100099d90(local_948,9,*(undefined8 *)(param_2 + 8),0);
    FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_948);
    FUN_100039a80(&local_60);
    if (*(int *)local_48.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar10 != 0) {
    uVar18 = *(ulong *)(param_2 + 8);
    lVar15 = 0;
    lVar17 = lVar10;
    do {
      while (uVar19 = *(ulong *)(lVar17 + 0x18), uVar19 < uVar18) {
        plVar1 = (long *)(lVar17 + 0x10);
        lVar17 = *plVar1;
        if (*plVar1 == 0) {
          if (lVar15 == 0) goto LAB_100090d8c;
          uVar19 = *(ulong *)(lVar15 + 0x18);
          goto LAB_100090d83;
        }
      }
      plVar1 = (long *)(lVar17 + 8);
      lVar15 = lVar17;
      lVar17 = *plVar1;
    } while (*plVar1 != 0);
LAB_100090d83:
    if (uVar19 <= uVar18) {
      local_950 = 0;
      lVar15 = 0;
      do {
        while (lVar17 = lVar10, uVar19 = *(ulong *)(lVar17 + 0x18), uVar19 < uVar18) {
          lVar10 = *(long *)(lVar17 + 0x10);
          if (*(long *)(lVar17 + 0x10) == 0) {
            if (lVar15 == 0) goto LAB_100090ea3;
            uVar19 = *(ulong *)(lVar15 + 0x18);
            lVar17 = lVar15;
            goto LAB_100090e9e;
          }
        }
        lVar10 = *(long *)(lVar17 + 8);
        lVar15 = lVar17;
      } while (*(long *)(lVar17 + 8) != 0);
LAB_100090e9e:
      if (uVar18 < uVar19) {
LAB_100090ea3:
        lVar17 = 0;
      }
      puVar21 = &local_950;
      if (lVar17 != 0) {
        puVar21 = (undefined8 *)(lVar17 + 0x20);
      }
      pvVar11 = (void *)*puVar21;
      goto LAB_100090edd;
    }
  }
LAB_100090d8c:
  lVar10 = FUN_100319960(*(undefined8 *)(param_1 + 0x20));
  uVar9 = 0;
  if (lVar10 != 0) {
    iVar6 = FUN_100325aa0(lVar10);
    if (iVar6 != 2) {
      iVar6 = FUN_100325aa0(lVar10);
      uVar9 = 0;
      if (iVar6 != 3) goto LAB_100090dc8;
    }
    uVar9 = FUN_100326190(lVar10);
  }
LAB_100090dc8:
  pvVar11 = operator_new(0x898);
  FUN_100095c60(pvVar11,param_1,uVar9,0);
  puVar21 = (undefined8 *)(param_1 + 0x30);
  puVar8 = (uint *)*puVar21;
  if (1 < *puVar8) {
    FUN_1000957d0(puVar21);
    puVar8 = (uint *)*puVar21;
  }
  if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
    puVar14 = puVar8 + 2;
  }
  else {
    puVar4 = *(uint **)(puVar8 + 4);
    puVar20 = (uint *)0x0;
    do {
      while (puVar14 = puVar4, uVar18 = *(ulong *)(puVar14 + 6), uVar18 < *(ulong *)(param_2 + 8)) {
        puVar4 = *(uint **)(puVar14 + 4);
        if (*(uint **)(puVar14 + 4) == (uint *)0x0) {
          if (puVar20 == (uint *)0x0) goto LAB_100090ebe;
          uVar18 = *(ulong *)(puVar20 + 6);
          goto LAB_100090e46;
        }
      }
      puVar4 = *(uint **)(puVar14 + 2);
      puVar20 = puVar14;
    } while (*(uint **)(puVar14 + 2) != (uint *)0x0);
LAB_100090e46:
    if (uVar18 <= *(ulong *)(param_2 + 8)) {
      *(void **)(puVar20 + 8) = pvVar11;
      goto LAB_100090edd;
    }
  }
LAB_100090ebe:
  lVar10 = QMapDataBase::createNode((int)puVar8,0x28,(QMapNodeBase *)0x8,SUB81(puVar14,0));
  *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_2 + 8);
  *(void **)(lVar10 + 0x20) = pvVar11;
LAB_100090edd:
  if (pvVar11 == (void *)0x0) {
    return;
  }
  FUN_100095e50(pvVar11,param_2);
  return;
}

