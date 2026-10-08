
undefined8 FUN_1002dacd0(undefined8 param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  char *pcVar9;
  Data_conflict local_168;
  undefined4 local_160;
  QArrayData *local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  QVariant local_130 [2];
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QLocale local_c8 [8];
  QString local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  _func_void_Node_ptr *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar6);
  if (lVar7 != 0) {
    FUN_10015a330(lVar7);
    CDispCommonPreferences::getProxyPreferences();
    CDispProxyPreferences::getWebPortalDomain();
    FUN_100a0c3a0(&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002dad4a;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
LAB_1002dad4a:
  puVar3 = PTR_s__location__102280a70;
  local_30 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar5 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s__location__102280a70);
    iVar5 = (int)sVar8;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  QVariant::QVariant(&local_48,4);
  FUN_10007af00(&local_30,&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dadd8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002dadd8:
  puVar3 = PTR_s__command__102280a68;
  iVar5 = -1;
  if (PTR_s__command__102280a68 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s__command__102280a68);
    iVar5 = (int)sVar8;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("product_permissions",0x13);
  QVariant::QVariant(&local_60,&local_68);
  FUN_10007af00(&local_30,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dae6f;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002dae6f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dae9f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002dae9f:
  local_70 = (QArrayData *)QString::fromAscii_helper("product_type",0xc);
  cVar4 = FUN_100d80630(1);
  pcVar9 = "pdfm";
  if (cVar4 != '\0') {
    pcVar9 = "pdl";
  }
  QVariant::QVariant(&local_80,pcVar9);
  FUN_10007af00(&local_30,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002daf25;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002daf25:
  local_88 = (QArrayData *)QString::fromAscii_helper("os_version",10);
  MacUtils::osxVersion();
  QVariant::QVariant(&local_98,&local_a0);
  FUN_10007af00(&local_30,&local_88,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_19 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dafaf;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1002dafaf:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002dafdf;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002dafdf:
  local_a8 = (QArrayData *)QString::fromAscii_helper("product_locale",0xe);
  QLocale::QLocale(local_c8);
  QLocale::name();
  QVariant::QVariant(&local_b8,&local_c0);
  FUN_10007af00(&local_30,&local_a8,&local_b8);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_19 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db082;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002db082:
  QLocale::~QLocale(local_c8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db0c4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002db0c4:
  local_d0 = (QArrayData *)QString::fromAscii_helper("license_flags",0xd);
  iVar5 = FUN_1002dab50();
  QVariant::QVariant(&local_e0,iVar5);
  FUN_10007af00(&local_30,&local_d0,&local_e0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db148;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002db148:
  local_e8 = (QArrayData *)QString::fromAscii_helper("license_edition",0xf);
  iVar5 = FUN_1002dabc0();
  QVariant::QVariant(&local_f8,iVar5);
  FUN_10007af00(&local_30,&local_e8,&local_f8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_19 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db1cc;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1002db1cc:
  local_100 = (QArrayData *)QString::fromAscii_helper("product_version",0xf);
  local_118.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("12.2.1-41615",0xc);
  QVariant::QVariant(&local_110,&local_118);
  FUN_10007af00(&local_30,&local_100,&local_110);
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_19 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db268;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1002db268:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db29e;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1002db29e:
  local_158 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onRequestProductsPermissionsFinished( PRL_RESULT, const QVariant& )",0x44
                        );
  local_160 = 0x80000000;
  local_168.field7 = 0;
  FUN_100a1c600(&local_150,param_1,&local_158,&local_168);
  QVariant::~QVariant((QVariant *)&local_168);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_19 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002db32a;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1002db32a:
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_100a0c410(3,&local_30,&local_150,0);
  QVariant::~QVariant(local_130);
  piVar2 = (int *)CONCAT71(uStack_14f,local_150);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_19 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_19) && ((void *)CONCAT71(uStack_14f,local_150) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_14f,local_150));
    }
  }
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return 0;
      }
      local_150 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return 0;
}

