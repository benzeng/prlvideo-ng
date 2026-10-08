
void FUN_1007f6c00(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  QArrayData *pQVar7;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_69;
  void *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  QArrayData **local_50;
  QArrayData **local_48;
  void *local_38;
  undefined8 *local_30;
  QArrayData **local_28;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar2;
  if (param_2 == 10) {
    puVar3 = (undefined4 *)*param_4;
    plVar4 = (long *)param_4[1];
    pcVar5 = (code *)*plVar4;
    lVar6 = plVar4[1];
    if ((pcVar5 == FUN_1007f71c0) && (lVar6 == 0)) {
      *puVar3 = 0;
      pcVar5 = (code *)*plVar4;
      lVar6 = plVar4[1];
    }
    if ((pcVar5 == FUN_1007f7230) && (lVar6 == 0)) {
      *puVar3 = 1;
    }
    goto switchD_1007f6caa_default;
  }
  if (param_2 != 0) goto switchD_1007f6caa_default;
  switch(param_3) {
  case 0:
    local_80 = *(undefined8 *)param_4[1];
    local_84 = *(undefined4 *)param_4[2];
    local_90 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_69 = *(int *)local_90 != 0;
      UNLOCK();
    }
    local_98 = *(QArrayData **)param_4[4];
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_69 = *(int *)local_98 != 0;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_80;
    local_58 = &local_84;
    local_50 = &local_90;
    local_48 = &local_98;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8ae0,0,&local_68);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_69 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1007f6d74;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1007f6d74:
    if (*(int *)local_90 == -1) goto switchD_1007f6caa_default;
    pQVar7 = local_90;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      iVar1 = *(int *)local_90;
      UNLOCK();
joined_r0x0001007f6fa6:
      local_69 = iVar1 != 0;
      if ((bool)local_69) goto switchD_1007f6caa_default;
    }
    break;
  case 1:
    local_78 = *(undefined8 *)param_4[1];
    local_a0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_69 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    local_38 = (void *)0x0;
    local_30 = &local_78;
    local_28 = &local_a0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8ae0,1,&local_38);
    if (*(int *)local_a0 == -1) goto switchD_1007f6caa_default;
    pQVar7 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar1 = *(int *)local_a0;
      UNLOCK();
      goto joined_r0x0001007f6fa6;
    }
    break;
  case 2:
    local_a8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_69 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    local_b0 = *(long **)param_4[2];
    if (local_b0 != (long *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_10003e190(param_1,&local_a8,&local_b0);
    if (local_b0 != (long *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (*(int *)local_a8 == -1) goto switchD_1007f6caa_default;
    pQVar7 = local_a8;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      iVar1 = *(int *)local_a8;
      UNLOCK();
      goto joined_r0x0001007f6fa6;
    }
    break;
  case 3:
    FUN_10003d710(param_1,*(undefined4 *)param_4[1]);
    return;
  case 4:
    local_b8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_b8 + 1U) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_69 = *(int *)local_b8 != 0;
      UNLOCK();
    }
    FUN_10003d770(param_1,&local_b8);
    if (*(int *)local_b8 == -1) goto switchD_1007f6caa_default;
    pQVar7 = local_b8;
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      iVar1 = *(int *)local_b8;
      UNLOCK();
      goto joined_r0x0001007f6fa6;
    }
    break;
  case 5:
    local_c0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_c0 + 1U) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_69 = *(int *)local_c0 != 0;
      UNLOCK();
    }
    FUN_10003d990(param_1,&local_c0);
    if (*(int *)local_c0 == -1) goto switchD_1007f6caa_default;
    pQVar7 = local_c0;
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      iVar1 = *(int *)local_c0;
      UNLOCK();
      goto joined_r0x0001007f6fa6;
    }
    break;
  default:
    goto switchD_1007f6caa_default;
  }
  QArrayData::deallocate(pQVar7,2,8);
switchD_1007f6caa_default:
  if (lVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

