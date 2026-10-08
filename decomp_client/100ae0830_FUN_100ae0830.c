
void FUN_100ae0830(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  QArrayData *pQVar7;
  bool bVar8;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_54;
  undefined1 local_50 [8];
  void *local_48;
  QArrayData **local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100ae0eb0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae0ed0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae0ef0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae0f50) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae0fb0) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae1010) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae1070) && (lVar6 == 0)) {
      *puVar2 = 6;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae10e0) && (lVar6 == 0)) {
      *puVar2 = 7;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae1100) && (lVar6 == 0)) {
      *puVar2 = 8;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae1150) && (lVar6 == 0)) {
      *puVar2 = 9;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae11a0) && (lVar6 == 0)) {
      *puVar2 = 10;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae11f0) && (lVar6 == 0)) {
      *puVar2 = 0xb;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100ae1210) && (lVar6 == 0)) {
      *puVar2 = 0xc;
    }
    goto switchD_100ae0aa9_default;
  }
  if (param_2 != 0) goto switchD_100ae0aa9_default;
  switch(param_3) {
  case 0:
    iVar4 = 0;
    goto LAB_100ae0dac;
  case 1:
    iVar4 = 1;
    goto LAB_100ae0dac;
  case 2:
    local_50._4_4_ = *(undefined4 *)param_4[1];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)(local_50 + 4);
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,2,&local_48);
    break;
  case 3:
    local_50._4_4_ = *(undefined4 *)param_4[2];
    local_50[0] = *(undefined1 *)param_4[1];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)local_50;
    local_38 = local_50 + 4;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,3,&local_48);
    break;
  case 4:
    local_50[4] = *(undefined1 *)param_4[1];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)(local_50 + 4);
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,4,&local_48);
    break;
  case 5:
    local_50[4] = *(undefined1 *)param_4[1];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)(local_50 + 4);
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,5,&local_48);
    break;
  case 6:
    local_50._4_4_ = *(undefined4 *)param_4[1];
    local_50._0_4_ = *(undefined4 *)param_4[2];
    local_54 = *(undefined4 *)param_4[3];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)(local_50 + 4);
    local_38 = local_50;
    local_30 = &local_54;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,6,&local_48);
    break;
  case 7:
    iVar4 = 7;
    goto LAB_100ae0dac;
  case 8:
    local_60 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_60;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,8,&local_48);
    if (*(int *)local_60 == -1) break;
    pQVar7 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) break;
    }
    goto LAB_100ae0d68;
  case 9:
    local_68 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_68;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,9,&local_48);
    if (*(int *)local_68 == -1) break;
    pQVar7 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      bVar8 = *(int *)local_68 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar8);
joined_r0x000100ae0d62:
      if (bVar8) break;
    }
    goto LAB_100ae0d68;
  case 10:
    local_70 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_70;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,10,&local_48);
    if (*(int *)local_70 == -1) break;
    pQVar7 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      bVar8 = *(int *)local_70 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar8);
      goto joined_r0x000100ae0d62;
    }
LAB_100ae0d68:
    QArrayData::deallocate(pQVar7,2,8);
    break;
  case 0xb:
    iVar4 = 0xb;
    goto LAB_100ae0dac;
  case 0xc:
    iVar4 = 0xc;
LAB_100ae0dac:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a530,iVar4,(void **)0x0)
    ;
    return;
  }
switchD_100ae0aa9_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

