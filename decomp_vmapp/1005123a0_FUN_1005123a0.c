
void FUN_1005123a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  char in_AL;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  void **ppvVar22;
  QArrayData *pQVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long *plVar33;
  int *piVar34;
  long lVar35;
  void *local_288;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1d8;
  QArrayData *local_1c8;
  int local_1c0 [2];
  void *local_1b8;
  undefined1 local_1b0 [12];
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  undefined1 local_f9;
  int local_f8;
  int local_f4;
  ulong *local_f0;
  undefined1 *local_e8;
  int local_d8 [2];
  void *local_d0;
  int local_c8;
  void *local_c0;
  int local_b8;
  void *local_b0;
  int local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  void *local_50;
  int local_48;
  void *local_40;
  long local_38;
  
  if (in_AL != '\0') {
    local_248 = param_1;
    local_238 = param_2;
    local_228 = param_3;
    local_218 = param_4;
    local_208 = param_5;
    local_1f8 = param_6;
    local_1e8 = param_7;
    local_1d8 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_268 = param_11;
  local_260 = param_12;
  local_258 = param_13;
  local_250 = param_14;
  uVar14 = (*(code *)PTR__objc_retain_100ba25f8)();
  uVar15 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar14,PTR_s_class_100bed938);
  uVar15 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar15,PTR_s_qtMethods_100bed9e0);
  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
  uVar16 = _NSStringFromSelector(param_10);
  uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
  uVar17 = (*(code *)PTR__objc_msgSend_100ba25e8)
                     (uVar15,PTR_s_objectForKeyedSubscript__100beda18,uVar16);
  uVar17 = _objc_retainAutoreleasedReturnValue(uVar17);
  puVar1 = PTR__objc_release_100ba25f0;
  (*(code *)PTR__objc_release_100ba25f0)(uVar16);
  (*(code *)puVar1)(uVar15);
  local_1b0 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar17,PTR_s_metaMethod_100beda20);
  iVar12 = QMetaMethod::returnType();
  puVar18 = (undefined8 *)FUN_100514c80(iVar12);
  local_288 = (void *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    local_288 = (void *)(**(code **)*puVar18)(puVar18,0);
  }
  local_d8[0] = -1;
  local_d0 = (void *)0x0;
  local_c8 = -1;
  local_c0 = (void *)0x0;
  local_b8 = -1;
  local_b0 = (void *)0x0;
  local_a8 = -1;
  local_a0 = (void *)0x0;
  local_98 = -1;
  local_90 = (void *)0x0;
  local_88 = -1;
  local_80 = (void *)0x0;
  local_78 = -1;
  local_70 = (void *)0x0;
  local_68 = -1;
  local_60 = (void *)0x0;
  local_58 = -1;
  local_50 = (void *)0x0;
  local_48 = -1;
  local_40 = (void *)0x0;
  local_e8 = local_278;
  local_f0 = (ulong *)&stack0x00000008;
  local_f4 = 0x30;
  local_f8 = 0x10;
  piVar34 = local_d8;
  lVar35 = 0;
  while( true ) {
    iVar13 = QMetaMethod::parameterCount();
    if (iVar13 <= lVar35) break;
    iVar13 = QMetaMethod::parameterType((int)local_1b0);
    if (iVar13 == 6) {
      uVar19 = (ulong)local_f4;
      if (uVar19 < 0xa1) {
        local_f4 = local_f4 + 0x10;
        uVar19 = *(ulong *)(local_e8 + uVar19);
      }
      else {
LAB_1005126c0:
        puVar20 = local_f0;
        local_f0 = local_f0 + 1;
LAB_1005126d2:
        uVar19 = *puVar20;
      }
    }
    else {
      if (iVar13 != 0x26) {
        if (0x28 < (ulong)(long)local_f8) goto LAB_1005126c0;
        puVar20 = (ulong *)(local_e8 + local_f8);
        local_f8 = local_f8 + 8;
        goto LAB_1005126d2;
      }
      uVar19 = (ulong)local_f4;
      if (uVar19 < 0xa1) {
        local_f4 = local_f4 + 0x10;
        uVar19 = (ulong)*(uint *)(local_e8 + uVar19);
      }
      else {
        uVar19 = (ulong)(uint)*local_f0;
        local_f0 = local_f0 + 1;
      }
    }
    local_1b8 = (void *)0x0;
    local_1c0[0] = iVar13;
    puVar18 = (undefined8 *)FUN_100514c80(iVar13);
    if (puVar18 != (undefined8 *)0x0) {
      local_1c0[0] = iVar13;
      local_1b8 = (void *)(**(code **)*puVar18)(puVar18,uVar19);
    }
    if (local_1c0 != piVar34) {
      lVar21 = FUN_100514c80(*piVar34);
      if (lVar21 == 0) {
        ppvVar22 = &local_d0 + lVar35 * 2;
      }
      else {
        QMetaType::destroy(*piVar34,*(void **)(piVar34 + 2));
        ppvVar22 = (void **)(piVar34 + 2);
      }
      *ppvVar22 = (void *)0x0;
      *piVar34 = local_1c0[0];
      lVar21 = FUN_100514c80();
      if (lVar21 != 0) {
        uVar15 = FUN_1005108e0(*piVar34,local_1b8);
        *(undefined8 *)(piVar34 + 2) = uVar15;
      }
    }
    lVar21 = FUN_100514c80(local_1c0[0]);
    if (lVar21 != 0) {
      QMetaType::destroy(local_1c0[0],local_1b8);
    }
    local_1b8 = (void *)0x0;
    lVar35 = lVar35 + 1;
    piVar34 = piVar34 + 4;
  }
  uVar15 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar14,PTR_s_qObject_100beda28);
  QMetaMethod::name();
  pQVar23 = local_1c8 + *(long *)(local_1c8 + 0x10);
  uVar16 = QMetaType::typeName(iVar12);
  uVar24 = QMetaType::typeName(local_d8[0]);
  pvVar2 = local_d0;
  uVar25 = QMetaType::typeName(local_c8);
  pvVar3 = local_c0;
  uVar26 = QMetaType::typeName(local_b8);
  pvVar4 = local_b0;
  uVar27 = QMetaType::typeName(local_a8);
  pvVar5 = local_a0;
  uVar28 = QMetaType::typeName(local_98);
  pvVar6 = local_90;
  uVar29 = QMetaType::typeName(local_88);
  pvVar7 = local_80;
  uVar30 = QMetaType::typeName(local_78);
  pvVar8 = local_70;
  uVar31 = QMetaType::typeName(local_68);
  pvVar9 = local_60;
  uVar32 = QMetaType::typeName(local_58);
  pvVar10 = local_50;
  local_118 = QMetaType::typeName(local_48);
  local_120 = local_40;
  local_130 = pvVar10;
  local_140 = pvVar9;
  local_150 = pvVar8;
  local_160 = pvVar7;
  local_170 = pvVar6;
  local_180 = pvVar5;
  local_190 = pvVar4;
  local_1a0 = pvVar3;
  local_110 = pvVar2;
  local_198 = uVar25;
  local_188 = uVar26;
  local_178 = uVar27;
  local_168 = uVar28;
  local_158 = uVar29;
  local_148 = uVar30;
  local_138 = uVar31;
  local_128 = uVar32;
  local_108 = uVar24;
  cVar11 = QMetaObject::invokeMethod(uVar15,pQVar23,0,local_288,uVar16);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_f9 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_f9) goto LAB_100512cec;
    }
    QArrayData::deallocate(local_1c8,1,8);
  }
