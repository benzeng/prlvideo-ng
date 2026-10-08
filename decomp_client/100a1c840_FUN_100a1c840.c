
char FUN_100a1c840(long *param_1,QVariant *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  QVariant *pQVar8;
  size_t sVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  QMapNodeBase *pQVar13;
  long lVar14;
  char *pcVar15;
  undefined8 *puVar16;
  QObject *pQVar17;
  _func_void_Node_ptr *p_Var18;
  QArrayData *pQVar19;
  QHash *pQVar20;
  QMapNodeBase *pQVar21;
  bool bVar22;
  undefined8 in_stack_fffffffffffffd18;
  undefined4 uVar23;
  uint local_224;
  QVariant local_220;
  QVariant local_210;
  QVariant local_200;
  QVariant local_1f0;
  QVariant local_1e0;
  QVariant local_1d0;
  Data_conflict local_1c0;
  undefined4 local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  int local_18c;
  QString local_188;
  long local_180;
  int local_174;
  long local_170;
  QString local_168;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QMapNodeBase *local_110;
  long local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined1 local_d9;
  QVariant *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar23 = (undefined4)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar12;
  cVar3 = FUN_10019cd90();
  if (cVar3 == '\0') {
    if (DAT_10230ffd0 < 1) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\0';
      FUN_100df99c0("[SLOT_INFO]","SlotInvoker",1,
                    "Warning: can\'t invoke method since the slot data is invalid.");
    }
    goto LAB_100a1dba1;
  }
  local_e8 = PTR_shared_null_1021e15e8;
  QVariant::type();
  bVar22 = (*(uint *)(param_1 + 5) & 0x3fffffff) != 0;
  if (bVar22) {
    FUN_10012ae80(&local_e8,param_1 + 4);
  }
  local_224 = (uint)bVar22;
  QMetaMethod::parameterNames();
  iVar5 = *(int *)(local_f0 + 8);
  iVar4 = *(int *)(local_f0 + 0xc);
  FUN_1000ee530(&local_f0);
  if (local_224 != iVar4 - iVar5) {
    FUN_100226f20(&local_100,param_1);
    QString::toLatin1();
    pQVar19 = local_f8;
    lVar12 = *(long *)(local_f8 + 0x10);
    QMetaMethod::parameterNames();
    FUN_100df99c0("[SLOT_INFO]","SlotInvoker",0,
                  "(!)Error: parameter count mismatch for slot %s. Passed count: %d Real count: %d",
                  pQVar19 + lVar12,local_224,
                  CONCAT44(uVar23,*(int *)(local_108 + 0xc) - *(int *)(local_108 + 8)));
    FUN_1000ee530(&local_108);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_d9 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100a1ce56;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_100a1ce56:
    if (*(int *)local_100 == -1) {
      cVar3 = '\0';
    }
    else {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_d9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_d9) {
          cVar3 = '\0';
          goto LAB_100a1db8b;
        }
      }
      QArrayData::deallocate(local_100,2,8);
      cVar3 = '\0';
    }
    goto LAB_100a1db8b;
  }
  local_110 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_118 = (QArrayData *)QString::fromAscii_helper("",0);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_118);
  *puVar7 = 0;
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_d9 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1c977;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100a1c977:
  local_120 = (QArrayData *)QString::fromAscii_helper("bool",4);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_120);
  *puVar7 = 1;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_d9 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1c9e4;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100a1c9e4:
  local_128 = (QArrayData *)QString::fromAscii_helper("int",3);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_128);
  *puVar7 = 2;
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_d9 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1ca51;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100a1ca51:
  local_130 = (QArrayData *)QString::fromAscii_helper("QString",7);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_130);
  *puVar7 = 10;
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_d9 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1cabe;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100a1cabe:
  local_138 = (QArrayData *)QString::fromAscii_helper("QVariantList",0xc);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_138);
  *puVar7 = 9;
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_d9 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1cb2b;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100a1cb2b:
  local_140 = (QArrayData *)QString::fromAscii_helper("QVariantMap",0xb);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_140);
  *puVar7 = 8;
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_d9 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1cb98;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100a1cb98:
  local_148 = (QArrayData *)QString::fromAscii_helper("QVariantHash",0xc);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_148);
  *puVar7 = 0x1c;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_d9 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1cc05;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100a1cc05:
  local_150 = (QArrayData *)QString::fromAscii_helper("QVariant",8);
  puVar7 = (undefined4 *)FUN_100a1e3f0(&local_110,&local_150);
  *puVar7 = 0x400;
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_d9 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1cc72;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100a1cc72:
  local_d8 = (QVariant *)0x0;
  pcStack_d0 = (char *)0x0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  if (local_224 != 0) {
    if (*(int *)(local_e8 + 8) < *(int *)(local_e8 + 0xc)) {
      QVariant::QVariant((QVariant *)&local_160,
                         *(QVariant **)(local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10));
    }
    else {
      local_158 = 0x80000000;
      local_160.field7 = 0;
    }
    QMetaMethod::parameterTypes();
    lVar12 = *(long *)(local_170 + 0x10 + (long)*(int *)(local_170 + 8) * 8);
    lVar14 = 0;
    pcVar15 = (char *)(*(long *)(lVar12 + 0x10) + lVar12);
    if ((pcVar15 != (char *)0x0) && (*(uint *)(lVar12 + 4) != 0)) {
      lVar14 = 0;
      do {
        if (pcVar15[lVar14] == '\0') break;
        lVar14 = lVar14 + 1;
      } while ((uint)lVar14 < *(uint *)(lVar12 + 4));
    }
    local_168.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar15,(int)lVar14);
    pQVar21 = local_110;
    local_174 = 0;
    if (*(long *)(local_110 + 0x10) == 0) {
LAB_100a1cf85:
      lVar11 = 0;
    }
    else {
      lVar12 = *(long *)(local_110 + 0x10);
      lVar14 = 0;
      do {
        while (lVar11 = lVar12, cVar3 = operator<((QString *)(lVar11 + 0x18),&local_168),
              cVar3 == '\0') {
          lVar12 = *(long *)(lVar11 + 8);
          lVar14 = lVar11;
          if (*(long *)(lVar11 + 8) == 0) goto LAB_100a1cf71;
        }
        lVar12 = *(long *)(lVar11 + 0x10);
      } while (*(long *)(lVar11 + 0x10) != 0);
      lVar11 = lVar14;
      if (lVar14 == 0) goto LAB_100a1cf85;
LAB_100a1cf71:
      cVar3 = operator<(&local_168,(QString *)(lVar11 + 0x18));
      if (cVar3 != '\0') goto LAB_100a1cf85;
    }
    piVar10 = &local_174;
    if (lVar11 != 0) {
      piVar10 = (int *)(lVar11 + 0x20);
    }
    iVar5 = *piVar10;
    iVar4 = QVariant::type();
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_d9 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100a1cfe6;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_100a1cfe6:
    FUN_1000ee530(&local_170);
    if (iVar5 == iVar4) {
      iVar5 = QVariant::type();
      bVar2 = false;
      bVar22 = false;
      if (iVar5 < 0x1c) {
        switch(iVar5) {
        case 1:
          pQVar8 = operator_new(1);
          cVar3 = QVariant::toBool();
          (pQVar8->field0_0x0).field0_0x0.field0 = cVar3;
          pcStack_d0 = "bool";
          local_d8 = pQVar8;
          bVar22 = bVar2;
          break;
        case 2:
          pQVar8 = operator_new(4);
          iVar6 = QVariant::toInt((bool *)&local_160.field0);
          (pQVar8->field0_0x0).field0_0x0.field5 = iVar6;
          pcStack_d0 = "int";
          local_d8 = pQVar8;
          bVar22 = false;
          break;
        case 8:
          pQVar8 = operator_new(8);
          QVariant::toMap();
          pcStack_d0 = "QVariantMap";
          local_d8 = pQVar8;
          bVar22 = bVar2;
          break;
        case 9:
          pQVar8 = operator_new(8);
          QVariant::toList();
          pcStack_d0 = "QVariantList";
          local_d8 = pQVar8;
          bVar22 = bVar2;
          break;
        case 10:
          pQVar8 = operator_new(8);
          QVariant::toString();
          pcStack_d0 = "QString";
          local_d8 = pQVar8;
          bVar22 = bVar2;
        }
      }
      else if (iVar5 == 0x1c) {
        pQVar8 = operator_new(8);
        QVariant::toHash();
        pcStack_d0 = "QVariantHash";
        local_d8 = pQVar8;
      }
      else {
        bVar22 = false;
        if (iVar5 == 0x400) {
          pQVar8 = operator_new(0x10);
          QVariant::QVariant(pQVar8,(QVariant *)&local_160);
          pcStack_d0 = "QVariant";
          local_d8 = pQVar8;
          bVar22 = bVar2;
        }
      }
    }
    else {
      QMetaMethod::parameterNames();
      lVar12 = *(long *)(local_180 + 0x10 + (long)*(int *)(local_180 + 8) * 8);
      FUN_100df99c0("[SLOT_INFO]","SlotInvoker",0,
                    "(!)Error: value for parameter %d %s was not of the correct type.",0,
                    lVar12 + *(long *)(lVar12 + 0x10));
      FUN_1000ee530(&local_180);
      bVar22 = true;
    }
    QVariant::~QVariant((QVariant *)&local_160);
    if (!bVar22) goto LAB_100a1d248;
    cVar3 = '\0';
    goto switchD_100a1d90d_caseD_3;
  }
