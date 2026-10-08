
void FUN_10082b360(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  QArrayData *pQVar8;
  bool bVar9;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 *local_80;
  QArrayData **local_78;
  QArrayData *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  QArrayData **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar6 == FUN_10082bfd0) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c030) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c090) && (lVar7 == 0)) {
      *puVar2 = 2;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c0f0) && (lVar7 == 0)) {
      *puVar2 = 3;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c150) && (lVar7 == 0)) {
      *puVar2 = 4;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c1b0) && (lVar7 == 0)) {
      *puVar2 = 5;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c210) && (lVar7 == 0)) {
      *puVar2 = 6;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c270) && (lVar7 == 0)) {
      *puVar2 = 7;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c2d0) && (lVar7 == 0)) {
      *puVar2 = 8;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c330) && (lVar7 == 0)) {
      *puVar2 = 9;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c380) && (lVar7 == 0)) {
      *puVar2 = 10;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c3e0) && (lVar7 == 0)) {
      *puVar2 = 0xb;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c430) && (lVar7 == 0)) {
      *puVar2 = 0xc;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c490) && (lVar7 == 0)) {
      *puVar2 = 0xd;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c4f0) && (lVar7 == 0)) {
      *puVar2 = 0xe;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c550) && (lVar7 == 0)) {
      *puVar2 = 0xf;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c5b0) && (lVar7 == 0)) {
      *puVar2 = 0x10;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c610) && (lVar7 == 0)) {
      *puVar2 = 0x11;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c670) && (lVar7 == 0)) {
      *puVar2 = 0x12;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_10082c6d0) && (lVar7 == 0)) {
      *puVar2 = 0x13;
    }
    goto switchD_10082b702_default;
  }
  if (param_2 != 0) goto switchD_10082b702_default;
  uVar5 = local_68._4_4_;
  switch(param_3) {
  case 0:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0,&local_88);
    break;
  case 1:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,1,&local_88);
    break;
  case 2:
    local_80 = (undefined8 *)param_4[1];
    puVar4 = (undefined8 *)param_4[2];
    local_68 = (QArrayData *)*puVar4;
    local_60 = puVar4[1];
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(puVar4 + 2));
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,2,&local_88);
    break;
  case 3:
    local_80 = (undefined8 *)param_4[1];
    puVar4 = (undefined8 *)param_4[2];
    local_68 = (QArrayData *)*puVar4;
    local_60 = puVar4[1];
    local_58 = puVar4[2];
    local_50 = *(undefined4 *)(puVar4 + 3);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,3,&local_88);
    break;
  case 4:
    local_80 = (undefined8 *)param_4[1];
    puVar4 = (undefined8 *)param_4[2];
    local_68 = (QArrayData *)*puVar4;
    local_60 = puVar4[1];
    local_58 = puVar4[2];
    local_50 = *(undefined4 *)(puVar4 + 3);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,4,&local_88);
    break;
  case 5:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,5,&local_88);
    break;
  case 6:
    local_80 = (undefined8 *)param_4[1];
    local_68 = *(QArrayData **)param_4[2];
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)((undefined8 *)param_4[2] + 1));
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,6,&local_88);
    break;
  case 7:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,7,&local_88);
    break;
  case 8:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,8,&local_88);
    break;
  case 9:
    local_60 = param_4[1];
    local_68 = (QArrayData *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,9,&local_68);
    break;
  case 10:
    local_40 = param_4[1];
    puVar4 = (undefined8 *)param_4[2];
    local_e8 = puVar4[2];
    local_f8 = *puVar4;
    local_f0 = puVar4[1];
    local_100 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_100 != 0);
    }
    local_48 = (void *)0x0;
    local_38 = &local_e0;
    local_30 = &local_100;
    local_e0 = local_f8;
    local_d8 = local_f0;
    local_d0 = local_e8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,10,&local_48);
    if (*(int *)local_100 == -1) break;
    pQVar8 = local_100;
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_100 != 0);
      if (*(int *)local_100 != 0) break;
    }
    goto LAB_10082bdfb;
  case 0xb:
    local_60 = param_4[1];
    local_68 = (QArrayData *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0xb,&local_68);
    break;
  case 0xc:
    local_80 = (undefined8 *)param_4[1];
    local_68 = *(QArrayData **)param_4[2];
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0xc,&local_88);
    break;
  case 0xd:
    local_80 = (undefined8 *)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0xd,&local_88);
    break;
  case 0xe:
    local_40 = param_4[1];
    local_c8 = *(undefined8 *)param_4[2];
    uStack_c0 = ((undefined8 *)param_4[2])[1];
    local_108 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_108 + 1U) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_108 != 0);
    }
    local_48 = (void *)0x0;
    local_38 = &local_c8;
    local_30 = &local_108;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0xe,&local_48);
    if (*(int *)local_108 == -1) break;
    pQVar8 = local_108;
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      bVar9 = *(int *)local_108 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar9);
joined_r0x00010082bc3f:
      if (bVar9) break;
    }
    goto LAB_10082bdfb;
  case 0xf:
    local_40 = param_4[1];
    local_b8 = *(undefined8 *)param_4[2];
    local_b0 = *(undefined4 *)((undefined8 *)param_4[2] + 1);
    local_110 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_110 + 1U) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_110 != 0);
    }
    local_48 = (void *)0x0;
    local_38 = &local_b8;
    local_30 = &local_110;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0xf,&local_48);
    if (*(int *)local_110 == -1) break;
    pQVar8 = local_110;
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      bVar9 = *(int *)local_110 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar9);
      goto joined_r0x00010082bc3f;
    }
    goto LAB_10082bdfb;
  case 0x10:
    local_40 = param_4[1];
    local_a8 = *(undefined8 *)param_4[2];
    local_a0 = *(undefined4 *)((undefined8 *)param_4[2] + 1);
    local_118 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_118 != 0);
    }
    local_48 = (void *)0x0;
    local_38 = &local_a8;
    local_30 = &local_118;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0x10,&local_48);
    if (*(int *)local_118 == -1) break;
    pQVar8 = local_118;
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      bVar9 = *(int *)local_118 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar9);
joined_r0x00010082bdf2:
      if (bVar9) break;
    }
    goto LAB_10082bdfb;
  case 0x11:
    local_80 = (undefined8 *)param_4[1];
    local_68 = *(QArrayData **)param_4[2];
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0x11,&local_88);
    break;
  case 0x12:
    local_80 = (undefined8 *)param_4[1];
    local_68 = *(QArrayData **)param_4[2];
    local_88 = (void *)0x0;
    local_78 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0x12,&local_88);
    break;
  case 0x13:
    local_98 = *(undefined8 *)param_4[1];
    uStack_90 = ((undefined8 *)param_4[1])[1];
    local_120 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_120 != 0);
    }
    local_88 = (void *)0x0;
    local_80 = &local_98;
    local_78 = &local_120;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,0x13,&local_88);
    if (*(int *)local_120 == -1) break;
    pQVar8 = local_120;
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      bVar9 = *(int *)local_120 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar9);
      goto joined_r0x00010082bdf2;
    }
LAB_10082bdfb:
    QArrayData::deallocate(pQVar8,1,8);
  }
switchD_10082b702_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

