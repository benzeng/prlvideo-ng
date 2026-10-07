
void FUN_1007d2980(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  long *local_90;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  long **local_70;
  void *local_68;
  long **local_60;
  long **local_58;
  void *local_48;
  undefined8 *local_40;
  long **local_38;
  long **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
      if (*(int *)param_4[1] == 0) {
        uVar3 = FUN_1007d37d0();
        *(undefined4 *)*param_4 = uVar3;
        goto switchD_1007d2b92_default;
      }
    }
    *(undefined4 *)*param_4 = 0xffffffff;
    goto switchD_1007d2b92_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar7 = (long *)param_4[1];
    pcVar5 = (code *)*plVar7;
    lVar6 = plVar7[1];
    if ((pcVar5 == FUN_1007d3370) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d33c0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d3420) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d3470) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d34d0) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d3520) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d3580) && (lVar6 == 0)) {
      *puVar2 = 6;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d35e0) && (lVar6 == 0)) {
      *puVar2 = 7;
      pcVar5 = (code *)*plVar7;
      lVar6 = plVar7[1];
    }
    if ((pcVar5 == FUN_1007d3640) && (lVar6 == 0)) {
      *puVar2 = 8;
    }
    goto switchD_1007d2b92_default;
  }
  if (param_2 != 0) goto switchD_1007d2b92_default;
  switch(param_3) {
  case 0:
    local_b8 = *(long **)param_4[1];
    if (local_b8 != (long *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    local_78 = (void *)0x0;
    local_70 = &local_b8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,0,&local_78);
    if (local_b8 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_b8 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_b8;
    break;
  case 1:
    local_b0 = *(long **)param_4[1];
    local_c0 = *(long **)param_4[2];
    if (local_c0 != (long *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_b0;
    local_58 = &local_c0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,1,&local_68);
    if (local_c0 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_c0 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_c0;
    break;
  case 2:
    local_c8 = *(long **)param_4[1];
    if (local_c8 != (long *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    local_d0 = *(long **)param_4[2];
    if (local_d0 != (long *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_c8;
    local_58 = &local_d0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,2,&local_68);
    if (local_d0 != (long *)0x0) {
      LOCK();
      plVar7 = local_d0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    if (local_c8 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_c8 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_c8;
    break;
  case 3:
    local_a8 = *(undefined8 *)param_4[1];
    local_d8 = *(long **)param_4[2];
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    local_e0 = *(long **)param_4[3];
    if (local_e0 != (long *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_a8;
    local_38 = &local_d8;
    local_30 = &local_e0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,3,&local_48);
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar7 = local_e0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    if (local_d8 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_d8 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_d8;
    break;
  case 4:
    local_e8 = *(long **)param_4[1];
    if (local_e8 != (long *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
    }
    local_f0 = *(long **)param_4[2];
    if (local_f0 != (long *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_e8;
    local_58 = &local_f0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,4,&local_68);
    if (local_f0 != (long *)0x0) {
      LOCK();
      plVar7 = local_f0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_f0 + 0x10))();
      }
    }
    if (local_e8 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_e8 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_e8;
    break;
  case 5:
    local_a0 = *(undefined8 *)param_4[1];
    local_f8 = *(long **)param_4[2];
    if (local_f8 != (long *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    local_100 = *(long **)param_4[3];
    if (local_100 != (long *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_a0;
    local_38 = &local_f8;
    local_30 = &local_100;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,5,&local_48);
    if (local_100 != (long *)0x0) {
      LOCK();
      plVar7 = local_100 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (local_f8 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_f8 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_f8;
    break;
  case 6:
    local_94 = *(undefined4 *)param_4[1];
    local_78 = (void *)0x0;
    local_70 = (long **)&local_94;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,6,&local_78);
    goto switchD_1007d2b92_default;
  case 7:
    local_90 = *(long **)param_4[1];
    local_108 = *(long **)param_4[2];
    if (local_108 != (long *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    local_60 = &local_90;
    local_58 = &local_108;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,7,&local_68);
    if (local_108 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_108 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_108;
    break;
  case 8:
    local_80 = *(undefined8 *)param_4[1];
    local_84 = *(undefined4 *)param_4[2];
    local_110 = *(long **)param_4[3];
    if (local_110 != (long *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_80;
    local_38 = (long **)&local_84;
    local_30 = &local_110;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,8,&local_48);
    if (local_110 == (long *)0x0) goto switchD_1007d2b92_default;
    LOCK();
    plVar7 = local_110 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_110;
    break;
  default:
    goto switchD_1007d2b92_default;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar7 + 0x10))();
  }
switchD_1007d2b92_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