LAB_100a1d248:
  pcVar15 = (char *)QMetaMethod::typeName();
  iVar5 = -1;
  if (pcVar15 != (char *)0x0) {
    sVar9 = _strlen(pcVar15);
    iVar5 = (int)sVar9;
  }
  local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar15,iVar5)
  ;
  pQVar21 = local_110;
  local_18c = 0;
  if (*(long *)(local_110 + 0x10) == 0) {
LAB_100a1d2f5:
    lVar11 = 0;
  }
  else {
    lVar12 = *(long *)(local_110 + 0x10);
    lVar14 = 0;
    do {
      while (lVar11 = lVar12, cVar3 = operator<((QString *)(lVar11 + 0x18),&local_188),
            cVar3 == '\0') {
        lVar12 = *(long *)(lVar11 + 8);
        lVar14 = lVar11;
        if (*(long *)(lVar11 + 8) == 0) goto LAB_100a1d2e1;
      }
      lVar12 = *(long *)(lVar11 + 0x10);
    } while (*(long *)(lVar11 + 0x10) != 0);
    lVar11 = lVar14;
    if (lVar14 == 0) goto LAB_100a1d2f5;
LAB_100a1d2e1:
    cVar3 = operator<(&local_188,(QString *)(lVar11 + 0x18));
    if (cVar3 != '\0') goto LAB_100a1d2f5;
  }
  piVar10 = &local_18c;
  if (lVar11 != 0) {
    piVar10 = (int *)(lVar11 + 0x20);
  }
  iVar5 = *piVar10;
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_d9 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1d347;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100a1d347:
  pcVar15 = (char *)0x0;
  if (iVar5 < 0x1c) {
    pQVar20 = (QHash *)0x0;
    switch(iVar5) {
    case 1:
      pQVar20 = operator_new(1);
      pcVar15 = "bool";
      break;
    case 2:
      pQVar20 = operator_new(4);
      pcVar15 = "int";
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      break;
    case 8:
      pQVar20 = operator_new(8);
      *(undefined **)pQVar20 = PTR_shared_null_1021e12f0;
      pcVar15 = "QVariantMap";
      break;
    case 9:
      pQVar20 = operator_new(8);
      *(undefined **)pQVar20 = PTR_shared_null_1021e15e8;
      pcVar15 = "QVariantList";
      break;
    case 10:
      pQVar20 = operator_new(8);
      *(undefined **)pQVar20 = PTR_shared_null_1021e1288;
      pcVar15 = "QString";
      break;
    default:
      pQVar20 = (QHash *)0x0;
    }
  }
  else {
    pQVar20 = (QHash *)0x0;
    if (iVar5 == 0x1c) {
      pQVar20 = operator_new(8);
      *(undefined **)pQVar20 = PTR_shared_null_1021e15d0;
      pcVar15 = "QVariantHash";
    }
  }
  puVar16 = (undefined8 *)0x0;
  if ((*param_1 != 0) && (puVar16 = (undefined8 *)0x0, *(int *)(*param_1 + 4) != 0)) {
    puVar16 = (undefined8 *)param_1[1];
  }
  (**(code **)*puVar16)();
  lVar12 = 0;
  if ((*param_1 != 0) && (lVar12 = 0, *(int *)(*param_1 + 4) != 0)) {
    lVar12 = param_1[1];
  }
  FUN_100a1c6c0(&local_1a0,param_1);
  QString::toLatin1();
  cVar3 = QMetaObject::invokeMethod
                    (lVar12,local_198 + *(long *)(local_198 + 0x10),1,pQVar20,pcVar15);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_d9 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1d528;
    }
    QArrayData::deallocate(local_198,1,8);
  }
