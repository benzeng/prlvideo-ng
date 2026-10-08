
void FUN_100715570(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  _func_void_Node_ptr *p_Var11;
  char cVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  QArrayData *pQVar19;
  long lVar20;
  QString *pQVar21;
  size_t sVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  _func_void_Node_ptr_void_ptr *p_Var25;
  _func_void_Node_ptr_void_ptr *p_Var26;
  _func_void_Node_ptr_void_ptr *p_Var27;
  _func_void_Node_ptr *p_Var28;
  long lVar29;
  int *piVar30;
  long lVar31;
  _func_void_Node_ptr_void_ptr *p_Var32;
  Data *pDVar33;
  bool bVar34;
  QKeySequence local_408 [8];
  QKeySequence local_400 [16];
  QKeySequence local_3f0 [8];
  QKeySequence local_3e8 [8];
  QKeySequence local_3e0 [8];
  CKmKeyCombination local_3d8 [168];
  QKeySequence local_330 [8];
  CKmKeyCombination local_328 [168];
  QKeySequence local_280 [8];
  Data *local_278;
  Data *local_270;
  Data *local_268;
  undefined4 local_260;
  QString local_258;
  QArrayData *local_250;
  Data *local_248;
  undefined *local_240;
  undefined *local_238;
  QString local_230;
  QString local_228;
  undefined1 local_220 [8];
  QString local_218;
  long local_210 [24];
  QArrayData *local_150;
  int *local_148;
  int *local_140;
  int *local_138;
  uint local_130;
  QArrayData *local_128;
  undefined *local_120;
  int *local_118;
  QDir local_110 [8];
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  _func_void_Node_ptr *local_f0;
  QArrayData *local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  QArrayData *local_90;
  undefined4 local_88;
  undefined4 local_84;
  QArrayData *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 local_44;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_100d842d0(&local_108);
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
  if (1 < *(int *)local_108 + 1U) {
    LOCK();
    *(int *)local_108 = *(int *)local_108 + 1;
    local_31 = *(int *)local_108 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_f8,0x1e2468c);
  QString::append(&local_100);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100715617;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100715617:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071564d;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10071564d:
  QDir::QDir(local_110,&local_100);
  pQVar19 = (QArrayData *)QString::fromAscii_helper("*.kbd",5);
  pDVar33 = (Data *)PTR_shared_null_1021e15e8;
  local_120 = PTR_shared_null_1021e15e8;
  local_128 = pQVar19;
  FUN_1000341d0(&local_120,&local_128);
  QDir::entryList(&local_118,local_110,&local_120,0xffffffff);
  FUN_100039a80(&local_120);
  if (*(int *)pQVar19 != -1) {
    if (*(int *)pQVar19 != 0) {
      LOCK();
      *(int *)pQVar19 = *(int *)pQVar19 + -1;
      local_31 = *(int *)pQVar19 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007156f8;
    }
    QArrayData::deallocate(pQVar19,2,8);
  }
LAB_1007156f8:
  local_148 = local_118;
  if (*local_118 != -1) {
    if (*local_118 == 0) {
      QListData::detach((int)&local_148);
      iVar1 = local_148[2];
      if (iVar1 != local_148[3]) {
        local_118 = local_118 + (long)local_118[2] * 2 + 4;
        piVar30 = local_148 + (long)iVar1 * 2 + 4;
        lVar20 = (long)local_148[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_118;
          *(int **)piVar30 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar30 = piVar30 + 2;
          local_118 = local_118 + 2;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
      }
    }
    else {
      LOCK();
      *local_118 = *local_118 + 1;
      local_31 = *local_118 != 0;
      UNLOCK();
    }
  }
  iVar6 = DAT_100e27200;
  iVar5 = DAT_100e271fc;
  iVar1 = DAT_100e271f8;
  local_140 = local_148 + (long)local_148[2] * 2 + 4;
  local_138 = local_148 + (long)local_148[3] * 2 + 4;
  local_130 = 1;
  if (local_148[2] != local_148[3]) {
    do {
      local_150 = *(QArrayData **)local_140;
      if (1 < *(int *)local_150 + 1U) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
      }
      if (local_130 != 0) {
        ParallelsKeyboardMouse::ParallelsKeyboardMouse((ParallelsKeyboardMouse *)local_210);
        pcVar3 = *(code **)(local_210[0] + 0x58);
        local_218.field0_0x0 = local_100.field0_0x0;
        if (1 < *(int *)local_100.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_218);
        iVar15 = (*pcVar3)(local_210,&local_218,1);
        if (*(int *)local_218.field0_0x0 != -1) {
          if (*(int *)local_218.field0_0x0 != 0) {
            LOCK();
            *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
            local_31 = *(int *)local_218.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007158ce;
          }
          QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
        }
LAB_1007158ce:
        if (iVar15 == 0) {
          local_238 = PTR_shared_null_1021e1288;
          local_240 = PTR_shared_null_1021e1288;
          local_248 = pDVar33;
          FUN_1005819a0(&local_230,&local_238,&local_240,&local_248);
          if (*(int *)pDVar33 != -1) {
            if (*(int *)pDVar33 != 0) {
              LOCK();
              *(int *)pDVar33 = *(int *)pDVar33 + -1;
              local_31 = *(int *)pDVar33 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100715954;
            }
            FUN_1005596c0(&local_248,pDVar33 + (long)*(int *)(pDVar33 + 8) * 8 + 0x10,
                          pDVar33 + (long)*(int *)(pDVar33 + 0xc) * 8 + 0x10);
            QListData::dispose(pDVar33);
          }
LAB_100715954:
          puVar7 = PTR_shared_null_1021e1288;
          if (*(int *)PTR_shared_null_1021e1288 != -1) {
            if (*(int *)PTR_shared_null_1021e1288 == 0) {
LAB_10071597b:
              QArrayData::deallocate((QArrayData *)puVar7,2,8);
            }
            else {
              LOCK();
              *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
              local_31 = *(int *)puVar7 != 0;
              UNLOCK();
              if (!(bool)local_31) goto LAB_10071597b;
            }
            puVar8 = PTR_shared_null_1021e1288;
            if (*(int *)puVar7 != -1) {
              if (*(int *)puVar7 != 0) {
                LOCK();
                *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
                local_31 = *(int *)puVar8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007159d0;
              }
              QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
            }
          }
LAB_1007159d0:
          local_250 = (QArrayData *)QString::fromAscii_helper(".kbd",4);
          pQVar21 = (QString *)QString::remove(&local_150,&local_250,1);
          QString::operator=(&local_230,pQVar21);
          if (*(int *)local_250 != -1) {
            if (*(int *)local_250 != 0) {
              LOCK();
              *(int *)local_250 = *(int *)local_250 + -1;
              local_31 = *(int *)local_250 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100715a45;
            }
            QArrayData::deallocate(local_250,2,8);
          }
LAB_100715a45:
          iVar15 = ParallelsKeyboardMouse::getOsType();
          puVar10 = PTR_s_Generic_102274b58;
          puVar9 = PTR_s_Mac_OS_X_102274b50;
          puVar8 = PTR_s_Linux_102274b48;
          puVar7 = PTR_s_Windows_102274b40;
          if (iVar15 == 7) {
            iVar15 = -1;
            if (PTR_s_Mac_OS_X_102274b50 != (undefined *)0x0) {
              sVar22 = _strlen(PTR_s_Mac_OS_X_102274b50);
              iVar15 = (int)sVar22;
            }
            local_258.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar9,iVar15);
          }
          else if (iVar15 == 9) {
            iVar15 = -1;
            if (PTR_s_Linux_102274b48 != (undefined *)0x0) {
              sVar22 = _strlen(PTR_s_Linux_102274b48);
              iVar15 = (int)sVar22;
            }
            local_258.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar8,iVar15);
          }
          else if (iVar15 == 8) {
            iVar15 = -1;
            if (PTR_s_Windows_102274b40 != (undefined *)0x0) {
              sVar22 = _strlen(PTR_s_Windows_102274b40);
              iVar15 = (int)sVar22;
            }
            local_258.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar7,iVar15);
          }
          else {
            iVar15 = -1;
            if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
              sVar22 = _strlen(PTR_s_Generic_102274b58);
              iVar15 = (int)sVar22;
            }
            local_258.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar10,iVar15);
          }
          QString::operator=(&local_228,&local_258);
          if (*(int *)local_258.field0_0x0 != -1) {
            if (*(int *)local_258.field0_0x0 != 0) {
              LOCK();
              *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
              local_31 = *(int *)local_258.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100715b60;
            }
            QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
          }
