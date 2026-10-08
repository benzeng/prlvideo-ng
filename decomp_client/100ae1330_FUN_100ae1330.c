
void FUN_100ae1330(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  QArrayData **ppQVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  QArrayData *pQVar12;
  bool bVar13;
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
  Data *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  Data *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined8 local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  undefined8 local_98;
  undefined1 local_8c [4];
  QArrayData *local_88;
  QArrayData **local_80;
  QArrayData **local_78;
  void *local_68;
  QArrayData **local_60;
  undefined8 *local_58;
  Data **local_50;
  QArrayData *local_48;
  undefined1 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar10 = plVar3[1];
    if ((pcVar5 == FUN_100ae2450) && (lVar10 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae24b0) && (lVar10 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae2510) && (lVar10 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae2570) && (lVar10 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae25d0) && (lVar10 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae2640) && (lVar10 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar3;
      lVar10 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae26a0) && (lVar10 == 0)) {
      *puVar2 = 6;
    }
    goto switchD_100ae14b7_default;
  }
  if (param_2 != 0) goto switchD_100ae14b7_default;
  switch(param_3) {
  case 0:
    local_c8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_c8 != 0);
    }
    local_c0 = *(QArrayData **)param_4[2];
    local_88 = (QArrayData *)0x0;
    local_80 = &local_c8;
    local_78 = &local_c0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,0,&local_88);
    if (*(int *)local_c8 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_c8;
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      bVar13 = *(int *)local_c8 != 0;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,bVar13);
joined_r0x000100ae15d6:
      if (bVar13) goto switchD_100ae14b7_default;
    }
    goto LAB_100ae15e3;
  case 1:
    local_b8 = *(QArrayData **)param_4[1];
    local_d0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_d0 != 0);
    }
    local_88 = (QArrayData *)0x0;
    local_80 = &local_b8;
    local_78 = &local_d0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,1,&local_88);
    if (*(int *)local_d0 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_d0;
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      bVar13 = *(int *)local_d0 != 0;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,bVar13);
      goto joined_r0x000100ae15d6;
    }
LAB_100ae15e3:
    uVar11 = 1;
    break;
  case 2:
    local_d8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_d8 + 1U) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_d8 != 0);
    }
    plVar3 = (long *)param_4[3];
    uVar4 = *(undefined8 *)param_4[2];
    local_e0 = (Data *)*plVar3;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 == 0) {
        QListData::detach((int)&local_e0);
        lVar7 = (long)*(int *)(local_e0 + 8);
        lVar10 = *plVar3;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_e0 + lVar7 * 8) &&
           (lVar9 = *(int *)(local_e0 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)(local_e0 + 0xc))) {
          _memcpy(local_e0 + lVar7 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar9 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_e0 != 0);
      }
    }
    local_68 = (void *)0x0;
    local_60 = &local_d8;
    local_58 = &local_b0;
    local_50 = &local_e0;
    local_b0 = uVar4;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,2,&local_68);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_e0 != 0);
        if (*(int *)local_e0 != 0) goto LAB_100ae1df8;
      }
      QListData::dispose(local_e0);
    }
LAB_100ae1df8:
    if (*(int *)local_d8 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_d8;
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_d8 != 0);
      if (*(int *)local_d8 != 0) goto switchD_100ae14b7_default;
    }
LAB_100ae1ecc:
    uVar11 = 2;
    break;
  case 3:
    local_e8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_e8 != 0);
    }
    local_a8 = *(QArrayData **)param_4[2];
    local_88 = (QArrayData *)0x0;
    local_80 = &local_e8;
    local_78 = &local_a8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,3,&local_88);
    if (*(int *)local_e8 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_e8;
    if (*(int *)local_e8 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_e8 != 0);
    if (*(int *)local_e8 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 4:
    local_f0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f0 + 1U) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_f0 != 0);
    }
    local_98 = *(undefined8 *)param_4[2];
    local_a0 = *(Data **)param_4[3];
    local_68 = (void *)0x0;
    local_60 = &local_f0;
    local_58 = &local_98;
    local_50 = &local_a0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,4,&local_68);
    if (*(int *)local_f0 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_f0;
    if (*(int *)local_f0 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_f0 = *(int *)local_f0 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_f0 != 0);
    if (*(int *)local_f0 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 5:
    local_48 = *(QArrayData **)param_4[1];
    local_8c[0] = *(undefined1 *)param_4[2];
    local_88 = (QArrayData *)0x0;
    local_80 = &local_48;
    local_78 = (QArrayData **)local_8c;
    ppQVar6 = &local_88;
    iVar8 = 5;
    goto LAB_100ae1859;
  case 6:
    local_8c = *(undefined1 (*) [4])param_4[1];
    local_48 = (QArrayData *)0x0;
    local_40 = local_8c;
    ppQVar6 = &local_48;
    iVar8 = 6;
LAB_100ae1859:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,iVar8,ppQVar6);
    goto switchD_100ae14b7_default;
  case 7:
    local_f8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f8 + 1U) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_f8 != 0);
    }
    local_100 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_100 != 0);
    }
    plVar3 = (long *)param_4[4];
    uVar4 = *(undefined8 *)param_4[3];
    local_108 = (Data *)*plVar3;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 == 0) {
        QListData::detach((int)&local_108);
        lVar7 = (long)*(int *)(local_108 + 8);
        lVar10 = *plVar3;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_108 + lVar7 * 8) &&
           (lVar9 = *(int *)(local_108 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)(local_108 + 0xc))) {
          _memcpy(local_108 + lVar7 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar9 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + 1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_108 != 0);
      }
    }
    FUN_100aceb20(param_1,&local_f8,&local_100,uVar4,&local_108);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_108 != 0);
        if (*(int *)local_108 != 0) goto LAB_100ae1e84;
      }
      QListData::dispose(local_108);
    }