LAB_100512cec:
  if (cVar11 == '\0') {
    _NSLog(&cf_QMetaObject__invokeMethodfailed);
  }
  plVar33 = (long *)FUN_100514c80(iVar12);
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 8))(plVar33,local_288);
  }
  lVar35 = FUN_100514c80(local_48);
  if (lVar35 != 0) {
    QMetaType::destroy(local_48,local_40);
  }
  local_40 = (void *)0x0;
  lVar35 = FUN_100514c80(local_58);
  if (lVar35 != 0) {
    QMetaType::destroy(local_58,local_50);
  }
  local_50 = (void *)0x0;
  lVar35 = FUN_100514c80(local_68);
  if (lVar35 != 0) {
    QMetaType::destroy(local_68,local_60);
  }
  local_60 = (void *)0x0;
  lVar35 = FUN_100514c80(local_78);
  if (lVar35 != 0) {
    QMetaType::destroy(local_78,local_70);
  }
  local_70 = (void *)0x0;
  lVar35 = FUN_100514c80(local_88);
  if (lVar35 != 0) {
    QMetaType::destroy(local_88,local_80);
  }
  local_80 = (void *)0x0;
  lVar35 = FUN_100514c80(local_98);
  if (lVar35 != 0) {
    QMetaType::destroy(local_98,local_90);
  }
  local_90 = (void *)0x0;
  lVar35 = FUN_100514c80(local_a8);
  if (lVar35 != 0) {
    QMetaType::destroy(local_a8,local_a0);
  }
  local_a0 = (void *)0x0;
  lVar35 = FUN_100514c80(local_b8);
  if (lVar35 != 0) {
    QMetaType::destroy(local_b8,local_b0);
  }
  local_b0 = (void *)0x0;
  lVar35 = FUN_100514c80(local_c8);
  if (lVar35 != 0) {
    QMetaType::destroy(local_c8,local_c0);
  }
  local_c0 = (void *)0x0;
  lVar35 = FUN_100514c80(local_d8[0]);
  if (lVar35 != 0) {
    QMetaType::destroy(local_d8[0],local_d0);
  }
  local_d0 = (void *)0x0;
  lVar35 = FUN_100514c80(iVar12);
  puVar1 = PTR__objc_release_100ba25f0;
  if (lVar35 != 0) {
    QMetaType::destroy(iVar12,local_288);
  }
  (*(code *)puVar1)(uVar17);
  (*(code *)puVar1)(uVar14);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

