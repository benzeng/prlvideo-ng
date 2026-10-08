
void FUN_1007f52c0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined1 local_d9;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined8 local_c8;
  QArrayData *local_c0;
  undefined1 local_b1;
  QArrayData *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_89;
  void *local_88;
  QArrayData **local_80;
  QArrayData **local_78;
  QArrayData **local_70;
  void *local_68;
  QArrayData **local_60;
  undefined4 *local_58;
  void *local_48;
  QArrayData **local_40;
  QArrayData **local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  long local_20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar3;
  if (param_2 == 10) {
    puVar4 = (undefined4 *)*param_4;
    plVar5 = (long *)param_4[1];
    pcVar7 = (code *)*plVar5;
    lVar8 = plVar5[1];
    if ((pcVar7 == FUN_1007f67c0) && (lVar8 == 0)) {
      *puVar4 = 0;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6820) && (lVar8 == 0)) {
      *puVar4 = 1;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6880) && (lVar8 == 0)) {
      *puVar4 = 2;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f68e0) && (lVar8 == 0)) {
      *puVar4 = 3;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6940) && (lVar8 == 0)) {
      *puVar4 = 4;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f69a0) && (lVar8 == 0)) {
      *puVar4 = 5;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6a00) && (lVar8 == 0)) {
      *puVar4 = 6;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6a70) && (lVar8 == 0)) {
      *puVar4 = 7;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_1007f6ad0) && (lVar8 == 0)) {
      *puVar4 = 8;
    }
    goto switchD_1007f5494_default;
  }
  if (param_2 != 0) goto switchD_1007f5494_default;
  switch(param_3) {
  case 0:
    local_e8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_89 = *(int *)local_e8 != 0;
      UNLOCK();
    }
    local_f0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_f0 + 1U) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_89 = *(int *)local_f0 != 0;
      UNLOCK();
    }
    local_e0 = *(undefined4 *)param_4[3];
    local_88 = (void *)0x0;
    local_80 = &local_e8;
    local_78 = &local_f0;
    local_70 = (QArrayData **)&local_e0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,0,&local_88);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_89 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f555d;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1007f555d:
    if (*(int *)local_e8 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_e8;
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      iVar1 = *(int *)local_e8;
      UNLOCK();
joined_r0x0001007f607e:
      local_89 = iVar1 != 0;
      if ((bool)local_89) goto switchD_1007f5494_default;
    }
    break;
  case 1:
    local_f8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f8 + 1U) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      local_89 = *(int *)local_f8 != 0;
      UNLOCK();
    }
    local_d9 = *(undefined1 *)param_4[2];
    local_68 = (void *)0x0;
    local_60 = &local_f8;
    local_58 = (undefined4 *)&local_d9;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,1,&local_68);
    if (*(int *)local_f8 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_f8;
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      iVar1 = *(int *)local_f8;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 2:
    local_d8 = *(QArrayData **)param_4[1];
    local_100 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_89 = *(int *)local_100 != 0;
      UNLOCK();
    }
    local_108 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_108 + 1U) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      local_89 = *(int *)local_108 != 0;
      UNLOCK();
    }
    local_88 = (void *)0x0;
    local_80 = &local_d8;
    local_78 = &local_100;
    local_70 = &local_108;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,2,&local_88);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_89 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5706;
      }
      QArrayData::deallocate(local_108,1,8);
    }