LAB_100715b60:
          lVar20 = ParallelsKeyboardMouse::getKeyMappings();
          local_278 = *(Data **)(lVar20 + 0x98);
          if (*(int *)local_278 != -1) {
            if (*(int *)local_278 == 0) {
              QListData::detach((int)&local_278);
              lVar29 = (long)*(int *)(local_278 + 8);
              lVar20 = *(long *)(lVar20 + 0x98);
              if (((Data *)(lVar20 + (long)*(int *)(lVar20 + 8) * 8) != local_278 + lVar29 * 8) &&
                 (lVar31 = *(int *)(local_278 + 0xc) - lVar29,
                 lVar31 != 0 && lVar29 <= *(int *)(local_278 + 0xc))) {
                _memcpy(local_278 + lVar29 * 8 + 0x10,
                        (void *)(lVar20 + 0x10 + (long)*(int *)(lVar20 + 8) * 8),lVar31 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_278 = *(int *)local_278 + 1;
              local_31 = *(int *)local_278 != 0;
              UNLOCK();
            }
          }
          local_270 = local_278 + (long)*(int *)(local_278 + 8) * 8 + 0x10;
          local_268 = local_278 + (long)*(int *)(local_278 + 0xc) * 8 + 0x10;
          if (*(int *)(local_278 + 8) != *(int *)(local_278 + 0xc)) {
LAB_100715c20:
            local_260 = 1;
            lVar20 = *(long *)local_270;
            lVar29 = *(long *)(lVar20 + 0x98);
            if (*(int *)(lVar29 + 0xc) - *(int *)(lVar29 + 8) == 2) {
              CKmKeyCombination::CKmKeyCombination
                        (local_328,
                         *(CKmKeyCombination **)(lVar29 + 0x10 + (long)*(int *)(lVar29 + 8) * 8));
              FUN_100716f80(local_280,local_328,0);
              CKmKeyCombination::~CKmKeyCombination(local_328);
              lVar20 = *(long *)(lVar20 + 0x98);
              CKmKeyCombination::CKmKeyCombination
                        (local_3d8,
                         *(CKmKeyCombination **)(lVar20 + 0x18 + (long)*(int *)(lVar20 + 8) * 8));
              FUN_100716f80(local_330,local_3d8,1);
              CKmKeyCombination::~CKmKeyCombination(local_3d8);
              QKeySequence::QKeySequence(local_3e0,iVar5,0,0,0);
              cVar12 = QKeySequence::operator==(local_280,local_3e0);
              cVar13 = '\x01';
              if (cVar12 == '\0') {
                QKeySequence::QKeySequence(local_3e8,iVar1,0,0,0);
                cVar12 = QKeySequence::operator==(local_280,local_3e8);
                cVar13 = '\x01';
                if (cVar12 == '\0') {
                  QKeySequence::QKeySequence(local_3f0,iVar6,0,0,0);
                  cVar13 = QKeySequence::operator==(local_330,local_3f0);
                  QKeySequence::~QKeySequence(local_3f0);
                }
                QKeySequence::~QKeySequence(local_3e8);
              }
              QKeySequence::~QKeySequence(local_3e0);
              if (cVar13 == '\0') {
                if ((DAT_1023123a8 == '\0') &&
                   (iVar15 = ___cxa_guard_acquire(&DAT_1023123a8), iVar15 != 0)) {
                  DAT_1023123a0 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
                  ___cxa_atexit(FUN_10071b0a0,&DAT_1023123a0,0x100000000);
                  ___cxa_guard_release(&DAT_1023123a8);
                }
                if (*(int *)(DAT_1023123a0 + 0x14) == 0) {
                  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
                  local_44 = 0x4000000;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_44);
                  *puVar23 = 0x4000000;
                  local_48 = 0x19000006;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_48);
                  *puVar23 = 0x19000007;
                  puVar7 = PTR_s_Generic_102274b58;
                  iVar15 = -1;
                  if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
                    sVar22 = _strlen(PTR_s_Generic_102274b58);
                    iVar15 = (int)sVar22;
                  }
                  local_50 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar15);
                  uVar24 = FUN_10071b260(&DAT_1023123a0,&local_50);
                  FUN_10027d500(uVar24,&local_40);
                  if (*(int *)local_50 != -1) {
                    if (*(int *)local_50 != 0) {
                      LOCK();
                      *(int *)local_50 = *(int *)local_50 + -1;
                      local_31 = *(int *)local_50 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100715e6f;
                    }
                    QArrayData::deallocate(local_50,2,8);
                  }
LAB_100715e6f:
                  FUN_10071b470(&local_40);
                  local_54 = 0x4000058;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_54);
                  *puVar23 = 0x10000058;
                  local_58 = 0x4000043;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_58);
                  *puVar23 = 0x10000043;
                  local_5c = 0x4000056;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_5c);
                  *puVar23 = 0x10000056;
                  local_60 = 0x4000041;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_60);
                  *puVar23 = 0x10000041;
                  local_64 = 0x400005a;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_64);
                  *puVar23 = 0x1000005a;
                  local_68 = 0x4000053;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_68);
                  *puVar23 = 0x10000053;
                  local_6c = 0x4000051;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_6c);
                  *puVar23 = 0x10000051;
                  local_70 = 0x400004e;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_70);
                  *puVar23 = 0x1000004e;
                  local_74 = 0x4000000;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_74);
                  *puVar23 = 0x4000000;
                  local_78 = 0x19000006;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_78);
                  *puVar23 = 0x19000007;
                  puVar7 = PTR_s_Linux_102274b48;
                  iVar15 = -1;
                  if (PTR_s_Linux_102274b48 != (undefined *)0x0) {
                    sVar22 = _strlen(PTR_s_Linux_102274b48);
                    iVar15 = (int)sVar22;
                  }
                  local_80 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar15);
                  uVar24 = FUN_10071b260(&DAT_1023123a0,&local_80);
                  FUN_10027d500(uVar24,&local_40);
                  if (*(int *)local_80 != -1) {
                    if (*(int *)local_80 != 0) {
                      LOCK();
                      *(int *)local_80 = *(int *)local_80 + -1;
                      local_31 = *(int *)local_80 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100715fe3;
                    }
                    QArrayData::deallocate(local_80,2,8);
                  }
