
void FUN_1005a36d0(QString *param_1)

{
  QString *pQVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  size_t sVar8;
  QString QVar9;
  void *pvVar10;
  undefined4 *puVar11;
  Data *pDVar12;
  QKeySequence *this;
  QTypedArrayData<unsigned_short> *pQVar13;
  int iVar14;
  undefined4 uVar15;
  QTypedArrayData<unsigned_short> *pQVar16;
  QTypedArrayData<unsigned_short> *pQVar17;
  QTypedArrayData<unsigned_short> *pQVar18;
  QTypedArrayData<unsigned_short> *pQVar19;
  long lVar20;
  QArrayData *local_180;
  QArrayData *local_178;
  QVariant local_170;
  _func_void_Node_ptr *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QVariant local_140;
  Data *local_130 [2];
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  Data *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  int *local_a0;
  int *local_98;
  long *local_90;
  long *local_88;
  int local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  undefined1 local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  puVar5 = PTR_s_ShortcutsStorage_102274490;
  iVar14 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar14 = (int)sVar8;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  CMappingModel::startSubmit(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a374e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a374e:
  puVar5 = PTR_s_Profiles_1022744b0;
  pQVar1 = param_1 + 10;
  iVar14 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_Profiles_1022744b0);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_48.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_48,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar16 = pQVar17;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_48,(QString *)(pQVar17 + 0x10));
          pQVar16 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar13 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_48.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar16;
        pQVar19 = pQVar16;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_48.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_48.field0_0x0;
      if ((bool)local_31) goto LAB_1005a384a;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a384a:
  if (pQVar16 != pQVar13) {
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    pvVar10 = DAT_102310998;
    puVar5 = PTR_s_Profiles_1022744b0;
    iVar14 = -1;
    if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_Profiles_1022744b0);
      iVar14 = (int)sVar8;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_60,pQVar1,&local_68);
    FUN_1005810a0(local_50,&local_60);
    FUN_1006fb6f0(pvVar10,local_50);
    FUN_1000fe670(local_50);
    QVariant::~QVariant(&local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3915;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1005a3915:
  puVar5 = PTR_s_Profiles_1022744b0;
  iVar14 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_Profiles_1022744b0);
    iVar14 = (int)sVar8;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a397a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005a397a:
  puVar5 = PTR_s_ProfileAssignments_1022744b8;
  iVar14 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_78.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_78,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar18 = pQVar17;
        pQVar16 = pQVar13;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_78,(QString *)(pQVar17 + 0x10));
          pQVar13 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar18 = pQVar13;
          pQVar16 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_78.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar13 = pQVar16;
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar18;
        pQVar19 = pQVar18;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_78.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_78.field0_0x0;
      if ((bool)local_31) goto LAB_1005a3a6b;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a3a6b:
  puVar5 = PTR_s_ProfileAssignments_1022744b8;
  if (pQVar13 != pQVar16) {
    iVar14 = -1;
    if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_ProfileAssignments_1022744b8);
      iVar14 = (int)sVar8;
    }
    local_b8 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_b0,pQVar1,&local_b8);
    FUN_10024fb10(&local_a0,&local_b0);
    FUN_1002101d0(&local_98,&local_a0);
    local_90 = (long *)(local_98 + (long)local_98[2] * 2 + 4);
    local_88 = (long *)(local_98 + (long)local_98[3] * 2 + 4);
    local_80 = 1;
    if (*local_a0 != -1) {
      if (*local_a0 != 0) {
        LOCK();
        *local_a0 = *local_a0 + -1;
        local_31 = *local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3b3a;
      }
      FUN_1001c45d0(&local_a0,local_a0);
    }
LAB_1005a3b3a:
    QVariant::~QVariant(&local_b0);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3b7c;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1005a3b7c:
    if (local_80 != 0) {
      for (; local_90 != local_88; local_90 = local_90 + 1) {
        FUN_100719e30(*local_90,*local_90 + 8);
        local_80 = 1;
      }
    }
    if (*local_98 != -1) {
      if (*local_98 != 0) {
        LOCK();
        *local_98 = *local_98 + -1;
        local_31 = *local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3c33;
      }
      FUN_1001c45d0(&local_98,local_98);
    }
  }
