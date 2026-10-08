
void FUN_1006a5380(long param_1,char *param_2,QVariant *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  QObject *pQVar3;
  ulong uVar4;
  _func_void_Node_ptr *p_Var5;
  char cVar6;
  uint uVar7;
  size_t sVar8;
  Data_conflict *pDVar9;
  int iVar10;
  undefined8 *puVar11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  uint uVar14;
  _func_void_Node_ptr *p_Var15;
  long lVar16;
  QArrayData *pQVar17;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  undefined4 local_18c;
  QArrayData *local_188;
  QArrayData *local_180;
  QObject *local_178;
  QObject *pQStack_170;
  Data_conflict local_168;
  uint uStack_160;
  QString local_158;
  _func_void_Node_ptr *local_150;
  int *local_148;
  long lStack_140;
  long local_138;
  undefined8 local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  QVariant local_108;
  QVariant local_f8;
  QVariant local_e8;
  QArrayData **local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  Data_conflict *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  char *local_40;
  bool local_31;
  
  QObject::property((char *)&local_f8);
  QObject::setProperty(param_2,param_3);
  QObject::property((char *)&local_108);
  cVar6 = QVariant::cmp(&local_f8);
  QVariant::~QVariant(&local_108);
  if (cVar6 != '\0') goto LAB_1006a5c10;
  uVar7 = FUN_1006947d0(param_2);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
    uVar14 = *(uint *)((long)puVar2 + 0x24) ^ uVar7;
    for (puVar11 = *(undefined8 **)(puVar2[1] + ((ulong)uVar14 % (ulong)*(uint *)(puVar2 + 4)) * 8);
        puVar11 != puVar2; puVar11 = (undefined8 *)*puVar11) {
      if ((*(uint *)(puVar11 + 1) == uVar14) && (uVar7 == *(uint *)((long)puVar11 + 0xc))) {
        if (puVar11 != puVar2) {
          FUN_1006aa450(&local_150,puVar11 + 2);
          goto LAB_1006a5467;
        }
        break;
      }
    }
  }
  local_150 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_1006a5467:
  iVar10 = -1;
  if (param_3 != (QVariant *)0x0) {
    sVar8 = _strlen((char *)param_3);
    iVar10 = (int)sVar8;
  }
  local_158.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)param_3,iVar10);
  p_Var5 = local_150;
  if ((*(int *)(local_150 + 0x14) == 0) || (uVar7 = *(uint *)(local_150 + 0x20), uVar7 == 0)) {
LAB_1006a5586:
    local_148 = (int *)0x0;
    lStack_140 = 0;
    local_130 = (ulong)local_130._4_4_ << 0x20;
    local_138 = 0;
    local_120 = 0x80000000;
    local_128.field7 = 0;
    local_118 = (code)0x1;
  }
  else {
    uVar14 = qHash(&local_158,*(uint *)(local_150 + 0x24));
    uVar4 = (ulong)uVar14 % (ulong)uVar7;
    p_Var12 = *(_func_void_Node_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
    if (p_Var12 == p_Var5) goto LAB_1006a5586;
    p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
    do {
      p_Var13 = p_Var12;
      if (*(uint *)(p_Var12 + 8) == uVar14) {
        cVar6 = operator==(&local_158,(QString *)(p_Var12 + 0x10));
        p_Var13 = *(_func_void_Node_ptr **)p_Var15;
        if (cVar6 != '\0') break;
      }
      p_Var12 = *(_func_void_Node_ptr **)p_Var13;
      p_Var15 = p_Var13;
      p_Var13 = p_Var5;
    } while (p_Var12 != p_Var5);
    if (p_Var13 == p_Var5) goto LAB_1006a5586;
    local_148 = *(int **)(p_Var13 + 0x18);
    lStack_140 = *(long *)(p_Var13 + 0x20);
    if (local_148 != (int *)0x0) {
      LOCK();
      *local_148 = *local_148 + 1;
      local_31 = *local_148 != 0;
      UNLOCK();
    }
    local_138 = *(long *)(p_Var13 + 0x28);
    local_130 = *(long *)(p_Var13 + 0x30);
    QVariant::QVariant((QVariant *)&local_128,(QVariant *)(p_Var13 + 0x38));
    local_118 = p_Var13[0x48];
  }
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a55fe;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_1006a55fe:
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a562a;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1006a562a:
  cVar6 = FUN_10019cd90(&local_148);
  if (cVar6 != '\0') {
    uStack_160 = 0x80000000;
    local_168.field7 = 0;
    pQStack_170 = (QObject *)FUN_100695a30(param_2);
    local_178 = (QObject *)0x0;
    if (pQStack_170 != (QObject *)0x0) {
      local_178 = (QObject *)QtSharedPointer::ExternalRefCountData::getAndRef(pQStack_170);
    }
    if (DAT_10226c7b8 == 0) {
      DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
    }
    uVar7 = uStack_160 & 0x40000000;
    if (((uVar7 == 0) || (*(int *)(local_168.field7 + 8) == 1)) &&
       ((DAT_10226c7b8 == (uStack_160 & 0x3fffffff) ||
        ((uStack_160 & 0x3fffffff | DAT_10226c7b8) < 8)))) {
      uStack_160 = DAT_10226c7b8 & 0x3fffffff | uVar7;
      if (uVar7 == 0) {
        pDVar9 = &local_168;
      }
      else {
        pDVar9 = *(Data_conflict **)local_168.field15;
      }
      pQVar3 = pDVar9->field15;
      if (pQVar3 != (QObject *)0x0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_31 = *(int *)pQVar3 != 0;
        if ((*(int *)pQVar3 == 0) && (pDVar9->field16 != (void *)0x0)) {
          operator_delete(pDVar9->field16);
        }
      }
      pDVar9->field15 = local_178;
      pDVar9[1].field15 = pQStack_170;
      if (local_178 != (QObject *)0x0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + 1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
      }
    }
    else {
      QVariant::QVariant(&local_e8,DAT_10226c7b8,&local_178,0);
      QVariant::operator=((QVariant *)&local_168,&local_e8);
      QVariant::~QVariant(&local_e8);
    }
    lVar16 = 0;
    if ((local_148 != (int *)0x0) && (lVar16 = 0, local_148[1] != 0)) {
      lVar16 = lStack_140;
    }
    FUN_100a1c6c0(&local_188,&local_148);
    QString::toLatin1();
    pQVar17 = local_180 + *(long *)(local_180 + 0x10);
    local_18c = FUN_1006947d0(param_2);
    iVar10 = -1;
    if (param_3 != (QVariant *)0x0) {
      sVar8 = _strlen((char *)param_3);
      iVar10 = (int)sVar8;
    }
    local_198 = (QArrayData *)QString::fromAscii_helper((char *)param_3,iVar10);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = &local_168;
    local_b0 = "QVariant";
    local_c0 = "QVariant";
    local_d8 = &local_198;
    local_d0 = "QString";
    local_48 = &local_18c;
    local_40 = "Actions::ActionType";
    local_c8 = param_4;
    cVar6 = QMetaObject::invokeMethod(lVar16,pQVar17,1,0,0);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if (local_31) goto LAB_1006a59a2;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_1006a59a2:
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if (local_31) goto LAB_1006a59d8;
      }
      QArrayData::deallocate(local_180,1,8);
    }
