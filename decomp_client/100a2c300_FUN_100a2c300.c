
void FUN_100a2c300(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *local_e8;
  QArrayData *local_e0;
  long local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  QArrayData *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_89;
  void *local_88;
  QArrayData **local_80;
  undefined4 *local_78;
  long *local_70;
  void *local_68;
  long *local_60;
  QArrayData **local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  long local_30;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar3;
  if (param_2 == 10) {
    puVar4 = (undefined4 *)*param_4;
    plVar5 = (long *)param_4[1];
    pcVar7 = (code *)*plVar5;
    lVar8 = plVar5[1];
    if ((pcVar7 == FUN_100a2ca40) && (lVar8 == 0)) {
      *puVar4 = 0;
      pcVar7 = (code *)*plVar5;
      lVar8 = plVar5[1];
    }
    if ((pcVar7 == FUN_100a2caa0) && (lVar8 == 0)) {
      *puVar4 = 1;
    }
    goto switchD_100a2c3b5_default;
  }
  if (param_2 != 0) goto switchD_100a2c3b5_default;
  switch(param_3) {
  case 0:
    local_a0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_89 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)param_4[2];
    FUN_100a2ac20(&local_b8,param_4[3]);
    local_88 = (void *)0x0;
    local_80 = &local_a0;
    local_78 = &local_98;
    local_98 = uVar2;
    local_70 = &local_b8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102237c70,0,&local_88);
    if (local_a8 != 0) {
      lVar8 = *local_b0;
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(local_b8 + 8);
      **(long **)(local_b8 + 8) = lVar8;
      local_a8 = 0;
      plVar5 = local_b0;
      while (plVar5 != &local_b8) {
        plVar6 = (long *)plVar5[1];
        std::string::~string((string *)(plVar5 + 2));
        operator_delete(plVar5);
        plVar5 = plVar6;
      }
    }
    if (*(int *)local_a0 == -1) goto switchD_100a2c3b5_default;
    pQVar9 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar1 = *(int *)local_a0;
      UNLOCK();
joined_r0x000100a2c7c4:
      local_89 = iVar1 != 0;
      if ((bool)local_89) goto switchD_100a2c3b5_default;
    }
    break;
  case 1:
    local_c0 = *(long *)param_4[1];
    if (local_c0 != 0) {
      _PrlHandle_AddRef();
    }
    local_c8 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_89 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    local_50 = param_4[3];
    local_90 = *(undefined4 *)param_4[4];
    local_94 = *(undefined4 *)param_4[5];
    local_68 = (void *)0x0;
    local_60 = &local_c0;
    local_58 = &local_c8;
    local_48 = &local_90;
    local_40 = &local_94;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102237c70,1,&local_68);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_89 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100a2c5a6;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100a2c5a6:
    if (local_c0 != 0) {
      _PrlHandle_Free();
    }
    goto switchD_100a2c3b5_default;
  case 2:
    FUN_100a26550(param_1,param_4[1]);
    return;
  case 3:
    FUN_100a26a10(param_1,param_4[1]);
    return;
  case 4:
    FUN_100a26810(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
    return;
  case 5:
    local_d0 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_89 = *(int *)local_d0 != 0;
      UNLOCK();
    }
    FUN_100a27290(param_1,&local_d0,*(undefined4 *)param_4[2],param_4[3]);
    if (*(int *)local_d0 == -1) goto switchD_100a2c3b5_default;
    pQVar9 = local_d0;
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      iVar1 = *(int *)local_d0;
      UNLOCK();
      goto joined_r0x000100a2c7c4;
    }
    break;
  case 6:
    local_d8 = *(long *)param_4[1];
    if (local_d8 != 0) {
      _PrlHandle_AddRef();
    }
    local_e0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_e0 + 1U) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + 1;
      local_89 = *(int *)local_e0 != 0;
      UNLOCK();
    }
    FUN_100a28400(param_1,&local_d8,&local_e0,param_4[3],*(undefined4 *)param_4[4],
                  *(undefined4 *)param_4[5]);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_89 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100a2c752;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100a2c752:
    if (local_d8 != 0) {
      _PrlHandle_Free();
    }
    goto switchD_100a2c3b5_default;
  case 7:
    local_e8 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_89 = *(int *)local_e8 != 0;
      UNLOCK();
    }
    FUN_100a270b0(param_1,&local_e8,*(undefined4 *)param_4[2],param_4[3]);
    if (*(int *)local_e8 == -1) goto switchD_100a2c3b5_default;
    pQVar9 = local_e8;
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      iVar1 = *(int *)local_e8;
      UNLOCK();
      goto joined_r0x000100a2c7c4;
    }
    break;
  default:
    goto switchD_100a2c3b5_default;
  }
  QArrayData::deallocate(pQVar9,2,8);
switchD_100a2c3b5_default:
  if (lVar3 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

