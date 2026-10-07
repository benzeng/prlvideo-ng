
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1000d0770(long param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 (*pauVar13) [16];
  char *pcVar14;
  undefined1 *puVar15;
  void *pvVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined4 *puVar25;
  byte *pbVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint local_a4;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  undefined1 local_58 [16];
  char *local_48;
  int local_38;
  undefined1 local_31;
  
  lVar21 = param_1 + 0x2b8;
  iVar10 = FUN_1000d6ca0(lVar21);
  local_38 = iVar10;
  if (iVar10 < 1) {
    FUN_1008e3970("","vm",0,"Can\'t find option SARE_MEMORY_FILE_NAME_HDR_OPT");
  }
  else if ((*(byte *)(param_1 + 499) & 2) != 0) {
    uVar20 = (ulong)iVar10;
    local_58 = (undefined1  [16])0x0;
    local_48 = (char *)0x0;
    pcVar12 = operator_new(uVar20);
    iVar8 = local_38;
    pcVar1 = pcVar12 + uVar20;
    pcVar14 = pcVar12;
    uVar18 = uVar20;
    if (iVar10 == 0) {
LAB_1000d0850:
      do {
        *pcVar14 = '\0';
        pcVar14 = pcVar14 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    else {
      uVar19 = uVar20 & 0xffffffffffffffe0;
      uVar22 = 0;
      if (uVar19 != 0) {
        pcVar14 = pcVar12 + (uVar20 & 0xffffffffffffffe0);
        uVar18 = uVar20 - (uVar20 & 0xffffffffffffffe0);
        pauVar13 = (undefined1 (*) [16])(pcVar12 + 0x10);
        uVar24 = uVar19;
        do {
          pauVar13[-1] = (undefined1  [16])0x0;
          *pauVar13 = (undefined1  [16])0x0;
          pauVar13 = pauVar13 + 2;
          uVar24 = uVar24 - 0x20;
          uVar22 = uVar19;
        } while (uVar24 != 0);
      }
      if (uVar20 != uVar22) goto LAB_1000d0850;
    }
    local_58._8_8_ = pcVar1;
    local_58._0_8_ = pcVar12;
    local_48 = pcVar1;
    iVar10 = FUN_1000d6c10(lVar21,1,pcVar12,&local_38);
    if ((iVar10 == 1) && (local_38 <= iVar8)) {
      if (pcVar12 != (char *)0x0) {
        _strlen(pcVar12);
      }
      QString::fromUtf8_helper((char *)&local_68,(int)pcVar12);
      QString::normalized(&local_60,&local_68,1,0);
      QString::operator=((QString *)&DAT_1011c36c0,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d0905;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1000d0905:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d097b;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
    else {
      FUN_1008e3970("","vm",0,"Can\'t read option SARE_MEMORY_FILE_NAME_HDR_OPT (0x%x:0x%x).",iVar8)
      ;
    }
LAB_1000d097b:
    if (pcVar12 != (char *)0x0) {
      if (pcVar1 != pcVar12) {
        local_58._8_8_ = pcVar12;
      }
      operator_delete(pcVar12);
    }
  }
  iVar10 = FUN_1000d6ca0(lVar21);
  local_38 = iVar10;
  if (iVar10 < 1) {
    FUN_1008e3970("","vm",0,"Can\'t find option SARE_MEMORY_FILE_PATH_HDR_OPT");
    QFileInfo::absolutePath();
    QString::operator=((QString *)(param_1 + 0x328),&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d0c67;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
    goto LAB_1000d0c67;
  }
  uVar20 = (ulong)iVar10;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1 *)0x0;
  local_88._0_8_ = operator_new(uVar20);
  iVar8 = local_38;
  puVar2 = (undefined1 *)(local_88._0_8_ + uVar20);
  puVar15 = (undefined1 *)local_88._0_8_;
  uVar18 = uVar20;
  if (iVar10 == 0) {
LAB_1000d0a40:
    do {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  else {
    uVar19 = uVar20 & 0xffffffffffffffe0;
    uVar22 = 0;
    if (uVar19 != 0) {
      puVar15 = (undefined1 *)(local_88._0_8_ + (uVar20 & 0xffffffffffffffe0));
      uVar18 = uVar20 - (uVar20 & 0xffffffffffffffe0);
      pauVar13 = (undefined1 (*) [16])(local_88._0_8_ + 0x10);
      uVar24 = uVar19;
      do {
        pauVar13[-1] = (undefined1  [16])0x0;
        *pauVar13 = (undefined1  [16])0x0;
        pauVar13 = pauVar13 + 2;
        uVar24 = uVar24 - 0x20;
        uVar22 = uVar19;
      } while (uVar24 != 0);
    }
    if (uVar20 != uVar22) goto LAB_1000d0a40;
  }
  local_88._8_8_ = puVar2;
  local_78 = puVar2;
  iVar10 = FUN_1000d6c10(lVar21,5,local_88._0_8_,&local_38);
  auVar4 = local_88;
  if ((iVar10 == 5) && (local_38 <= iVar8)) {
    if ((char *)local_88._0_8_ != (char *)0x0) {
      _strlen((char *)local_88._0_8_);
    }
    QString::fromUtf8_helper((char *)&local_a0,auVar4._0_4_);
    QString::normalized(&local_98,&local_a0,1,0);
    QString::operator=((QString *)(param_1 + 0x328),&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d0b09;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1000d0b09:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d0c50;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Can\'t read option SARE_MEMORY_FILE_PATH_HDR_OPT (0x%x:0x%x).",local_38
                  ,iVar8);
    QFileInfo::absolutePath();
    QString::operator=((QString *)(param_1 + 0x328),&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d0c50;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
LAB_1000d0c50:
  uVar7 = local_88._0_8_;
  if ((undefined1 *)local_88._0_8_ != (undefined1 *)0x0) {
    if (puVar2 != (undefined1 *)local_88._0_8_) {
      local_88._8_8_ = local_88._0_8_;
    }
    operator_delete((void *)uVar7);
  }
LAB_1000d0c67:
  uVar11 = *(uint *)(param_1 + 0x338);
  pvVar16 = operator_new__((ulong)uVar11,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x348) = pvVar16;
  if (pvVar16 == (void *)0x0) {
    uVar27 = 0;
    FUN_1008e3970("","vm",0,"warning: can\'t allocate %u bytes for working set bitmap",(ulong)uVar11
                 );
  }
  else {
    local_a4 = uVar11;
    iVar10 = FUN_1000d6c10(lVar21,2,pvVar16,&local_a4);
    auVar6 = _DAT_100b2ddb0;
    auVar5 = _DAT_100b2dda0;
    auVar4 = _PTR___mh_execute_header_100b2dd90;
    if (iVar10 == 2) {
      if (local_a4 != *(uint *)(param_1 + 0x338)) {
        FUN_1008e3970("","vm",0,"WS bitmap loading failed Sz=0x%x.0x%x");
        return 0;
      }
      lVar21 = 0;
      if (local_a4 != 0) {
        pbVar17 = *(byte **)(param_1 + 0x348);
        pbVar26 = pbVar17 + local_a4;
        lVar21 = 0;
        puVar25 = DAT_1011b6b00;
        do {
          bVar3 = *pbVar17;
          lVar23 = 0;
          if (puVar25 == (undefined4 *)0x0) {
            do {
              iVar10 = (int)lVar23;
              auVar30._0_4_ = iVar10 + auVar4._0_4_;
              auVar30._4_4_ = iVar10 + auVar4._4_4_;
              auVar30._8_4_ = iVar10 + auVar4._8_4_;
              auVar30._12_4_ = iVar10 + auVar4._12_4_;
              auVar31 = auVar30 & auVar5;
              auVar35._0_4_ = auVar30._0_4_ >> 1;
              auVar35._4_4_ = auVar30._4_4_ >> 1;
              auVar35._8_4_ = auVar30._8_4_ >> 1;
              auVar35._12_4_ = auVar30._12_4_ >> 1;
              auVar35 = auVar35 & auVar5;
              auVar32._0_4_ = auVar30._0_4_ >> 2;
              auVar32._4_4_ = auVar30._4_4_ >> 2;
              auVar32._8_4_ = auVar30._8_4_ >> 2;
              auVar32._12_4_ = auVar30._12_4_ >> 2;
              auVar32 = auVar32 & auVar5;
              auVar36._0_4_ = auVar30._0_4_ >> 3;
              auVar36._4_4_ = auVar30._4_4_ >> 3;
              auVar36._8_4_ = auVar30._8_4_ >> 3;
              auVar36._12_4_ = auVar30._12_4_ >> 3;
              auVar36 = auVar36 & auVar5;
              auVar33._0_4_ = auVar30._0_4_ >> 4;
              auVar33._4_4_ = auVar30._4_4_ >> 4;
              auVar33._8_4_ = auVar30._8_4_ >> 4;
              auVar33._12_4_ = auVar30._12_4_ >> 4;
              auVar33 = auVar33 & auVar5;
              auVar37._0_4_ = auVar30._0_4_ >> 5;
              auVar37._4_4_ = auVar30._4_4_ >> 5;
              auVar37._8_4_ = auVar30._8_4_ >> 5;
              auVar37._12_4_ = auVar30._12_4_ >> 5;
              auVar37 = auVar37 & auVar5;
              auVar34._0_4_ = auVar30._0_4_ >> 6;
              auVar34._4_4_ = auVar30._4_4_ >> 6;
              auVar34._8_4_ = auVar30._8_4_ >> 6;
              auVar34._12_4_ = auVar30._12_4_ >> 6;
              auVar34 = auVar34 & auVar5;
              auVar28._0_4_ = auVar30._0_4_ >> 7;
              auVar28._4_4_ = auVar30._4_4_ >> 7;
              auVar28._8_4_ = auVar30._8_4_ >> 7;
              auVar28._12_4_ = auVar30._12_4_ >> 7;
              auVar28 = auVar28 & auVar5;
              auVar29._0_4_ =
                   auVar28._0_4_ +
                   auVar34._0_4_ +
                   auVar37._0_4_ +
                   auVar33._0_4_ + auVar36._0_4_ + auVar32._0_4_ + auVar35._0_4_ + auVar31._0_4_;
              auVar29._4_4_ =
                   auVar28._4_4_ +
                   auVar34._4_4_ +
                   auVar37._4_4_ +
                   auVar33._4_4_ + auVar36._4_4_ + auVar32._4_4_ + auVar35._4_4_ + auVar31._4_4_;
              auVar29._8_4_ =
                   auVar28._8_4_ +
                   auVar34._8_4_ +
                   auVar37._8_4_ +
                   auVar33._8_4_ + auVar36._8_4_ + auVar32._8_4_ + auVar35._8_4_ + auVar31._8_4_;
              auVar29._12_4_ =
                   auVar28._12_4_ +
                   auVar34._12_4_ +
                   auVar37._12_4_ +
                   auVar33._12_4_ +
                   auVar36._12_4_ + auVar32._12_4_ + auVar35._12_4_ + auVar31._12_4_;
              auVar30 = pshufb(auVar29,auVar6);
              *(int *)((long)&DAT_1011b6a00 + lVar23) = auVar30._0_4_;
              lVar23 = lVar23 + 4;
            } while (lVar23 != 0x100);
            DAT_1011b6b00 = &DAT_1011b6a00;
            puVar25 = &DAT_1011b6a00;
          }
          lVar21 = lVar21 + (ulong)*(byte *)((long)puVar25 + (ulong)bVar3);
          pbVar17 = pbVar17 + 1;
        } while (pbVar17 < pbVar26);
      }
      FUN_1008e3970("","vm",0,"Loaded active WS bitmap with %llu pages",lVar21);
    }
    else {
      FUN_1008e3970("","vm",0,"SARE_WS_BITMAP_HDR_OPT not found");
      ___bzero(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x338));
    }
    uVar27 = 1;
    if (*(char *)(param_1 + 0x2e8) != '\0') {
      if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x110) == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmCfg","SerializationApp.cpp"
                      ,0x796,"ReadHdrOptions");
      }
      lVar21 = CVmConfiguration::getVmSettings();
      if (lVar21 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmSettings",
                      "SerializationApp.cpp",0x798,"ReadHdrOptions");
      }
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setFEATURES_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_FEATURES_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_80000001_ECX_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_80000001_EDX_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_80000007_EDX_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_80000008_EAX(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_00000007_EBX_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_0000000D_EAX_MASK(uVar11);
      uVar11 = CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setEXT_00000006_EAX_MASK(uVar11);
      bVar9 = (bool)CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::setCpuFeaturesMaskValid(bVar9);
      FUN_1000b19f0(*(undefined8 *)(param_1 + 0x2b0));
    }
  }
  return uVar27;
}

