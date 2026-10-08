
void FUN_1005f3310(long param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  char *pcVar11;
  _func_void_Node_ptr *p_Var12;
  long lVar13;
  _func_void_Node_ptr *p_Var14;
  long *plVar15;
  _func_void_Node_ptr *local_1d8;
  QTypedArrayData<unsigned_short> *local_1b8;
  undefined4 local_1b0;
  _func_void_Node_ptr *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  long *local_138;
  QVariant local_130;
  _func_void_Node_ptr *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  _func_void_Node_ptr *local_b0;
  _func_void_Node_ptr *local_a8;
  int local_a0 [4];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_a8,uVar7);
  if ((*(int *)(local_a8 + 0x14) != 0) && (uVar2 = *(uint *)(local_a8 + 0x20), uVar2 != 0)) {
    uVar6 = qHash(param_2,*(uint *)(local_a8 + 0x24));
    uVar6 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ *(uint *)&param_2[1].field0_0x0;
    uVar3 = (ulong)uVar6 % (ulong)uVar2;
    p_Var14 = *(_func_void_Node_ptr **)(*(long *)(local_a8 + 8) + uVar3 * 8);
    if (p_Var14 != local_a8) {
      plVar8 = (long *)(*(long *)(local_a8 + 8) + uVar3 * 8);
      do {
        if (((*(uint *)(p_Var14 + 8) == uVar6) &&
            (cVar5 = operator==(param_2,(QString *)(p_Var14 + 0x10)), cVar5 != '\0')) &&
           (*(int *)&param_2[1].field0_0x0 == *(int *)(p_Var14 + 0x18))) {
          if ((_func_void_Node_ptr *)*plVar8 != local_a8) {
            FUN_100260700(local_a0,(_func_void_Node_ptr *)*plVar8 + 0x20);
            goto LAB_1005f346c;
          }
          break;
        }
        plVar8 = (long *)*plVar8;
        p_Var14 = (_func_void_Node_ptr *)*plVar8;
      } while (p_Var14 != local_a8);
    }
  }
  local_a0[0] = 0xff;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_90._8_4_ = (int)PTR_shared_null_1021e1288;
  local_90._0_8_ = PTR_shared_null_1021e1288;
  local_90._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_80._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_70 = 0;
  local_68 = PTR_shared_null_1021e1288;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
LAB_1005f346c:
  iVar4 = local_a0[0];
  FUN_10005e410(local_a0);
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f34b1;
    }
    QHashData::free_helper(local_a8);
  }
LAB_1005f34b1:
  uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_b0,uVar7);
  uVar2 = *(uint *)(local_b0 + 0x20);
  p_Var14 = local_b0;
  if (uVar2 != 0) {
    uVar6 = qHash(param_2,*(uint *)(local_b0 + 0x24));
    uVar6 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ *(uint *)&param_2[1].field0_0x0;
    uVar3 = (ulong)uVar6 % (ulong)uVar2;
    p_Var12 = *(_func_void_Node_ptr **)(*(long *)(local_b0 + 8) + uVar3 * 8);
    if (p_Var12 != local_b0) {
      plVar8 = (long *)(*(long *)(local_b0 + 8) + uVar3 * 8);
      do {
        if (((*(uint *)(p_Var12 + 8) == uVar6) &&
            (cVar5 = operator==(param_2,(QString *)(p_Var12 + 0x10)), cVar5 != '\0')) &&
           (*(int *)&param_2[1].field0_0x0 == *(int *)(p_Var12 + 0x18))) {
          p_Var14 = (_func_void_Node_ptr *)*plVar8;
          break;
        }
        plVar8 = (long *)*plVar8;
        p_Var12 = (_func_void_Node_ptr *)*plVar8;
      } while (p_Var12 != local_b0);
    }
  }
  if (*(int *)(local_b0 + 0x10) != -1) {
    if (*(int *)(local_b0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f359c;
    }
    QHashData::free_helper(local_b0);
  }
LAB_1005f359c:
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) < *(int *)(*(long *)(param_1 + 0x18) + 0xc)) {
    lVar13 = 0;
    do {
      plVar8 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220780);
      if (((plVar8 != (long *)0x0) &&
          (cVar5 = operator==((QString *)(plVar8 + 0xf),param_2), cVar5 != '\0')) &&
         ((int)plVar8[0x10] == *(int *)&param_2[1].field0_0x0)) {
        uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
        FUN_1005fa410(&local_120,uVar7);
        if ((*(int *)(local_120 + 0x14) == 0) || (uVar2 = *(uint *)(local_120 + 0x20), uVar2 == 0))
        goto LAB_1005f39b3;
        local_1d8 = local_120;
        uVar6 = qHash(param_2,*(uint *)(local_120 + 0x24));
        uVar6 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ *(uint *)&param_2[1].field0_0x0;
        uVar3 = (ulong)uVar6 % (ulong)uVar2;
        p_Var12 = *(_func_void_Node_ptr **)(*(long *)(local_120 + 8) + uVar3 * 8);
        if (p_Var12 == local_120) goto LAB_1005f39b3;
        plVar15 = (long *)(*(long *)(local_120 + 8) + uVar3 * 8);
        goto LAB_1005f37b0;
      }
      lVar13 = lVar13 + 1;
      lVar10 = *(long *)(param_1 + 0x18);
    } while (lVar13 < (long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8));
  }
  if (iVar4 == 0xff) {
    return;
  }
  pvVar9 = operator_new(0x90);
  uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_1a8,uVar7);
  if ((*(int *)(local_1a8 + 0x14) != 0) && (uVar2 = *(uint *)(local_1a8 + 0x20), uVar2 != 0)) {
    uVar6 = qHash(param_2,*(uint *)(local_1a8 + 0x24));
    uVar6 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ *(uint *)&param_2[1].field0_0x0;
    uVar3 = (ulong)uVar6 % (ulong)uVar2;
    p_Var14 = *(_func_void_Node_ptr **)(*(long *)(local_1a8 + 8) + uVar3 * 8);
    if (p_Var14 != local_1a8) {
      plVar8 = (long *)(*(long *)(local_1a8 + 8) + uVar3 * 8);
      do {
        if (((*(uint *)(p_Var14 + 8) == uVar6) &&
            (cVar5 = operator==(param_2,(QString *)(p_Var14 + 0x10)), cVar5 != '\0')) &&
           (*(int *)&param_2[1].field0_0x0 == *(int *)(p_Var14 + 0x18))) {
          if ((_func_void_Node_ptr *)*plVar8 != local_1a8) {
            FUN_100260700(&local_1a0,(_func_void_Node_ptr *)*plVar8 + 0x20);
            goto LAB_1005f38b8;
          }
          break;
        }
        plVar8 = (long *)*plVar8;
        p_Var14 = (_func_void_Node_ptr *)*plVar8;
      } while (p_Var14 != local_1a8);
    }
  }
  local_1a0 = 0xff;
  local_19c = 0;
  local_198 = 0;
  local_190._8_4_ = (int)PTR_shared_null_1021e1288;
  local_190._0_8_ = PTR_shared_null_1021e1288;
  local_190._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_180._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_180._0_8_ = PTR_shared_null_1021e15e8;
  local_180._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_170 = 0;
  local_168 = PTR_shared_null_1021e1288;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