LAB_1005a3c33:
  puVar5 = PTR_s_ProfileAssignments_1022744b8;
  iVar14 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar14 = (int)sVar8;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a3ca4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005a3ca4:
  puVar5 = PTR_s_MouseShortcuts_1022744c0;
  iVar14 = -1;
  if (PTR_s_MouseShortcuts_1022744c0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_MouseShortcuts_1022744c0);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_c8.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_c8,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar18 = pQVar17;
        pQVar16 = pQVar13;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_c8,(QString *)(pQVar17 + 0x10));
          pQVar13 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar18 = pQVar13;
          pQVar16 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_c8.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar13 = pQVar16;
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar18;
        pQVar19 = pQVar18;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_c8.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_c8.field0_0x0;
      if ((bool)local_31) goto LAB_1005a3da1;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a3da1:
  if (pQVar13 != pQVar16) {
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    pvVar10 = DAT_102310998;
    puVar5 = PTR_s_MouseShortcuts_1022744c0;
    iVar14 = -1;
    if (PTR_s_MouseShortcuts_1022744c0 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_MouseShortcuts_1022744c0);
      iVar14 = (int)sVar8;
    }
    local_e8 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_e0,pQVar1,&local_e8);
    FUN_100597be0(&local_d0,&local_e0);
    FUN_1006fb6b0(pvVar10,&local_d0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3eaf;
      }
      iVar14 = *(int *)(local_d0 + 0xc);
      if (iVar14 != *(int *)(local_d0 + 8)) {
        lVar20 = (long)*(int *)(local_d0 + 8) * 8 + (long)iVar14 * -8;
        pDVar12 = local_d0 + (long)iVar14 * 8 + 8;
        do {
          if (*(void **)pDVar12 != (void *)0x0) {
            operator_delete(*(void **)pDVar12);
          }
          pDVar12 = pDVar12 + -8;
          lVar20 = lVar20 + 8;
        } while (lVar20 != 0);
      }
      QListData::dispose(local_d0);
    }
LAB_1005a3eaf:
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a3ef1;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_1005a3ef1:
  puVar5 = PTR_s_MouseShortcuts_1022744c0;
  iVar14 = -1;
  if (PTR_s_MouseShortcuts_1022744c0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_MouseShortcuts_1022744c0);
    iVar14 = (int)sVar8;
  }
  local_f0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_f0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a3f62;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005a3f62:
  puVar5 = PTR_s_GrabHostShortcutsType_1022744c8;
  iVar14 = -1;
  if (PTR_s_GrabHostShortcutsType_1022744c8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_GrabHostShortcutsType_1022744c8);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_f8.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_f8,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar18 = pQVar17;
        pQVar16 = pQVar13;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_f8,(QString *)(pQVar17 + 0x10));
          pQVar13 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar18 = pQVar13;
          pQVar16 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_f8.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar13 = pQVar16;
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar18;
        pQVar19 = pQVar18;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_f8.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_f8.field0_0x0;
      if ((bool)local_31) goto LAB_1005a4061;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a4061:
  if (pQVar13 != pQVar16) {
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    pvVar10 = DAT_102310998;
    puVar5 = PTR_s_GrabHostShortcutsType_1022744c8;
    iVar14 = -1;
    if (PTR_s_GrabHostShortcutsType_1022744c8 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_GrabHostShortcutsType_1022744c8);
      iVar14 = (int)sVar8;
    }
    local_110 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_108,pQVar1,&local_110);
    if (DAT_1022743d8 == 0) {
      DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
    }
    uVar3 = DAT_1022743d8;
    uVar7 = QVariant::userType();
    if (uVar3 == uVar7) {
      puVar11 = (undefined4 *)QVariant::constData();
      uVar15 = *puVar11;
    }
    else {
      cVar6 = QVariant::convert((int)&local_108,(void *)(ulong)uVar3);
      uVar15 = 0;
      if (cVar6 != '\0') {
        uVar15 = local_38;
      }
    }
    FUN_1006fb770(pvVar10,uVar15);
    QVariant::~QVariant(&local_108);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a4188;
      }
      QArrayData::deallocate(local_110,2,8);
    }
  }
LAB_1005a4188:
  puVar5 = PTR_s_GrabHostShortcutsType_1022744c8;
  iVar14 = -1;
  if (PTR_s_GrabHostShortcutsType_1022744c8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_GrabHostShortcutsType_1022744c8);
    iVar14 = (int)sVar8;
  }
  local_118 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a41f9;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005a41f9:
  puVar5 = PTR_s_ShowHideAppShortcut_1022744d0;
  iVar14 = -1;
  if (PTR_s_ShowHideAppShortcut_1022744d0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_ShowHideAppShortcut_1022744d0);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_120.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_120,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar18 = pQVar17;
        pQVar16 = pQVar13;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_120,(QString *)(pQVar17 + 0x10));
          pQVar13 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar18 = pQVar13;
          pQVar16 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_120.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar13 = pQVar16;
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar18;
        pQVar19 = pQVar18;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_120.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_120.field0_0x0;
      if ((bool)local_31) goto LAB_1005a42f1;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a42f1:
  if (pQVar13 != pQVar16) {
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    pvVar10 = DAT_102310998;
    puVar5 = PTR_s_ShowHideAppShortcut_1022744d0;
    iVar14 = -1;
    if (PTR_s_ShowHideAppShortcut_1022744d0 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_ShowHideAppShortcut_1022744d0);
      iVar14 = (int)sVar8;
    }
    local_148 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_140,pQVar1,&local_148);
    FUN_1005981c0(local_130,&local_140);
    FUN_1006fb790(pvVar10,local_130);
    if (*(int *)local_130[0] != -1) {
      if (*(int *)local_130[0] != 0) {
        LOCK();
        *(int *)local_130[0] = *(int *)local_130[0] + -1;
        local_31 = *(int *)local_130[0] != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a43fa;
      }
      iVar14 = *(int *)(local_130[0] + 0xc);
      if (iVar14 != *(int *)(local_130[0] + 8)) {
        lVar20 = (long)*(int *)(local_130[0] + 8) * 8 + (long)iVar14 * -8;
        this = (QKeySequence *)(local_130[0] + (long)iVar14 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar20 = lVar20 + 8;
        } while (lVar20 != 0);
      }
      QListData::dispose(local_130[0]);
    }