LAB_1006a59d8:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if (local_31) goto LAB_1006a5a0e;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_1006a5a0e:
    if (cVar6 == '\0') {
      if (((local_148 == (int *)0x0) || (local_148[1] == 0)) || (lStack_140 == 0)) {
        local_1a8 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        QObject::objectName();
      }
      QString::toLocal8Bit();
      pQVar17 = local_1a0 + *(long *)(local_1a0 + 0x10);
      FUN_100a1c6c0(&local_1b8,&local_148);
      QString::toLatin1();
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                    "(!)Error: Failed to invoke method \'%s\' for object \'%s\'.",pQVar17,
                    local_1b0 + *(long *)(local_1b0 + 0x10));
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a5b00;
        }
        QArrayData::deallocate(local_1b0,1,8);
      }
LAB_1006a5b00:
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a5b36;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_1006a5b36:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a5b6c;
        }
        QArrayData::deallocate(local_1a0,1,8);
      }
LAB_1006a5b6c:
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a5ba2;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
    }
LAB_1006a5ba2:
    if (local_178 != (QObject *)0x0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((!local_31) && (local_178 != (QObject *)0x0)) {
        operator_delete(local_178);
      }
    }
    QVariant::~QVariant((QVariant *)&local_168);
  }
  QVariant::~QVariant((QVariant *)&local_128);
  if (local_148 != (int *)0x0) {
    LOCK();
    *local_148 = *local_148 + -1;
    local_31 = *local_148 != 0;
    UNLOCK();
    if ((!local_31) && (local_148 != (int *)0x0)) {
      operator_delete(local_148);
    }
  }
LAB_1006a5c10:
  QVariant::~QVariant(&local_f8);
  return;
}