LAB_1007f5706:
    if (*(int *)local_100 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_100;
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      iVar1 = *(int *)local_100;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 3:
    local_d0 = *(QArrayData **)param_4[1];
    local_110 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      local_89 = *(int *)local_110 != 0;
      UNLOCK();
    }
    local_118 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_89 = *(int *)local_118 != 0;
      UNLOCK();
    }
    local_88 = (void *)0x0;
    local_80 = &local_d0;
    local_78 = &local_110;
    local_70 = &local_118;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,3,&local_88);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_89 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5810;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_1007f5810:
    if (*(int *)local_110 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_110;
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      iVar1 = *(int *)local_110;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 4:
    local_120 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_89 = *(int *)local_120 != 0;
      UNLOCK();
    }
    local_128 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_89 = *(int *)local_128 != 0;
      UNLOCK();
    }
    local_28 = (undefined8 *)param_4[4];
    local_c8 = *(undefined8 *)param_4[3];
    local_48 = (void *)0x0;
    local_40 = &local_120;
    local_38 = &local_128;
    local_30 = &local_c8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,4,&local_48);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_89 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5922;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1007f5922:
    if (*(int *)local_120 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_120;
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      iVar1 = *(int *)local_120;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 5:
    local_130 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      local_89 = *(int *)local_130 != 0;
      UNLOCK();
    }
    local_138 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_89 = *(int *)local_138 != 0;
      UNLOCK();
    }
    local_c0 = *(QArrayData **)param_4[3];
    local_88 = (void *)0x0;
    local_80 = &local_130;
    local_78 = &local_138;
    local_70 = &local_c0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,5,&local_88);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_89 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5a2c;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1007f5a2c:
    if (*(int *)local_130 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_130;
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      iVar1 = *(int *)local_130;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 6:
    local_140 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_140 + 1U) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + 1;
      local_89 = *(int *)local_140 != 0;
      UNLOCK();
    }
    local_b0 = *(QArrayData **)param_4[2];
    local_b1 = *(undefined1 *)param_4[3];
    local_88 = (void *)0x0;
    local_80 = &local_140;
    local_78 = &local_b0;
    local_70 = (QArrayData **)&local_b1;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,6,&local_88);
    if (*(int *)local_140 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_140;
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      iVar1 = *(int *)local_140;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 7:
    local_148 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_148 + 1U) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      local_89 = *(int *)local_148 != 0;
      UNLOCK();
    }
    local_a4 = *(undefined4 *)param_4[2];
    local_68 = (void *)0x0;
    local_60 = &local_148;
    local_58 = &local_a4;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,7,&local_68);
    if (*(int *)local_148 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_148;
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      iVar1 = *(int *)local_148;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 8:
    local_150 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_150 + 1U) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_89 = *(int *)local_150 != 0;
      UNLOCK();
    }
    local_158 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_158 + 1U) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + 1;
      local_89 = *(int *)local_158 != 0;
      UNLOCK();
    }
    local_98 = *(undefined8 *)param_4[3];
    local_a0 = *(undefined8 *)param_4[4];
    local_48 = (void *)0x0;
    local_40 = &local_150;
    local_38 = &local_158;
    local_30 = &local_98;
    local_28 = &local_a0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,8,&local_48);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_89 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5ca6;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1007f5ca6:
    if (*(int *)local_150 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_150;
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      iVar1 = *(int *)local_150;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 9:
    local_160 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_160 + 1U) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + 1;
      local_89 = *(int *)local_160 != 0;
      UNLOCK();
    }
    local_168 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_89 = *(int *)local_168 != 0;
      UNLOCK();
    }
    FUN_1000b1820(param_1,&local_160,&local_168,*(undefined4 *)param_4[3]);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_89 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5d7d;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1007f5d7d:
    if (*(int *)local_160 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_160;
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      iVar1 = *(int *)local_160;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 10:
                    /* WARNING: Could not recover jumptable at 0x0001007f5de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x90))(param_1,*(undefined4 *)param_4[1],param_4[2]);
    return;
  case 0xb:
    local_170 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_170 + 1U) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_89 = *(int *)local_170 != 0;
      UNLOCK();
    }
    FUN_1000ace70(param_1,&local_170,*(undefined1 *)param_4[2]);
    if (*(int *)local_170 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_170;
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      iVar1 = *(int *)local_170;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 0xc:
    FUN_1000b2d50(param_1,*(undefined1 *)param_4[1]);
    return;
  case 0xd:
    uVar6 = *(undefined8 *)param_4[1];
    uVar2 = *(undefined4 *)param_4[2];
    local_178 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_178 + 1U) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      local_89 = *(int *)local_178 != 0;
      UNLOCK();
    }
    local_180 = *(QArrayData **)param_4[4];
    if (1 < *(int *)local_180 + 1U) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + 1;
      local_89 = *(int *)local_180 != 0;
      UNLOCK();
    }
    FUN_1000b2e80(param_1,uVar6,uVar2,&local_178,&local_180);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_89 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_1007f5f1a;
      }
      QArrayData::deallocate(local_180,1,8);
    }
LAB_1007f5f1a:
    if (*(int *)local_178 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_178;
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      iVar1 = *(int *)local_178;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 0xe:
    uVar6 = *(undefined8 *)param_4[1];
    local_188 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_188 + 1U) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + 1;
      local_89 = *(int *)local_188 != 0;
      UNLOCK();
    }
    FUN_1000b4260(param_1,uVar6,&local_188);
    if (*(int *)local_188 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_188;
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      iVar1 = *(int *)local_188;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 0xf:
    local_190 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_190 + 1U) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + 1;
      local_89 = *(int *)local_190 != 0;
      UNLOCK();
    }
    FUN_1000b4120(param_1,&local_190);
    if (*(int *)local_190 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_190;
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      iVar1 = *(int *)local_190;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  case 0x10:
    local_198 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_198 + 1U) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + 1;
      local_89 = *(int *)local_198 != 0;
      UNLOCK();
    }
    FUN_1000aed60(param_1,&local_198);
    if (*(int *)local_198 == -1) goto switchD_1007f5494_default;
    pQVar9 = local_198;
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      iVar1 = *(int *)local_198;
      UNLOCK();
      goto joined_r0x0001007f607e;
    }
    break;
  default:
    goto switchD_1007f5494_default;
  }
  QArrayData::deallocate(pQVar9,2,8);
switchD_1007f5494_default:
  if (lVar3 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

