
void FUN_100832e40(QObject *param_1,int param_2,uint param_3,long *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  QString local_58;
  QString local_50;
  QString local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 == 3) {
        FUN_10036d270(param_1,*param_4);
        return;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
      if ((pcVar6 == FUN_100833310) && (lVar8 == 0)) {
        *puVar2 = 0;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100833360) && (lVar8 == 0)) {
        *puVar2 = 1;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_1008333b0) && (lVar8 == 0)) {
        *puVar2 = 2;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100833410) && (lVar8 == 0)) {
        *puVar2 = 3;
      }
    }
    goto switchD_100832e83_default;
  }
  if (param_2 != 0) {
    if ((param_2 != 1) || (3 < param_3)) goto switchD_100832e83_default;
    this = (QString *)*param_4;
    switch(param_3) {
    case 0:
      FUN_10036d1c0(&local_48,param_1);
      QString::operator=(this,&local_48);
      if (*(int *)local_48.field0_0x0 == -1) goto switchD_100832e83_default;
      local_58.field0_0x0 = local_48.field0_0x0;
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48.field0_0x0 != 0);
        if (*(int *)local_48.field0_0x0 != 0) goto switchD_100832e83_default;
      }
      break;
    case 1:
      FUN_10036bf70(&local_50,param_1);
      QString::operator=(this,&local_50);
      if (*(int *)local_50.field0_0x0 == -1) goto switchD_100832e83_default;
      local_58.field0_0x0 = local_50.field0_0x0;
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        bVar9 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar9);
joined_r0x00010083309d:
        if (bVar9) goto switchD_100832e83_default;
      }
      break;
    case 2:
      uVar4 = FUN_10036acc0(param_1);
      *(undefined4 *)&this->field0_0x0 = uVar4;
      goto switchD_100832e83_default;
    case 3:
      FUN_10036d240(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) goto switchD_100832e83_default;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        bVar9 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar9);
        goto joined_r0x00010083309d;
      }
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    goto switchD_100832e83_default;
  }
  switch(param_3) {
  case 0:
    local_30 = (undefined8 *)param_4[1];
    iVar7 = 0;
    break;
  case 1:
    local_30 = (undefined8 *)param_4[1];
    iVar7 = 1;
    break;
  case 2:
    local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
    local_30 = &local_40;
    iVar7 = 2;
    break;
  case 3:
    local_40 = *(undefined8 *)param_4[1];
    local_30 = &local_40;
    iVar7 = 3;
    break;
  case 4:
    FUN_10036d2b0(param_1);
    return;
  case 5:
    FUN_10036d2f0(param_1);
    return;
  case 6:
    FUN_10036d370(param_1,*(undefined4 *)param_4[1]);
    return;
  case 7:
    FUN_10036d200(param_1,*(undefined1 *)param_4[1]);
    return;
  case 8:
    uVar5 = FUN_10006bd30(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar5;
    }
    goto switchD_100832e83_default;
  case 9:
    FUN_10036dae0(param_1);
    return;
  case 10:
    uVar4 = FUN_10036db20(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
  default:
    goto switchD_100832e83_default;
  }
  local_38 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220dfb0,iVar7,&local_38);
switchD_100832e83_default:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

