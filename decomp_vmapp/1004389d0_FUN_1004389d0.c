
void FUN_1004389d0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  QArrayData *pQVar9;
  bool bVar10;
  QArrayData *local_120;
  long *local_118;
  QArrayData *local_110;
  long *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  long *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  void *local_98;
  QArrayData **local_90;
  void *local_88;
  QArrayData **local_80;
  QArrayData **local_78;
  QArrayData *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar2;
  if (param_2 == 10) {
    puVar3 = (undefined4 *)*param_4;
    plVar4 = (long *)param_4[1];
    pcVar7 = (code *)*plVar4;
    lVar8 = plVar4[1];
    if ((pcVar7 == FUN_100439570) && (lVar8 == 0)) {
      *puVar3 = 0;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_1004395c0) && (lVar8 == 0)) {
      *puVar3 = 1;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_100439610) && (lVar8 == 0)) {
      *puVar3 = 2;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_100439670) && (lVar8 == 0)) {
      *puVar3 = 3;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_100439700) && (lVar8 == 0)) {
      *puVar3 = 4;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_100439760) && (lVar8 == 0)) {
      *puVar3 = 5;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_1004397c0) && (lVar8 == 0)) {
      *puVar3 = 6;
      pcVar7 = (code *)*plVar4;
      lVar8 = plVar4[1];
    }
    if ((pcVar7 == FUN_100439860) && (lVar8 == 0)) {
      *puVar3 = 7;
    }
    goto switchD_100438b7a_default;
  }
  if (param_2 != 0) goto switchD_100438b7a_default;
  switch(param_3) {
  case 0:
    puVar5 = (undefined8 *)param_4[1];
    local_c8 = (QArrayData *)*puVar5;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_c8 != 0);
    }
    local_bc = *(undefined1 *)((long)puVar5 + 0xc);
    local_c0 = *(undefined4 *)(puVar5 + 1);
    local_98 = (void *)0x0;
    local_90 = &local_c8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,0,&local_98);
    if (*(int *)local_c8 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_c8;
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      bVar10 = *(int *)local_c8 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
joined_r0x000100438c9b:
      if (bVar10) goto switchD_100438b7a_default;
    }
    break;
  case 1:
    puVar5 = (undefined8 *)param_4[1];
    local_d8 = (QArrayData *)*puVar5;
    if (1 < *(int *)local_d8 + 1U) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_d8 != 0);
    }
    local_cc = *(undefined1 *)((long)puVar5 + 0xc);
    local_d0 = *(undefined4 *)(puVar5 + 1);
    local_98 = (void *)0x0;
    local_90 = &local_d8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,1,&local_98);
    if (*(int *)local_d8 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_d8;
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      bVar10 = *(int *)local_d8 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
      goto joined_r0x000100438c9b;
    }
    break;
  case 2:
    local_68 = *(QArrayData **)param_4[1];
    local_98 = (void *)0x0;
    local_90 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,2,&local_98);
    goto switchD_100438b7a_default;
  case 3:
    local_a0._0_4_ = *(undefined4 *)param_4[1];
    local_a4 = *(undefined4 *)param_4[2];
    local_a8 = *(undefined4 *)param_4[3];
    local_ac = *(undefined4 *)param_4[4];
    local_b0 = *(undefined4 *)param_4[5];
    local_b4 = *(undefined4 *)param_4[6];
    local_68 = (QArrayData *)0x0;
    local_60 = local_a0;
    local_58 = &local_a4;
    local_50 = &local_a8;
    local_48 = &local_ac;
    local_40 = &local_b0;
    local_38 = &local_b4;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,3,&local_68);
    goto switchD_100438b7a_default;
  case 4:
    local_a0._0_4_ = *(undefined4 *)param_4[2];
    local_68 = (QArrayData *)CONCAT44(local_68._4_4_,*(undefined4 *)param_4[1]);
    local_88 = (void *)0x0;
    local_80 = &local_68;
    local_78 = (QArrayData **)local_a0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,4,&local_88);
    goto switchD_100438b7a_default;
  case 5:
    local_a0._0_4_ = *(undefined4 *)param_4[1];
    local_68 = *(QArrayData **)param_4[2];
    local_88 = (void *)0x0;
    local_80 = (QArrayData **)local_a0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,5,&local_88);
    goto switchD_100438b7a_default;
  case 6:
    local_a0._0_4_ = *(undefined4 *)param_4[1];
    local_a4 = *(undefined4 *)param_4[2];
    local_a8 = *(undefined4 *)param_4[3];
    local_ac = *(undefined4 *)param_4[4];
    local_b0 = *(undefined4 *)param_4[5];
    local_b4 = *(undefined4 *)param_4[6];
    local_b8 = *(undefined4 *)param_4[7];
    local_68 = (QArrayData *)0x0;
    local_60 = local_a0;
    local_58 = &local_a4;
    local_50 = &local_a8;
    local_48 = &local_ac;
    local_40 = &local_b0;
    local_38 = &local_b4;
    local_30 = &local_b8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,6,&local_68);
    goto switchD_100438b7a_default;
  case 7:
    local_e0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_e0 + 1U) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_e0 != 0);
    }
    local_a0._4_4_ = *(undefined4 *)param_4[2];
    local_88 = (void *)0x0;
    local_80 = &local_e0;
    local_78 = (QArrayData **)(local_a0 + 4);
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,7,&local_88);
    if (*(int *)local_e0 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_e0;
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      bVar10 = *(int *)local_e0 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
joined_r0x000100439025:
      if (bVar10) goto switchD_100438b7a_default;
    }
    break;
  case 8:
    local_e8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_e8 != 0);
    }
    local_f0 = *(long **)param_4[2];
    if (local_f0 != (long *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_100432340(param_1,&local_e8,&local_f0);
    if (local_f0 != (long *)0x0) {
      LOCK();
      plVar4 = local_f0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_f0 + 0x10))();
      }
    }
    if (*(int *)local_e8 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_e8;
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      bVar10 = *(int *)local_e8 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
      goto joined_r0x000100439025;
    }
    break;
  case 9:
    local_f8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_f8 + 1U) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_f8 != 0);
    }
    FUN_1004329d0(param_1,&local_f8);
    if (*(int *)local_f8 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_f8;
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      bVar10 = *(int *)local_f8 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
joined_r0x000100439133:
      if (bVar10) goto switchD_100438b7a_default;
    }
    break;
  case 10:
    local_100 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_100 != 0);
    }
    local_108 = *(long **)param_4[2];
    if (local_108 != (long *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_100435790(param_1,&local_100,&local_108);
    if (local_108 != (long *)0x0) {
      LOCK();
      plVar4 = local_108 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_108 + 0x10))();
      }
    }
    if (*(int *)local_100 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_100;
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      bVar10 = *(int *)local_100 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
      goto joined_r0x000100439133;
    }
    break;
  case 0xb:
    uVar6 = *(undefined8 *)param_4[1];
    local_110 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_110 != 0);
    }
    uVar1 = *(undefined4 *)param_4[3];
    local_118 = *(long **)param_4[4];
    if (local_118 != (long *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    FUN_100435dc0(param_1,uVar6,&local_110,uVar1,&local_118);
    if (local_118 != (long *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
    if (*(int *)local_110 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_110;
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      bVar10 = *(int *)local_110 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
joined_r0x000100439241:
      if (bVar10) goto switchD_100438b7a_default;
    }
    break;
  case 0xc:
    local_120 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_120 != 0);
    }
    FUN_100433410(param_1,&local_120,*(undefined4 *)param_4[2]);
    if (*(int *)local_120 == -1) goto switchD_100438b7a_default;
    pQVar9 = local_120;
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      bVar10 = *(int *)local_120 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar10);
      goto joined_r0x000100439241;
    }
    break;
  default:
    goto switchD_100438b7a_default;
  }
  QArrayData::deallocate(pQVar9,2,8);
switchD_100438b7a_default:
  if (lVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

