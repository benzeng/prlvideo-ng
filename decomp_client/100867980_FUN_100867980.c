
void FUN_100867980(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  QString local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar7 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar7 == FUN_100867e00) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100867e50) && (lVar8 == 0)) {
      *puVar2 = 1;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100867eb0) && (lVar8 == 0)) {
      *puVar2 = 2;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100867f10) && (lVar8 == 0)) {
      *puVar2 = 3;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100867f70) && (lVar8 == 0)) {
      *puVar2 = 4;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100867fd0) && (lVar8 == 0)) {
      *puVar2 = 5;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100868020) && (lVar8 == 0)) {
      *puVar2 = 6;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100868040) && (lVar8 == 0)) {
      *puVar2 = 7;
    }
    goto switchD_100867ba6_default;
  }
  if (param_2 != 1) {
    if (param_2 != 0) goto switchD_100867ba6_default;
    switch(param_3) {
    case 0:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_30 = &local_40;
      iVar6 = 0;
      break;
    case 1:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_30 = &local_40;
      iVar6 = 1;
      break;
    case 2:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_30 = &local_40;
      iVar6 = 2;
      break;
    case 3:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_30 = &local_40;
      iVar6 = 3;
      break;
    case 4:
      local_40 = *(undefined8 *)param_4[1];
      local_30 = &local_40;
      iVar6 = 4;
      break;
    case 5:
      local_30 = (undefined8 *)param_4[1];
      iVar6 = 5;
      break;
    case 6:
      iVar6 = 6;
      goto LAB_100867d43;
    case 7:
      iVar6 = 7;
LAB_100867d43:
      QMetaObject::activate
                (param_1,(QMetaObject *)&PTR_staticMetaObject_10222ff30,iVar6,(void **)0x0);
      return;
    case 8:
      FUN_1007eeea0(param_1);
      return;
    default:
      goto switchD_100867ba6_default;
    }
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ff30,iVar6,&local_38);
    goto switchD_100867ba6_default;
  }
  if (7 < param_3) goto switchD_100867ba6_default;
  this = (QString *)*param_4;
  switch(param_3) {
  case 0:
    FUN_1007ef670(&local_48,param_1);
    QString::operator=(this,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48.field0_0x0 != 0);
        if (*(int *)local_48.field0_0x0 != 0) break;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 1:
    pQVar5 = (QTypedArrayData<unsigned_short> *)FUN_1007ef6a0(param_1);
    goto LAB_100867c2b;
  case 2:
    pQVar5 = (QTypedArrayData<unsigned_short> *)FUN_1007ef6b0(param_1);
    goto LAB_100867c2b;
  case 3:
    uVar4 = FUN_1007ef720(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    break;
  case 4:
    uVar4 = FUN_1007ef730(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    break;
  case 5:
    uVar4 = FUN_1007ef740(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    break;
  case 6:
    uVar4 = FUN_1007ef750(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    break;
  case 7:
    pQVar5 = (QTypedArrayData<unsigned_short> *)FUN_1007ef770(param_1);
LAB_100867c2b:
    this->field0_0x0 = pQVar5;
  }
switchD_100867ba6_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