LAB_100715fe3:
                  FUN_10071b470(&local_40);
                  local_84 = 0x4000051;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_84);
                  *puVar23 = 0x4000051;
                  local_88 = 0x4000057;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_88);
                  *puVar23 = 0x4000057;
                  puVar7 = PTR_s_Mac_OS_X_102274b50;
                  iVar15 = -1;
                  if (PTR_s_Mac_OS_X_102274b50 != (undefined *)0x0) {
                    sVar22 = _strlen(PTR_s_Mac_OS_X_102274b50);
                    iVar15 = (int)sVar22;
                  }
                  local_90 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar15);
                  uVar24 = FUN_10071b260(&DAT_1023123a0,&local_90);
                  FUN_10027d500(uVar24,&local_40);
                  if (*(int *)local_90 != -1) {
                    if (*(int *)local_90 != 0) {
                      LOCK();
                      *(int *)local_90 = *(int *)local_90 + -1;
                      local_31 = *(int *)local_90 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10071609b;
                    }
                    QArrayData::deallocate(local_90,2,8);
                  }
LAB_10071609b:
                  FUN_10071b470(&local_40);
                  local_94 = 0x4000058;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_94);
                  *puVar23 = 0x10000058;
                  local_98 = 0x4000043;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_98);
                  *puVar23 = 0x10000043;
                  local_9c = 0x4000056;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_9c);
                  *puVar23 = 0x10000056;
                  local_a0 = 0x4000041;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_a0);
                  *puVar23 = 0x10000041;
                  local_a4 = 0x400005a;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_a4);
                  *puVar23 = 0x1000005a;
                  local_a8 = 0x4000053;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_a8);
                  *puVar23 = 0x10000053;
                  local_ac = 0x4000050;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_ac);
                  *puVar23 = 0x10000050;
                  local_b0 = 0x4000046;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_b0);
                  *puVar23 = 0x1000032;
                  local_b4 = 0x4000042;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_b4);
                  *puVar23 = 0x10000042;
                  local_b8 = 0x4000049;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_b8);
                  *puVar23 = 0x10000049;
                  local_bc = 0x4000055;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_bc);
                  *puVar23 = 0x10000055;
                  local_c0 = 0x400004e;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_c0);
                  *puVar23 = 0x1000004e;
                  local_c4 = 0x4000054;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_c4);
                  *puVar23 = 0x10000054;
                  local_c8 = 0x4000052;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_c8);
                  *puVar23 = 0x4000052;
                  local_cc = 0x4000051;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_cc);
                  *puVar23 = 0x9000033;
                  local_d0 = 0x4000057;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_d0);
                  *puVar23 = 0x11000033;
                  local_d4 = 0x4000000;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_d4);
                  *puVar23 = 0x4000000;
                  local_d8 = 0x8000031;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_d8);
                  *puVar23 = 0x4000000;
                  local_dc = 0x19000006;
                  puVar23 = (undefined4 *)FUN_10071b0e0(&local_40,&local_dc);
                  *puVar23 = 0x19000007;
                  puVar7 = PTR_s_Windows_102274b40;
                  iVar15 = -1;
                  if (PTR_s_Windows_102274b40 != (undefined *)0x0) {
                    sVar22 = _strlen(PTR_s_Windows_102274b40);
                    iVar15 = (int)sVar22;
                  }
                  local_e8 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar15);
                  uVar24 = FUN_10071b260(&DAT_1023123a0,&local_e8);
                  FUN_10027d500(uVar24,&local_40);
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10071636e;
                    }
                    QArrayData::deallocate(local_e8,2,8);
                  }
