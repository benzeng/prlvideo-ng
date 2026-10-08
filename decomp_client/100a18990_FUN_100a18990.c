
undefined8 FUN_100a18990(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  QArrayData *pQVar8;
  Data_conflict local_200;
  undefined4 local_1f8;
  QArrayData *local_1f0;
  int *local_1e8 [4];
  QVariant local_1c8 [2];
  QVariant local_1b0;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  Data_conflict local_180;
  undefined4 local_178;
  QArrayData *local_170;
  int *local_168 [4];
  QVariant local_148 [2];
  QVariant local_130;
  QArrayData *local_120;
  QVariant local_118;
  QArrayData *local_108;
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  int *local_e8 [4];
  QVariant local_c8 [2];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
    FUN_100a0c3a0(param_1 + 0x20);
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0) {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar2 = PTR_s__location__102280a70;
  local_28 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar6 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__location__102280a70);
    iVar6 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  QVariant::QVariant(&local_40,0);
  FUN_10007af00(&local_28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a18a5a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a18a5a:
  puVar3 = PTR_s_service_102280c88;
  puVar2 = PTR_s__command__102280a68;
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 2) {
    iVar6 = -1;
    if (PTR_s_service_102280c88 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_service_102280c88);
      iVar6 = (int)sVar4;
    }
    local_188 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
    QVariant::QVariant(&local_198,PTR_s_gp_102280c98);
    FUN_10007af00(&local_28,&local_188,&local_198);
    QVariant::~QVariant(&local_198);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_19 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a18d2a;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100a18d2a:
    puVar2 = PTR_s_token_102280ca0;
    iVar6 = -1;
    if (PTR_s_token_102280ca0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_token_102280ca0);
      iVar6 = (int)sVar4;
    }
    local_1a0 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    QVariant::QVariant(&local_1b0,(QString *)(param_1 + 0x50));
    FUN_10007af00(&local_28,&local_1a0,&local_1b0);
    QVariant::~QVariant(&local_1b0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_19 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a18dc1;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_100a18dc1:
    local_1f0 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onRequestAccountTokenCompleted(PRL_RESULT, const QVariant&)",0x3c);
    local_1f8 = 0x80000000;
    local_200.field7 = 0;
    FUN_100a1c600(local_1e8,param_1,&local_1f0,&local_200);
    FUN_100a0c410(4,&local_28,local_1e8,0);
    QVariant::~QVariant(local_1c8);
    if (local_1e8[0] != (int *)0x0) {
      LOCK();
      *local_1e8[0] = *local_1e8[0] + -1;
      local_19 = *local_1e8[0] != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_1e8[0] != (int *)0x0)) {
        operator_delete(local_1e8[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_200);
    uVar5 = 0;
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_19 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a1931b;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
    goto LAB_100a1931b;
  }
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      FUN_100df99c0("","WebPortalCommunication",0,"Unknown authorization type");
      uVar5 = 0x80000001;
      FUN_100df99c0("","WebPortalCommunication",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                    "Tasks/CTaskPaxAuthorize.cpp",0xb7,"requestAccountToken");
      goto LAB_100a1931b;
    }
    iVar6 = -1;
    if (PTR_s__command__102280a68 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__command__102280a68);
      iVar6 = (int)sVar4;
    }
    local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("auth",4);
    QVariant::QVariant(&local_58,&local_60);
    FUN_10007af00(&local_28,&local_48,&local_58);
    QVariant::~QVariant(&local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_19 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a18f49;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a18f49:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a18f79;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a18f79:
    puVar2 = PTR_s_email_102280a80;
    iVar6 = -1;
    if (PTR_s_email_102280a80 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_email_102280a80);
      iVar6 = (int)sVar4;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    QVariant::QVariant(&local_78,(QString *)(param_1 + 0x28));
    FUN_10007af00(&local_28,&local_68,&local_78);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_19 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a18ffb;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100a18ffb:
    puVar2 = PTR_s_password_102280a88;
    iVar6 = -1;
    if (PTR_s_password_102280a88 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_password_102280a88);
      iVar6 = (int)sVar4;
    }
    local_80 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    QString::toUtf8();
    QCryptographicHash::hash(&local_a8,&local_b0,1);
    QByteArray::toHex();
    lVar7 = 0;
    pQVar8 = local_a0 + *(long *)(local_a0 + 0x10);
    if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_a0 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pQVar8[lVar7] == (QArrayData)0x0) break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(local_a0 + 4));
    }
    local_98.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar8,(int)lVar7);
    QVariant::QVariant(&local_90,&local_98);
    FUN_10007af00(&local_28,&local_80,&local_90);
    QVariant::~QVariant(&local_90);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_19 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a19102;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100a19102:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_19 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a19138;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_100a19138:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_19 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a1916e;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100a1916e:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_19 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a191a4;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100a191a4:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_19 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a191d4;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100a191d4:
    local_f0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onRequestAccountTokenCompleted(PRL_RESULT, const QVariant&)",0x3c);
    local_f8 = 0x80000000;
    local_100.field7 = 0;
    FUN_100a1c600(local_e8,param_1,&local_f0,&local_100);
    FUN_100a0c410(2,&local_28,local_e8,0);
    QVariant::~QVariant(local_c8);
    if (local_e8[0] != (int *)0x0) {
      LOCK();
      *local_e8[0] = *local_e8[0] + -1;
      local_19 = *local_e8[0] != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_e8[0] != (int *)0x0)) {
        operator_delete(local_e8[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_100);
    uVar5 = 0;
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_19 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a1931b;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
    goto LAB_100a1931b;
  }
  iVar6 = -1;
  if (PTR_s_service_102280c88 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_service_102280c88);
    iVar6 = (int)sVar4;
  }
  local_108 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  QVariant::QVariant(&local_118,PTR_s_fb_102280c90);
  FUN_10007af00(&local_28,&local_108,&local_118);
  QVariant::~QVariant(&local_118);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_19 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a18b0d;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100a18b0d:
  puVar2 = PTR_s_token_102280ca0;
  iVar6 = -1;
  if (PTR_s_token_102280ca0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_token_102280ca0);
    iVar6 = (int)sVar4;
  }
  local_120 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  QVariant::QVariant(&local_130,(QString *)(param_1 + 0x50));
  FUN_10007af00(&local_28,&local_120,&local_130);
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_19 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a18ba4;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100a18ba4:
  local_170 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onRequestAccountTokenCompleted(PRL_RESULT, const QVariant&)",0x3c);
  local_178 = 0x80000000;
  local_180.field7 = 0;
  FUN_100a1c600(local_168,param_1,&local_170,&local_180);
  FUN_100a0c410(4,&local_28,local_168,0);
  QVariant::~QVariant(local_148);
  if (local_168[0] != (int *)0x0) {
    LOCK();
    *local_168[0] = *local_168[0] + -1;
    local_19 = *local_168[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_168[0] != (int *)0x0)) {
      operator_delete(local_168[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_180);
  uVar5 = 0;
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_19 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1931b;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100a1931b:
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_28);
  }
  return uVar5;
}

