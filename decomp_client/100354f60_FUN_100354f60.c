
int FUN_100354f60(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  Data *pDVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  QPoint *pQVar11;
  QArrayData *pQVar12;
  Node *pNVar13;
  QPoint *pQVar14;
  long *plVar15;
  QMapNodeBase *pQVar16;
  ulong *puVar17;
  QMapNodeBase *pQVar18;
  QMapNodeBase *pQVar19;
  int iVar20;
  Data *pDVar21;
  long lVar22;
  int iVar23;
  bool bVar24;
  QVariant local_158;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QVariant local_108;
  Node *local_f8;
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  int local_74;
  Data *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001548f0(uVar8,param_1);
  if (lVar9 == 0) {
    return -1;
  }
  uVar8 = FUN_10018c280(lVar9);
  lVar10 = FUN_1003192a0(uVar8);
  pQVar11 = (QPoint *)QApplication::desktop();
  iVar6 = QDesktopWidget::numScreens();
  local_70 = (Data *)PTR_shared_null_1021e15e8;
  local_74 = 0;
  if (0 < iVar6) {
    iVar20 = 1;
    do {
      iVar23 = iVar20;
      FUN_100129840(&local_70);
      iVar20 = iVar23 + 1;
      local_74 = iVar23;
    } while (iVar23 < iVar6);
  }
  QSettings::QSettings((QSettings *)&local_88,(QObject *)0x0);
  pQVar12 = (QArrayData *)QString::fromAscii_helper("Fullscreen",10);
  if (1 < *(int *)pQVar12 + 1U) {
    LOCK();
    *(int *)pQVar12 = *(int *)pQVar12 + 1;
    local_31 = *(int *)pQVar12 != 0;
    UNLOCK();
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
  QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
  QString::append(&local_d0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003550c1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003550c1:
  local_c8.field0_0x0 = local_d0.field0_0x0;
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_c8);
  local_c0.field0_0x0 = local_c8.field0_0x0;
  if (1 < *(int *)local_c8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
    local_31 = *(int *)local_c8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e2468c);
  QString::append(&local_c0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355163;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100355163:
  QString::number((uint)&local_d8,param_2);
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
  QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
  QString::append(&local_b0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035521c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10035521c:
  local_e0 = (QArrayData *)QString::fromAscii_helper("Display Id",10);
  local_a8.field0_0x0 = local_b0.field0_0x0;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_31 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a8);
  local_e8 = 0x80000000;
  local_f0.field7 = 0;
  QSettings::value((QString *)&local_a0,&local_88);
  QVariant::toByteArray();
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant((QVariant *)&local_f0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003552fa;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1003552fa:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355330;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100355330:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355366;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100355366:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035539c;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10035539c:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003553d2;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1003553d2:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355408;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100355408:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035543e;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10035543e:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355474;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100355474:
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003554a3;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_1003554a3:
  MacUtils::getActiveMonitorEDIDs();
  iVar20 = *(int *)(local_f8 + 0x20);
  iVar7 = -1;
  iVar23 = -1;
  if (iVar20 != 0) {
    plVar15 = *(long **)(local_f8 + 8);
    do {
      pNVar13 = (Node *)*plVar15;
      if (pNVar13 != local_f8) goto LAB_1003554f0;
      iVar20 = iVar20 + -1;
      plVar15 = plVar15 + 1;
    } while (iVar20 != 0);
    goto LAB_100355529;
  }
  goto LAB_100355536;
  while (pNVar13 = (Node *)QHashData::nextNode(pNVar13), pNVar13 != local_f8) {
LAB_1003554f0:
    lVar22 = *(long *)(pNVar13 + 0x10);
    if ((*(int *)(lVar22 + 4) == *(int *)(local_90 + 4)) &&
       (iVar20 = _memcmp((void *)(lVar22 + *(long *)(lVar22 + 0x10)),
                         local_90 + *(long *)(local_90 + 0x10),(long)*(int *)(lVar22 + 4)),
       iVar20 == 0)) {
      iVar23 = *(int *)(pNVar13 + 0xc);
      goto LAB_100355536;
    }
  }
LAB_100355529:
  iVar23 = -1;
LAB_100355536:
  if ((param_3 != '\0') &&
     ((iVar23 == -1 || (iVar7 = MacUtils::screenNumberByCGDisplayId(iVar23), iVar7 == -1)))) {
    pQVar12 = (QArrayData *)QString::fromAscii_helper("Fullscreen",10);
    if (1 < *(int *)pQVar12 + 1U) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + 1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
    }
    local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
    QString::fromUtf8_helper((char *)&local_50,0x1e2468c);
    QString::append(&local_138);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003555e0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1003555e0:
    local_130.field0_0x0 = local_138.field0_0x0;
    if (1 < *(int *)local_138.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + 1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_130);
    local_128.field0_0x0 = local_130.field0_0x0;
    if (1 < *(int *)local_130.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_128);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355682;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100355682:
    QString::number((uint)&local_140,param_2);
    local_120.field0_0x0 = local_128.field0_0x0;
    if (1 < *(int *)local_128.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_120);
    local_118.field0_0x0 = local_120.field0_0x0;
    if (1 < *(int *)local_120.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
    QString::append(&local_118);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10035573b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10035573b:
    local_148 = (QArrayData *)QString::fromAscii_helper("Display Number",0xe);
    local_110.field0_0x0 = local_118.field0_0x0;
    if (1 < *(int *)local_118.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_110);
    QVariant::QVariant(&local_158,-1);
    QSettings::value((QString *)&local_108,&local_88);
    iVar7 = QVariant::toInt((bool *)&local_108);
    QVariant::~QVariant(&local_108);
    QVariant::~QVariant(&local_158);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355813;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_100355813:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355849;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100355849:
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10035587f;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_10035587f:
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003558b5;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_1003558b5:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003558eb;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1003558eb:
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355921;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
LAB_100355921:
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_31 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355957;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
LAB_100355957:
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10035598d;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_10035598d:
    if (*(int *)pQVar12 != -1) {
      if (*(int *)pQVar12 != 0) {
        LOCK();
        *(int *)pQVar12 = *(int *)pQVar12 + -1;
        local_31 = *(int *)pQVar12 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003559bc;
      }
      QArrayData::deallocate(pQVar12,2,8);
    }
  }
LAB_1003559bc:
  cVar5 = FUN_100325f80(lVar10);
  if (cVar5 == '\0') {
    uVar8 = FUN_10018c280(lVar9);
    plVar15 = (long *)FUN_100319950(uVar8);
    pQVar16 = (QMapNodeBase *)*plVar15;
    if (*(int *)pQVar16 == 0) {
      pQVar16 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(*plVar15 + 0x10) != 0) {
        puVar17 = (ulong *)FUN_1000340b0(*(long *)(*plVar15 + 0x10),pQVar16);
        *(ulong **)(pQVar16 + 0x10) = puVar17;
        *puVar17 = *puVar17 & 3 | (ulong)(pQVar16 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*(int *)pQVar16 != -1) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_31 = *(int *)pQVar16 != 0;
      UNLOCK();
      pQVar16 = (QMapNodeBase *)*plVar15;
    }
    pQVar18 = pQVar16;
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 == 0) {
        pQVar18 = (QMapNodeBase *)QMapDataBase::createData();
        if (*(long *)(pQVar16 + 0x10) != 0) {
          puVar17 = (ulong *)FUN_1000340b0(*(long *)(pQVar16 + 0x10),pQVar18);
          *(ulong **)(pQVar18 + 0x10) = puVar17;
          *puVar17 = *puVar17 & 3 | (ulong)(pQVar18 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + 1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
      }
    }
    if (*(long *)(pQVar18 + 0x10) != 0) {
      pQVar19 = *(QMapNodeBase **)(pQVar18 + 0x20);
      if (pQVar19 != pQVar18 + 8) {
        bVar3 = true;
        do {
          lVar9 = 0;
          if ((*(long *)(pQVar19 + 0x20) != 0) &&
             (lVar9 = 0, *(int *)(*(long *)(pQVar19 + 0x20) + 4) != 0)) {
            lVar9 = *(long *)(pQVar19 + 0x28);
          }
          bVar24 = false;
          if ((((bVar3) && (lVar9 != 0)) && (iVar6 = FUN_100325aa0(lVar9), lVar10 != lVar9)) &&
             ((iVar6 == 2 && (pQVar14 = (QPoint *)FUN_100323e30(lVar9,0), pQVar14 != (QPoint *)0x0))
             )) {
            QWidget::mapToGlobal(pQVar14);
            QDesktopWidget::screenNumber(pQVar11);
            FUN_1001298a0(&local_70);
            bVar24 = *(uint *)(local_70 + 0xc) == *(uint *)(local_70 + 8);
          }
          pQVar19 = (QMapNodeBase *)QMapNodeBase::nextNode();
        } while ((!bVar24) && (bVar3 = (bool)(bVar24 ^ 1), pQVar19 != pQVar18 + 8));
      }
    }
    if (*(int *)pQVar18 != -1) {
      if (*(int *)pQVar18 != 0) {
        LOCK();
        *(int *)pQVar18 = *(int *)pQVar18 + -1;
        local_31 = *(int *)pQVar18 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355cb6;
      }
      if (*(long *)(pQVar18 + 0x10) != 0) {
        FUN_100034170();
        QMapDataBase::freeTree(pQVar18,(int)*(undefined8 *)(pQVar18 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar18);
    }
LAB_100355cb6:
    pDVar4 = local_70;
    uVar1 = *(uint *)(local_70 + 0xc);
    uVar2 = *(uint *)(local_70 + 8);
    lVar9 = (long)(int)uVar2;
    iVar6 = -1;
    if ((int)uVar2 < (int)uVar1) {
      if (uVar2 != uVar1) {
        pDVar21 = local_70 + lVar9 * 8 + 0x10;
        lVar10 = (long)(int)uVar1 * 8 + lVar9 * -8;
        do {
          iVar6 = iVar7;
          if (*(int *)pDVar21 == iVar7) goto LAB_100355dd3;
          pDVar21 = pDVar21 + 8;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      if (1 < *(uint *)local_70) {
        pDVar21 = (Data *)QListData::detach((int)&local_70);
        lVar10 = (long)(int)*(uint *)(local_70 + 8);
        if ((pDVar4 + lVar9 * 8 + 0x10 != local_70 + lVar10 * 8 + 0x10) &&
           (lVar22 = (int)*(uint *)(local_70 + 0xc) - lVar10,
           lVar22 != 0 && lVar10 <= (int)*(uint *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar10 * 8 + 0x10,pDVar4 + lVar9 * 8 + 0x10,lVar22 * 8);
        }
        if (*(int *)pDVar21 != -1) {
          if (*(int *)pDVar21 != 0) {
            LOCK();
            *(int *)pDVar21 = *(int *)pDVar21 + -1;
            local_31 = *(int *)pDVar21 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100355d63;
          }
          QListData::dispose(pDVar21);
        }
      }
LAB_100355d63:
      iVar6 = *(int *)(local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10);
    }
LAB_100355dd3:
    iVar7 = iVar6;
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100355e17;
      }
      if (*(long *)(pQVar16 + 0x10) != 0) {
        FUN_100034170();
        QMapDataBase::freeTree(pQVar16,(int)*(undefined8 *)(pQVar16 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar16);
    }
  }
  else if ((iVar7 < 0) || (iVar6 <= iVar7)) {
    pQVar14 = (QPoint *)FUN_100323e30(lVar10,0);
    iVar7 = -1;
    if (pQVar14 != (QPoint *)0x0) {
      iVar20 = FUN_100325aa0(lVar10);
      if ((iVar20 == 2) && (iVar20 = FUN_1003798d0(pQVar14), iVar20 < iVar6)) {
        iVar7 = FUN_1003798d0(pQVar14);
      }
      else {
        QWidget::mapToGlobal(pQVar14);
        iVar7 = QDesktopWidget::screenNumber(pQVar11);
      }
    }
  }
LAB_100355e17:
  if (*(int *)(local_f8 + 0x10) != -1) {
    if (*(int *)(local_f8 + 0x10) != 0) {
      LOCK();
      pNVar13 = local_f8 + 0x10;
      *(int *)pNVar13 = *(int *)pNVar13 + -1;
      local_31 = *(int *)pNVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355e4c;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_f8);
  }
LAB_100355e4c:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100355e82;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100355e82:
  QSettings::~QSettings((QSettings *)&local_88);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return iVar7;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return iVar7;
}

