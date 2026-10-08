
void FUN_100837c20(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar2;
  if (param_2 == 10) {
    puVar3 = (undefined4 *)*param_4;
    plVar4 = (long *)param_4[1];
    pcVar5 = (code *)*plVar4;
    lVar7 = plVar4[1];
    if ((pcVar5 == FUN_100838050) && (lVar7 == 0)) {
      *puVar3 = 0;
      pcVar5 = (code *)*plVar4;
      lVar7 = plVar4[1];
    }
    if ((pcVar5 == FUN_1008380a0) && (lVar7 == 0)) {
      *puVar3 = 1;
      pcVar5 = (code *)*plVar4;
      lVar7 = plVar4[1];
    }
    if ((pcVar5 == FUN_1008380c0) && (lVar7 == 0)) {
      *puVar3 = 2;
    }
    goto switchD_100837cf5_default;
  }
  if (param_2 != 0) goto switchD_100837cf5_default;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210f10,0,&local_38);
    break;
  case 1:
    iVar6 = 1;
    goto LAB_100837d55;
  case 2:
    iVar6 = 2;
LAB_100837d55:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210f10,iVar6,(void **)0x0)
    ;
    return;
  case 3:
    FUN_100424040(param_1,*(undefined4 *)param_4[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x000100837d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x1b8))();
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000100837db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x1c0))();
    return;
  case 6:
    FUN_100424c30();
    return;
  case 7:
    FUN_100424f50(param_1,*(undefined4 *)param_4[1]);
    return;
  case 8:
    FUN_100425c20(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_100425d00(*(undefined8 *)param_4[1]);
    return;
  case 10:
    FUN_100425e30(param_1,*(undefined1 *)param_4[1]);
    return;
  case 0xb:
    uVar1 = *(undefined4 *)param_4[1];
    local_48 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48 != 0);
    }
    local_50 = *(QArrayData **)param_4[3];
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
    }
    FUN_100425e80(param_1,uVar1,&local_48,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) goto LAB_100837ec0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100837ec0:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) break;
      }
      QArrayData::deallocate(local_48,2,8);
    }
    break;
  case 0xc:
    FUN_1004227c0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0xd:
    FUN_1004266b0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xe:
    FUN_100423e30();
    return;
  case 0xf:
    FUN_100424000();
    return;
  case 0x10:
    FUN_1004268e0();
    return;
  case 0x11:
    FUN_100426900();
    return;
  }
switchD_100837cf5_default:
  if (lVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