LAB_10071636e:
                  if (*(int *)(local_40 + 0x10) != -1) {
                    if (*(int *)(local_40 + 0x10) != 0) {
                      LOCK();
                      pcVar3 = local_40 + 0x10;
                      *(int *)pcVar3 = *(int *)pcVar3 + -1;
                      local_31 = *(int *)pcVar3 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1007163a0;
                    }
                    QHashData::free_helper(local_40);
                  }
                }
LAB_1007163a0:
                p_Var32 = DAT_1023123a0;
                if (1 < *(int *)(DAT_1023123a0 + 0x10) + 1U) {
                  LOCK();
                  pcVar3 = DAT_1023123a0 + 0x10;
                  *(int *)pcVar3 = *(int *)pcVar3 + 1;
                  local_31 = *(int *)pcVar3 != 0;
                  UNLOCK();
                }
                p_Var25 = p_Var32;
                if ((((byte)p_Var32[0x28] & 1) == 0) && (1 < *(uint *)(p_Var32 + 0x10))) {
                  p_Var25 = (_func_void_Node_ptr_void_ptr *)
                            QHashData::detach_helper(p_Var32,FUN_10071b5e0,0x71b670,0x20);
                  if (*(int *)(p_Var32 + 0x10) != -1) {
                    if (*(int *)(p_Var32 + 0x10) != 0) {
                      LOCK();
                      pcVar3 = p_Var32 + 0x10;
                      *(int *)pcVar3 = *(int *)pcVar3 + -1;
                      local_31 = *(int *)pcVar3 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10071641d;
                    }
                    QHashData::free_helper((_func_void_Node_ptr *)p_Var32);
                  }
                }
