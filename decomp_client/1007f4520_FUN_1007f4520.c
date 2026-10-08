
void FUN_1007f4520(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  QArrayData *pQVar7;
  long local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_68;
  undefined1 local_61;
  undefined8 local_60;
  void *local_58;
  QArrayData **local_50;
  void *local_48;
  QArrayData **local_40;
  undefined8 *local_38;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar2;
  if (param_2 == 10) {
    puVar3 = (undefined4 *)*param_4;
    plVar4 = (long *)param_4[1];
    pcVar5 = (code *)*plVar4;
    lVar6 = plVar4[1];
    if ((pcVar5 == FUN_1007f4f30) && (lVar6 == 0)) {
      *puVar3 = 0;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f4f80) && (lVar6 == 0)) {
      *puVar3 = 1;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f4fd0) && (lVar6 == 0)) {
      *puVar3 = 2;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f5020) && (lVar6 == 0)) {
      *puVar3 = 3;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f5070) && (lVar6 == 0)) {
      *puVar3 = 4;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f50c0) && (lVar6 == 0)) {
      *puVar3 = 5;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f5110) && (lVar6 == 0)) {
      *puVar3 = 6;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f5170) && (lVar6 == 0)) {
      *puVar3 = 7;
    }
    goto switchD_1007f46d2_default;
  }
  if (param_2 != 0) goto switchD_1007f46d2_default;
  switch(param_3) {
  case 0:
    local_70 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_61 = *(int *)local_70 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_70;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,0,&local_58);
    if (*(int *)local_70 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar1 = *(int *)local_70;
      UNLOCK();
joined_r0x0001007f4a2a:
      local_61 = iVar1 != 0;
      if ((bool)local_61) goto switchD_1007f46d2_default;
    }
    break;
  case 1:
    local_78 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_61 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_78;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,1,&local_58);
    if (*(int *)local_78 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      iVar1 = *(int *)local_78;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 2:
    local_80 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_61 = *(int *)local_80 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_80;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,2,&local_58);
    if (*(int *)local_80 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      iVar1 = *(int *)local_80;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 3:
    local_88 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_61 = *(int *)local_88 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_88;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,3,&local_58);
    if (*(int *)local_88 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_88;
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      iVar1 = *(int *)local_88;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 4:
    local_90 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_61 = *(int *)local_90 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_90;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,4,&local_58);
    if (*(int *)local_90 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_90;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      iVar1 = *(int *)local_90;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 5:
    local_98 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_61 = *(int *)local_98 != 0;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = &local_98;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,5,&local_58);
    if (*(int *)local_98 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_98;
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      iVar1 = *(int *)local_98;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 6:
    local_a0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_61 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    local_68 = *(undefined4 *)param_4[2];
    local_48 = (void *)0x0;
    local_40 = &local_a0;
    local_38 = (undefined8 *)&local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,6,&local_48);
    if (*(int *)local_a0 == -1) goto switchD_1007f46d2_default;
    pQVar7 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar1 = *(int *)local_a0;
      UNLOCK();
      goto joined_r0x0001007f4a2a;
    }
    break;
  case 7:
    local_a8 = *(QArrayData **)param_4[1];
    if (local_a8 != (QArrayData *)0x0) {
      _PrlHandle_AddRef();
    }
    local_60 = *(undefined8 *)param_4[2];
    local_48 = (void *)0x0;
    local_40 = &local_a8;
    local_38 = &local_60;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f88c0,7,&local_48);
    if (local_a8 != (QArrayData *)0x0) {
      _PrlHandle_Free();
    }
    goto switchD_1007f46d2_default;
  case 8:
    FUN_1000a85e0(param_1,param_4[1]);
    return;
  case 9:
    local_b0 = *(long *)param_4[1];
    if (local_b0 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_1000a88c0(param_1,&local_b0,*(undefined8 *)param_4[2]);
    if (local_b0 != 0) {
      _PrlHandle_Free();
    }
    goto switchD_1007f46d2_default;
  case 10:
    FUN_1000a92d0(param_1,param_4[1]);
    return;
  case 0xb:
    FUN_1000a9590(param_1,*(undefined4 *)param_4[1],param_4[2]);
    return;
  case 0xc:
                    /* WARNING: Could not recover jumptable at 0x0001007f4ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x90))(param_1,*(undefined4 *)param_4[1],param_4[2]);
    return;
  case 0xd:
    FUN_1000a69b0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0xe:
    FUN_1000a6d20(param_1,*(undefined4 *)param_4[1],param_4[2]);
    return;
  case 0xf:
    FUN_1000a6e30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x10:
    FUN_1000a9580(param_1,param_4[1]);
    return;
  case 0x11:
    FUN_1000a9f40(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x12:
    FUN_1000a6f40(param_1,param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x13:
    FUN_1000a71e0(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3]);
    return;
  case 0x14:
    FUN_1000a73f0(param_1);
    return;
  default:
    goto switchD_1007f46d2_default;
  }
  QArrayData::deallocate(pQVar7,2,8);
switchD_1007f46d2_default:
  if (lVar2 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