LAB_100a1d528:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_d9 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1d564;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100a1d564:
  if (cVar3 == '\0') {
    FUN_100226f20(&local_1b0,param_1);
    QString::toLatin1();
    FUN_100df99c0("[SLOT_INFO]","SlotInvoker",0,"(!)Error: could not invoke method %s",
                  local_1a8 + *(long *)(local_1a8 + 0x10));
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_d9 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100a1d5f4;
      }
      QArrayData::deallocate(local_1a8,1,8);
    }
LAB_100a1d5f4:
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_d9 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100a1d630;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
  }
LAB_100a1d630:
  if (local_224 != 0) {
    if (*(int *)(local_e8 + 8) < *(int *)(local_e8 + 0xc)) {
      QVariant::QVariant((QVariant *)&local_1c0,
                         *(QVariant **)(local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10));
    }
    else {
      local_1b8 = 0x80000000;
      local_1c0.field7 = 0;
    }
    iVar4 = QVariant::type();
    QVariant::~QVariant((QVariant *)&local_1c0);
    pQVar8 = local_d8;
    if (iVar4 < 0x1c) {
      switch(iVar4) {
      case 1:
      case 2:
        if (local_d8 != (QVariant *)0x0) {
LAB_100a1d8d3:
          operator_delete(pQVar8);
        }
        break;
      case 8:
        if (local_d8 != (QVariant *)0x0) {
          pQVar13 = (QMapNodeBase *)(local_d8->field0_0x0).field0_0x0.field15;
          if (*(int *)pQVar13 != -1) {
            if (*(int *)pQVar13 != 0) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              local_d9 = *(int *)pQVar13 != 0;
              UNLOCK();
              if ((bool)local_d9) goto LAB_100a1d8d3;
              pQVar13 = (QMapNodeBase *)(local_d8->field0_0x0).field0_0x0.field15;
            }
            if (*(long *)(pQVar13 + 0x10) != 0) {
              FUN_100037d60();
              QMapDataBase::freeTree(pQVar13,(int)*(undefined8 *)(pQVar13 + 0x10));
            }
            QMapDataBase::freeData((QMapDataBase *)pQVar13);
          }
          goto LAB_100a1d8d3;
        }
        break;
      case 9:
        if (local_d8 != (QVariant *)0x0) {
          FUN_100035ea0(local_d8);
          goto LAB_100a1d8d3;
        }
        break;
      case 10:
        if (local_d8 != (QVariant *)0x0) {
          pQVar19 = (QArrayData *)(local_d8->field0_0x0).field0_0x0.field15;
          if (*(int *)pQVar19 != -1) {
            if (*(int *)pQVar19 != 0) {
              LOCK();
              *(int *)pQVar19 = *(int *)pQVar19 + -1;
              local_d9 = *(int *)pQVar19 != 0;
              UNLOCK();
              if ((bool)local_d9) goto LAB_100a1d8d3;
              pQVar19 = (QArrayData *)(local_d8->field0_0x0).field0_0x0.field15;
            }
            QArrayData::deallocate(pQVar19,2,8);
          }
          goto LAB_100a1d8d3;
        }
      }
    }
    else if (iVar4 == 0x1c) {
      if (local_d8 != (QVariant *)0x0) {
        pQVar17 = (local_d8->field0_0x0).field0_0x0.field15;
        if (*(int *)(pQVar17 + 0x10) != -1) {
          if (*(int *)(pQVar17 + 0x10) != 0) {
            LOCK();
            pQVar17 = pQVar17 + 0x10;
            *(int *)pQVar17 = *(int *)pQVar17 + -1;
            local_d9 = *(int *)pQVar17 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_100a1d8d3;
            pQVar17 = (local_d8->field0_0x0).field0_0x0.field15;
          }
          QHashData::free_helper((_func_void_Node_ptr *)pQVar17);
        }
        goto LAB_100a1d8d3;
      }
    }
    else if ((iVar4 == 0x400) && (local_d8 != (QVariant *)0x0)) {
      QVariant::~QVariant(local_d8);
      goto LAB_100a1d8d3;
    }
  }
  if (param_2 == (QVariant *)0x0) goto switchD_100a1d90d_caseD_3;
  if (0x1b < iVar5) {
    if (iVar5 == 0x1c) {
      QVariant::QVariant(&local_220,pQVar20);
      QVariant::operator=(param_2,&local_220);
      QVariant::~QVariant(&local_220);
      if (pQVar20 != (QHash *)0x0) {
        p_Var18 = *(_func_void_Node_ptr **)pQVar20;
        if (*(int *)(p_Var18 + 0x10) != -1) {
          if (*(int *)(p_Var18 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var18 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_d9 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_100a1db3b;
            p_Var18 = *(_func_void_Node_ptr **)pQVar20;
          }
          QHashData::free_helper(p_Var18);
        }
        goto LAB_100a1db3b;
      }
    }
    goto switchD_100a1d90d_caseD_3;
  }
  switch(iVar5) {
  case 1:
    QVariant::QVariant(&local_1d0,(bool)*pQVar20);
    QVariant::operator=(param_2,&local_1d0);
    QVariant::~QVariant(&local_1d0);
    goto LAB_100a1db3b;
  case 2:
    QVariant::QVariant(&local_1e0,*(int *)pQVar20);
    QVariant::operator=(param_2,&local_1e0);
    QVariant::~QVariant(&local_1e0);
LAB_100a1db3b:
    operator_delete(pQVar20);
    break;
  case 8:
    QVariant::QVariant(&local_210,(QMap *)pQVar20);
    QVariant::operator=(param_2,&local_210);
    QVariant::~QVariant(&local_210);
    if (pQVar20 != (QHash *)0x0) {
      pQVar13 = *(QMapNodeBase **)pQVar20;
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_d9 = *(int *)pQVar13 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_100a1db3b;
          pQVar13 = *(QMapNodeBase **)pQVar20;
        }
        if (*(long *)(pQVar13 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(pQVar13,(int)*(undefined8 *)(pQVar13 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar13);
      }
      goto LAB_100a1db3b;
    }
    break;
  case 9:
    QVariant::QVariant(&local_200,(QList *)pQVar20);
    QVariant::operator=(param_2,&local_200);
    QVariant::~QVariant(&local_200);
    if (pQVar20 != (QHash *)0x0) {
      FUN_100035ea0(pQVar20);
      goto LAB_100a1db3b;
    }
    break;
  case 10:
    QVariant::QVariant(&local_1f0,(QString *)pQVar20);
    QVariant::operator=(param_2,&local_1f0);
    QVariant::~QVariant(&local_1f0);
    if (pQVar20 != (QHash *)0x0) {
      pQVar19 = *(QArrayData **)pQVar20;
      if (*(int *)pQVar19 != -1) {
        if (*(int *)pQVar19 != 0) {
          LOCK();
          *(int *)pQVar19 = *(int *)pQVar19 + -1;
          local_d9 = *(int *)pQVar19 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_100a1db3b;
          pQVar19 = *(QArrayData **)pQVar20;
        }
        QArrayData::deallocate(pQVar19,2,8);
      }
      goto LAB_100a1db3b;
    }
  }
switchD_100a1d90d_caseD_3:
  if (*(int *)pQVar21 != -1) {
    if (*(int *)pQVar21 != 0) {
      LOCK();
      *(int *)pQVar21 = *(int *)pQVar21 + -1;
      local_d9 = *(int *)pQVar21 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100a1db8b;
    }
    if (*(long *)(pQVar21 + 0x10) != 0) {
      FUN_100a1e4b0();
      QMapDataBase::freeTree(pQVar21,(int)*(undefined8 *)(pQVar21 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar21);
  }
LAB_100a1db8b:
  FUN_100035ea0(&local_e8);
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100a1dba1:
  if (lVar12 == local_38) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