LAB_10071641d:
                uVar17 = *(uint *)(p_Var25 + 0x20);
                if (uVar17 != 0) {
                  uVar16 = qHash(&local_230,*(uint *)(p_Var25 + 0x24));
                  uVar4 = (ulong)uVar16 % (ulong)uVar17;
                  p_Var32 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var25 + 8) + uVar4 * 8);
                  if (p_Var32 == p_Var25) {
                    bVar34 = false;
                    goto LAB_100716660;
                  }
                  p_Var27 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var25 + 8) + uVar4 * 8);
                  do {
                    if (*(uint *)(p_Var32 + 8) == uVar16) {
                      cVar12 = operator==(&local_230,(QString *)(p_Var32 + 0x10));
                      p_Var26 = *(_func_void_Node_ptr_void_ptr **)p_Var27;
                      p_Var32 = *(_func_void_Node_ptr_void_ptr **)p_Var27;
                      if (cVar12 != '\0') break;
                    }
                    p_Var27 = p_Var32;
                    p_Var32 = *(_func_void_Node_ptr_void_ptr **)p_Var27;
                    p_Var26 = p_Var25;
                  } while (p_Var32 != p_Var25);
                  if (p_Var26 == p_Var25) {
                    bVar34 = false;
                    goto LAB_100716660;
                  }
                  if ((*(int *)(p_Var25 + 0x14) == 0) ||
                     (uVar17 = *(uint *)(p_Var25 + 0x20), uVar17 == 0)) {
LAB_100716555:
                    local_f0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
                  }
                  else {
                    uVar16 = qHash(&local_230,*(uint *)(p_Var25 + 0x24));
                    uVar4 = (ulong)uVar16 % (ulong)uVar17;
                    p_Var32 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var25 + 8) + uVar4 * 8)
                    ;
                    p_Var27 = p_Var25;
                    if (p_Var32 != p_Var25) {
                      p_Var26 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var25 + 8) + uVar4 * 8)
                      ;
                      do {
                        if (*(uint *)(p_Var32 + 8) == uVar16) {
                          cVar12 = operator==(&local_230,(QString *)(p_Var32 + 0x10));
                          p_Var27 = *(_func_void_Node_ptr_void_ptr **)p_Var26;
                          p_Var32 = *(_func_void_Node_ptr_void_ptr **)p_Var26;
                          if (cVar12 != '\0') break;
                        }
                        p_Var26 = p_Var32;
                        p_Var32 = *(_func_void_Node_ptr_void_ptr **)p_Var26;
                        p_Var27 = p_Var25;
                      } while (p_Var32 != p_Var25);
                    }
                    if (p_Var27 == p_Var25) goto LAB_100716555;
                    FUN_10027d640(&local_f0,p_Var27 + 0x18);
                  }
                  uVar17 = QKeySequence::operator[]((uint)local_280);
                  p_Var11 = local_f0;
                  if (*(uint *)(local_f0 + 0x20) == 0) {
                    bVar34 = false;
                  }
                  else {
                    p_Var28 = *(_func_void_Node_ptr **)
                               (*(long *)(local_f0 + 8) +
                               ((ulong)(*(uint *)(local_f0 + 0x24) ^ uVar17) %
                               (ulong)*(uint *)(local_f0 + 0x20)) * 8);
                    if (p_Var28 == local_f0) {
                      bVar34 = false;
                    }
                    else {
                      do {
                        if ((*(uint *)(p_Var28 + 8) == (*(uint *)(local_f0 + 0x24) ^ uVar17)) &&
                           (uVar17 == *(uint *)(p_Var28 + 0xc))) {
                          if (p_Var28 == local_f0) {
                            bVar34 = false;
                            goto LAB_100716635;
                          }
                          uVar17 = QKeySequence::operator[]((uint)local_280);
                          iVar18 = 0;
                          iVar15 = 0;
                          if ((*(int *)(p_Var11 + 0x14) == 0) ||
                             (iVar15 = iVar18, *(uint *)(p_Var11 + 0x20) == 0)) goto LAB_10071661b;
                          p_Var28 = *(_func_void_Node_ptr **)
                                     (*(long *)(p_Var11 + 8) +
                                     ((ulong)(*(uint *)(p_Var11 + 0x24) ^ uVar17) %
                                     (ulong)*(uint *)(p_Var11 + 0x20)) * 8);
                          goto LAB_100716603;
                        }
                        p_Var28 = *(_func_void_Node_ptr **)p_Var28;
                      } while (p_Var28 != local_f0);
                      bVar34 = false;
                    }
                  }
                  goto LAB_100716635;
                }
                bVar34 = false;
                goto LAB_100716660;
              }
              goto LAB_1007166e3;
            }
            FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong keyboard binding object");
            goto LAB_10071670c;
          }