LAB_1005a43fa:
    QVariant::~QVariant(&local_140);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a443c;
      }
      QArrayData::deallocate(local_148,2,8);
    }
  }
LAB_1005a443c:
  puVar5 = PTR_s_ShowHideAppShortcut_1022744d0;
  iVar14 = -1;
  if (PTR_s_ShowHideAppShortcut_1022744d0 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_ShowHideAppShortcut_1022744d0);
    iVar14 = (int)sVar8;
  }
  local_150 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_150);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a44ad;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1005a44ad:
  puVar5 = PTR_s_AppShortcuts_1022744a8;
  iVar14 = -1;
  if (PTR_s_AppShortcuts_1022744a8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_AppShortcuts_1022744a8);
    iVar14 = (int)sVar8;
  }
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar14);
  pQVar13 = pQVar1->field0_0x0;
  uVar3 = *(uint *)(pQVar13 + 0x20);
  pQVar16 = pQVar13;
  local_158.field0_0x0 = QVar9.field0_0x0;
  if (uVar3 != 0) {
    uVar7 = qHash(&local_158,*(uint *)(pQVar13 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar3;
    pQVar17 = *(QTypedArrayData<unsigned_short> **)(*(long *)(pQVar13 + 8) + uVar4 * 8);
    if (pQVar17 != pQVar13) {
      pQVar19 = (QTypedArrayData<unsigned_short> *)(*(long *)(pQVar13 + 8) + uVar4 * 8);
      do {
        pQVar18 = pQVar17;
        pQVar16 = pQVar13;
        if (*(uint *)(pQVar17 + 8) == uVar7) {
          cVar6 = operator==(&local_158,(QString *)(pQVar17 + 0x10));
          pQVar13 = *(QTypedArrayData<unsigned_short> **)pQVar19;
          pQVar18 = pQVar13;
          pQVar16 = pQVar1->field0_0x0;
          QVar9.field0_0x0 = local_158.field0_0x0;
          if (cVar6 != '\0') break;
        }
        pQVar13 = pQVar16;
        pQVar17 = *(QTypedArrayData<unsigned_short> **)pQVar18;
        pQVar19 = pQVar18;
        pQVar16 = pQVar13;
        QVar9.field0_0x0 = local_158.field0_0x0;
      } while (pQVar17 != pQVar13);
    }
  }
  if (*(int *)QVar9.field0_0x0 != -1) {
    if (*(int *)QVar9.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar9.field0_0x0 = *(int *)QVar9.field0_0x0 + -1;
      local_31 = *(int *)QVar9.field0_0x0 != 0;
      UNLOCK();
      QVar9.field0_0x0 = local_158.field0_0x0;
      if ((bool)local_31) goto LAB_1005a45a1;
    }
    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,2,8);
  }
LAB_1005a45a1:
  if (pQVar13 != pQVar16) {
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    pvVar10 = DAT_102310998;
    puVar5 = PTR_s_AppShortcuts_1022744a8;
    iVar14 = -1;
    if (PTR_s_AppShortcuts_1022744a8 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_AppShortcuts_1022744a8);
      iVar14 = (int)sVar8;
    }
    local_178 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
    FUN_100036660(&local_170,pQVar1,&local_178);
    FUN_100598c60(&local_160,&local_170);
    FUN_1006fb0f0(pvVar10,&local_160);
    if (*(int *)(local_160 + 0x10) != -1) {
      if (*(int *)(local_160 + 0x10) != 0) {
        LOCK();
        pcVar2 = local_160 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        local_31 = *(int *)pcVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a4671;
      }
      QHashData::free_helper(local_160);
    }
LAB_1005a4671:
    QVariant::~QVariant(&local_170);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a46b3;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
LAB_1005a46b3:
  puVar5 = PTR_s_AppShortcuts_1022744a8;
  iVar14 = -1;
  if (PTR_s_AppShortcuts_1022744a8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_AppShortcuts_1022744a8);
    iVar14 = (int)sVar8;
  }
  local_180 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar14);
  FUN_1005a6890(pQVar1,&local_180);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a472b;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1005a472b:
  CMappingModel::endSubmit((int)param_1);
  CMappingModel::dataChanged();
  return;
}