LAB_100ae1e84:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_100 != 0);
        if (*(int *)local_100 != 0) goto LAB_100ae1eba;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100ae1eba:
    if (*(int *)local_f8 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_f8;
    if (*(int *)local_f8 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_f8 != 0);
    if (*(int *)local_f8 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 8:
    local_110 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_110 != 0);
    }
    local_118 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_118 != 0);
    }
    FUN_100acecb0(param_1,&local_110,&local_118,*(undefined8 *)param_4[3]);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_118 != 0);
        if (*(int *)local_118 != 0) goto LAB_100ae19b6;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_100ae19b6:
    if (*(int *)local_110 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_110;
    if (*(int *)local_110 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_110 = *(int *)local_110 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_110 != 0);
    if (*(int *)local_110 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 9:
    local_120 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_120 != 0);
    }
    local_128 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_128 != 0);
    }
    FUN_100aced80(param_1,&local_120,&local_128,*(undefined8 *)param_4[3],*(undefined8 *)param_4[4])
    ;
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_128 != 0);
        if (*(int *)local_128 != 0) goto LAB_100ae1a8b;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100ae1a8b:
    if (*(int *)local_120 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_120;
    if (*(int *)local_120 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_120 = *(int *)local_120 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_120 != 0);
    if (*(int *)local_120 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 10:
    uVar4 = *(undefined8 *)param_4[1];
    local_130 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_130 != 0);
    }
    local_138 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_138 != 0);
    }
    FUN_100ace7d0(param_1,uVar4,&local_130,&local_138);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_138 != 0);
        if (*(int *)local_138 != 0) goto LAB_100ae1b59;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_100ae1b59:
    if (*(int *)local_130 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_130;
    if (*(int *)local_130 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_130 = *(int *)local_130 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_130 != 0);
    if (*(int *)local_130 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 0xb:
    local_140 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_140 + 1U) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_140 != 0);
    }
    FUN_100ace8a0(param_1,&local_140,*(undefined8 *)param_4[2],*(undefined1 *)param_4[3]);
    if (*(int *)local_140 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_140;
    if (*(int *)local_140 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_140 = *(int *)local_140 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_140 != 0);
    if (*(int *)local_140 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 0xc:
    local_148 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_148 + 1U) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_148 != 0);
    }
    FUN_100ace8f0(param_1,&local_148,*(undefined4 *)param_4[2]);
    if (*(int *)local_148 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_148;
    if (*(int *)local_148 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_148 = *(int *)local_148 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_148 != 0);
    if (*(int *)local_148 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 0xd:
    uVar4 = *(undefined8 *)param_4[1];
    local_150 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_150 + 1U) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_150 != 0);
    }
    local_158 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_158 + 1U) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + 1;
      UNLOCK();
      local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_158 != 0);
    }
    FUN_100ace930(param_1,uVar4,&local_150,&local_158);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        UNLOCK();
        local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_158 != 0);
        if (*(int *)local_158 != 0) goto LAB_100ae1d11;
      }
      QArrayData::deallocate(local_158,1,8);
    }
LAB_100ae1d11:
    if (*(int *)local_150 == -1) goto switchD_100ae14b7_default;
    pQVar12 = local_150;
    if (*(int *)local_150 == 0) goto LAB_100ae1ecc;
    LOCK();
    *(int *)local_150 = *(int *)local_150 + -1;
    UNLOCK();
    local_48 = (QArrayData *)CONCAT71(local_48._1_7_,*(int *)local_150 != 0);
    if (*(int *)local_150 != 0) goto switchD_100ae14b7_default;
    uVar11 = 2;
    break;
  case 0xe:
    FUN_100acea00(param_1,*(undefined8 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  default:
    goto switchD_100ae14b7_default;
  }
  QArrayData::deallocate(pQVar12,uVar11,8);
switchD_100ae14b7_default:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