LAB_100716735:
          pDVar33 = (Data *)PTR_shared_null_1021e15e8;
          local_260 = 1;
          if (*(int *)local_278 != -1) {
            if (*(int *)local_278 != 0) {
              LOCK();
              *(int *)local_278 = *(int *)local_278 + -1;
              local_31 = *(int *)local_278 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100716768;
            }
            QListData::dispose(local_278);
          }
LAB_100716768:
          FUN_100581a70(param_1,&local_230);
          FUN_1000fec30(&local_230);
        }
        ParallelsKeyboardMouse::~ParallelsKeyboardMouse((ParallelsKeyboardMouse *)local_210);
        local_130 = 0;
      }
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007167d3;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1007167d3:
      local_140 = local_140 + 2;
      uVar17 = local_130 ^ 1;
      bVar34 = local_130 != 1;
      local_130 = uVar17;
    } while ((bVar34) && (local_140 != local_138));
  }
  FUN_100039a80(&local_148);
  FUN_100039a80(&local_118);
  QDir::~QDir(local_110);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_100.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
  return;
LAB_100716603:
  if (p_Var28 == p_Var11) goto LAB_10071661b;
  if ((*(uint *)(p_Var28 + 8) == (*(uint *)(p_Var11 + 0x24) ^ uVar17)) &&
     (uVar17 == *(uint *)(p_Var28 + 0xc))) {
    if (p_Var28 != p_Var11) {
      iVar15 = *(int *)(p_Var28 + 0x10);
    }
    goto LAB_10071661b;
  }
  p_Var28 = *(_func_void_Node_ptr **)p_Var28;
  goto LAB_100716603;
LAB_10071661b:
  iVar18 = QKeySequence::operator[]((uint)local_330);
  bVar34 = iVar15 == iVar18;
LAB_100716635:
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar3 = p_Var11 + 0x10;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      local_31 = *(int *)pcVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100716660;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_100716660:
  if (*(int *)(p_Var25 + 0x10) != -1) {
    if (*(int *)(p_Var25 + 0x10) != 0) {
      LOCK();
      pcVar3 = p_Var25 + 0x10;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      local_31 = *(int *)pcVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071668c;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var25);
  }
LAB_10071668c:
  if (!bVar34) {
    bVar14 = CKmKeyBind::isEnable();
    FUN_100714b00(local_408,local_280,local_330,(uint)bVar14 * 2);
    FUN_100559c70(local_220,local_408);
    QKeySequence::~QKeySequence(local_400);
    QKeySequence::~QKeySequence(local_408);
  }
LAB_1007166e3:
  QKeySequence::~QKeySequence(local_330);
  QKeySequence::~QKeySequence(local_280);
LAB_10071670c:
  local_270 = local_270 + 8;
  if (local_270 == local_268) goto LAB_100716735;
  goto LAB_100715c20;
}

