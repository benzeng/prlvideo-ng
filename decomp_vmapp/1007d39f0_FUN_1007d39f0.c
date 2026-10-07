
void FUN_1007d39f0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  QArrayData *pQVar7;
  bool bVar8;
  long *local_1d8;
  QArrayData *local_1d0;
  long *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  long *local_1a8;
  QArrayData *local_1a0;
  long *local_198;
  QArrayData *local_190;
  long *local_188;
  long *local_180;
  QArrayData *local_178;
  long *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  long *local_158;
  long *local_150;
  QArrayData *local_148;
  long *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  long *local_128;
  QArrayData *local_120;
  long *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  long *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined4 local_e4;
  QArrayData *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  void *local_98;
  QArrayData **local_90;
  void *local_88;
  QArrayData **local_80;
  long **local_78;
  void *local_68;
  QArrayData **local_60;
  QArrayData **local_58;
  long **local_50;
  void *local_48;
  undefined8 *local_40;
  QArrayData **local_38;
  long **local_30;
  long **local_28;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar2;
  if (param_2 == 10) {
    puVar3 = (undefined4 *)*param_4;
    plVar4 = (long *)param_4[1];
    pcVar5 = (code *)*plVar4;
    lVar6 = plVar4[1];
    if ((pcVar5 == FUN_1007d5240) && (lVar6 == 0)) {
      *puVar3 = 0;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5290) && (lVar6 == 0)) {
      *puVar3 = 1;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d52e0) && (lVar6 == 0)) {
      *puVar3 = 2;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5330) && (lVar6 == 0)) {
      *puVar3 = 3;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5380) && (lVar6 == 0)) {
      *puVar3 = 4;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d53d0) && (lVar6 == 0)) {
      *puVar3 = 5;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5430) && (lVar6 == 0)) {
      *puVar3 = 6;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5490) && (lVar6 == 0)) {
      *puVar3 = 7;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d54f0) && (lVar6 == 0)) {
      *puVar3 = 8;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5550) && (lVar6 == 0)) {
      *puVar3 = 9;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d55b0) && (lVar6 == 0)) {
      *puVar3 = 10;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5600) && (lVar6 == 0)) {
      *puVar3 = 0xb;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5660) && (lVar6 == 0)) {
      *puVar3 = 0xc;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d56c0) && (lVar6 == 0)) {
      *puVar3 = 0xd;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5730) && (lVar6 == 0)) {
      *puVar3 = 0xe;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007d5790) && (lVar6 == 0)) {
      *puVar3 = 0xf;
    }
    goto switchD_1007d3cea_default;
  }
  if (param_2 != 0) goto switchD_1007d3cea_default;
  switch(param_3) {
  case 0:
    local_e4 = *(undefined4 *)param_4[1];
    local_98 = (void *)0x0;
    local_90 = (QArrayData **)&local_e4;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0,&local_98);
    goto switchD_1007d3cea_default;
  case 1:
    local_f0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f0 + 1U) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_f0 != 0);
    }
    local_98 = (void *)0x0;
    local_90 = &local_f0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,1,&local_98);
    if (*(int *)local_f0 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_f0;
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_f0 != 0);
      if (*(int *)local_f0 != 0) goto switchD_1007d3cea_default;
    }
    break;
  case 2:
    local_f8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f8 + 1U) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_f8 != 0);
    }
    local_100 = *(long **)param_4[2];
    if (local_100 != (long *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    local_88 = (void *)0x0;
    local_80 = &local_f8;
    local_78 = &local_100;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,2,&local_88);
    if (local_100 != (long *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (*(int *)local_f8 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_f8;
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      bVar8 = *(int *)local_f8 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d3f0f:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 3:
    local_108 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_108 + 1U) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_108 != 0);
    }
    local_98 = (void *)0x0;
    local_90 = &local_108;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,3,&local_98);
    if (*(int *)local_108 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_108;
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      bVar8 = *(int *)local_108 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d3f0f;
    }
    break;
  case 4:
    local_110 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_110 != 0);
    }
    local_118 = *(long **)param_4[2];
    if (local_118 != (long *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    local_88 = (void *)0x0;
    local_80 = &local_110;
    local_78 = &local_118;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,4,&local_88);
    if (local_118 != (long *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
    if (*(int *)local_110 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_110;
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      bVar8 = *(int *)local_110 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d40d0:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 5:
    local_e0 = *(QArrayData **)param_4[1];
    local_120 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_120 != 0);
    }
    local_128 = *(long **)param_4[3];
    if (local_128 != (long *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_e0;
    local_58 = &local_120;
    local_50 = &local_128;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,5,&local_68);
    if (local_128 != (long *)0x0) {
      LOCK();
      plVar4 = local_128 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_128 + 0x10))();
      }
    }
    if (*(int *)local_120 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_120;
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      bVar8 = *(int *)local_120 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d40d0;
    }
    break;
  case 6:
    local_130 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_130 != 0);
    }
    local_138 = *(QArrayData **)param_4[2];
    if (local_138 != (QArrayData *)0x0) {
      LOCK();
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
      UNLOCK();
    }
    local_140 = *(long **)param_4[3];
    if (local_140 != (long *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_130;
    local_58 = &local_138;
    local_50 = &local_140;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,6,&local_68);
    if (local_140 != (long *)0x0) {
      LOCK();
      plVar4 = local_140 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_140 + 0x10))();
      }
    }
    if (local_138 != (QArrayData *)0x0) {
      LOCK();
      pQVar7 = local_138 + 8;
      iVar1 = *(int *)pQVar7;
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*(long *)local_138 + 0x10))();
      }
    }
    if (*(int *)local_130 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_130;
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      bVar8 = *(int *)local_130 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d4329:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 7:
    local_d8 = *(undefined8 *)param_4[1];
    local_148 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_148 + 1U) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_148 != 0);
    }
    local_150 = *(long **)param_4[3];
    if (local_150 != (long *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    local_158 = *(long **)param_4[4];
    if (local_158 != (long *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_d8;
    local_38 = &local_148;
    local_30 = &local_150;
    local_28 = &local_158;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,7,&local_48);
    if (local_158 != (long *)0x0) {
      LOCK();
      plVar4 = local_158 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_158 + 0x10))();
      }
    }
    if (local_150 != (long *)0x0) {
      LOCK();
      plVar4 = local_150 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_150 + 0x10))();
      }
    }
    if (*(int *)local_148 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_148;
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      bVar8 = *(int *)local_148 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d4329;
    }
    break;
  case 8:
    local_160 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_160 + 1U) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_160 != 0);
    }
    local_168 = *(QArrayData **)param_4[2];
    if (local_168 != (QArrayData *)0x0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    local_170 = *(long **)param_4[3];
    if (local_170 != (long *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_160;
    local_58 = &local_168;
    local_50 = &local_170;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,8,&local_68);
    if (local_170 != (long *)0x0) {
      LOCK();
      plVar4 = local_170 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_170 + 0x10))();
      }
    }
    if (local_168 != (QArrayData *)0x0) {
      LOCK();
      pQVar7 = local_168 + 8;
      iVar1 = *(int *)pQVar7;
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*(long *)local_168 + 0x10))();
      }
    }
    if (*(int *)local_160 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_160;
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      bVar8 = *(int *)local_160 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d4582:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 9:
    local_d0 = *(undefined8 *)param_4[1];
    local_178 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_178 + 1U) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_178 != 0);
    }
    local_180 = *(long **)param_4[3];
    if (local_180 != (long *)0x0) {
      LOCK();
      *(int *)(local_180 + 1) = (int)local_180[1] + 1;
      UNLOCK();
    }
    local_188 = *(long **)param_4[4];
    if (local_188 != (long *)0x0) {
      LOCK();
      *(int *)(local_188 + 1) = (int)local_188[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_d0;
    local_38 = &local_178;
    local_30 = &local_180;
    local_28 = &local_188;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,9,&local_48);
    if (local_188 != (long *)0x0) {
      LOCK();
      plVar4 = local_188 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_188 + 0x10))();
      }
    }
    if (local_180 != (long *)0x0) {
      LOCK();
      plVar4 = local_180 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_180 + 0x10))();
      }
    }
    if (*(int *)local_178 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_178;
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      bVar8 = *(int *)local_178 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d4582;
    }
    break;
  case 10:
    local_190 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_190 + 1U) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_190 != 0);
    }
    local_198 = *(long **)param_4[2];
    if (local_198 != (long *)0x0) {
      LOCK();
      *(int *)(local_198 + 1) = (int)local_198[1] + 1;
      UNLOCK();
    }
    local_88 = (void *)0x0;
    local_80 = &local_190;
    local_78 = &local_198;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,10,&local_88);
    if (local_198 != (long *)0x0) {
      LOCK();
      plVar4 = local_198 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_198 + 0x10))();
      }
    }
    if (*(int *)local_190 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_190;
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      bVar8 = *(int *)local_190 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d4743:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 0xb:
    local_c8 = *(QArrayData **)param_4[1];
    local_1a0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_1a0 + 1U) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_1a0 != 0);
    }
    local_1a8 = *(long **)param_4[3];
    if (local_1a8 != (long *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_c8;
    local_58 = &local_1a0;
    local_50 = &local_1a8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0xb,&local_68);
    if (local_1a8 != (long *)0x0) {
      LOCK();
      plVar4 = local_1a8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_1a8 + 0x10))();
      }
    }
    if (*(int *)local_1a0 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_1a0;
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      bVar8 = *(int *)local_1a0 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d4743;
    }
    break;
  case 0xc:
    local_1b0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_1b0 + 1U) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_1b0 != 0);
    }
    local_c0 = *(undefined4 *)param_4[2];
    local_88 = (void *)0x0;
    local_80 = &local_1b0;
    local_78 = (long **)&local_c0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0xc,&local_88);
    if (*(int *)local_1b0 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_1b0;
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      bVar8 = *(int *)local_1b0 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d489a:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 0xd:
    local_b8 = *(QArrayData **)param_4[1];
    local_1b8 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_1b8 + 1U) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_1b8 != 0);
    }
    local_bc = *(undefined4 *)param_4[3];
    local_68 = (void *)0x0;
    local_60 = &local_b8;
    local_58 = &local_1b8;
    local_50 = (long **)&local_bc;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0xd,&local_68);
    if (*(int *)local_1b8 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_1b8;
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      bVar8 = *(int *)local_1b8 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d489a;
    }
    break;
  case 0xe:
    local_b0 = *(QArrayData **)param_4[1];
    local_1c0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_1c0 + 1U) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_1c0 != 0);
    }
    local_1c8 = *(long **)param_4[3];
    if (local_1c8 != (long *)0x0) {
      LOCK();
      *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_b0;
    local_58 = &local_1c0;
    local_50 = &local_1c8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0xe,&local_68);
    if (local_1c8 != (long *)0x0) {
      LOCK();
      plVar4 = local_1c8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_1c8 + 0x10))();
      }
    }
    if (*(int *)local_1c0 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_1c0;
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      bVar8 = *(int *)local_1c0 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
joined_r0x0001007d4a83:
      if (bVar8) goto switchD_1007d3cea_default;
    }
    break;
  case 0xf:
    local_a0 = *(undefined8 *)param_4[1];
    local_1d0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_1d0 + 1U) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + 1;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,*(int *)local_1d0 != 0);
    }
    local_a4 = *(undefined4 *)param_4[3];
    local_1d8 = *(long **)param_4[4];
    if (local_1d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_a0;
    local_38 = &local_1d0;
    local_30 = (long **)&local_a4;
    local_28 = &local_1d8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcfcf0,0xf,&local_48);
    if (local_1d8 != (long *)0x0) {
      LOCK();
      plVar4 = local_1d8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_1d8 + 0x10))();
      }
    }
    if (*(int *)local_1d0 == -1) goto switchD_1007d3cea_default;
    pQVar7 = local_1d0;
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      bVar8 = *(int *)local_1d0 != 0;
      UNLOCK();
      local_e4 = CONCAT31(local_e4._1_3_,bVar8);
      goto joined_r0x0001007d4a83;
    }
    break;
  default:
    goto switchD_1007d3cea_default;
  }
  QArrayData::deallocate(pQVar7,2,8);
switchD_1007d3cea_default:
  if (lVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