LAB_1005f38b8:
  local_1b8 = param_2->field0_0x0;
  if (1 < *(int *)local_1b8 + 1U) {
    LOCK();
    *(int *)local_1b8 = *(int *)local_1b8 + 1;
    local_31 = *(int *)local_1b8 != 0;
    UNLOCK();
  }
  local_1b0 = *(undefined4 *)&param_2[1].field0_0x0;
  FUN_1005fdc90(pvVar9,&local_1a0,&local_1b8,0,0);
  FUN_1005f2e80(param_1,pvVar9);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f3947;
    }
    QArrayData::deallocate((QArrayData *)local_1b8,2,8);
  }
LAB_1005f3947:
  FUN_10005e410(&local_1a0);
  if (*(int *)(local_1a8 + 0x10) != -1) {
    if (*(int *)(local_1a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_1a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f3b3d;
    }
    QHashData::free_helper(local_1a8);
  }
LAB_1005f3b3d:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
  while( true ) {
    plVar15 = (long *)*plVar15;
    p_Var12 = (_func_void_Node_ptr *)*plVar15;
    if (p_Var12 == local_120) break;
LAB_1005f37b0:
    if (((*(uint *)(p_Var12 + 8) == uVar6) &&
        (cVar5 = operator==(param_2,(QString *)(p_Var12 + 0x10)), cVar5 != '\0')) &&
       (*(int *)&param_2[1].field0_0x0 == *(int *)(p_Var12 + 0x18))) {
      if ((_func_void_Node_ptr *)*plVar15 != local_120) {
        FUN_100260700(&local_118,(_func_void_Node_ptr *)*plVar15 + 0x20);
        goto LAB_1005f3a4c;
      }
      break;
    }
  }
LAB_1005f39b3:
  local_118 = 0xff;
  local_114 = 0;
  local_110 = 0;
  local_108._8_4_ = (int)PTR_shared_null_1021e1288;
  local_108._0_8_ = PTR_shared_null_1021e1288;
  local_108._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_f8._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_f8._0_8_ = PTR_shared_null_1021e15e8;
  local_f8._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_e8 = 0;
  local_e0 = PTR_shared_null_1021e1288;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_1d8 = local_120;
LAB_1005f3a4c:
  FUN_100287aa0(plVar8 + 2,&local_118);
  FUN_10005e410(&local_118);
  if (*(int *)(local_1d8 + 0x10) != -1) {
    if (*(int *)(local_1d8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_1d8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f3a99;
    }
    QHashData::free_helper(local_1d8);
  }
LAB_1005f3a99:
  if (p_Var14 != local_b0) {
    return;
  }
  if ((int)lVar13 == -1) {
    return;
  }
  lVar10 = CDeclarativeWizardPage::pageContentItem();
  if (((lVar10 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     ((int)lVar13 <= *(int *)(param_1 + 0x20))) {
    pcVar11 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_130,*(int *)(param_1 + 0x20) + -1);
    QObject::setProperty(pcVar11,(QVariant *)"currentAutodetectedIndex");
    QVariant::~QVariant(&local_130);
  }
  local_138 = plVar8;
  FUN_1005fa4b0((long *)(param_1 + 0x18),&local_138);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  goto LAB_1005f3b3d;
}

