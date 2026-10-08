
void FUN_100845920(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  QString local_58;
  QString local_50;
  void *local_48;
  undefined8 local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 == 0) {
        FUN_10061e1d0(param_1,*param_4);
        return;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
      if ((pcVar4 == FUN_100845c40) && (lVar6 == 0)) {
        *puVar2 = 0;
        pcVar4 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar4 == FUN_100845c90) && (lVar6 == 0)) {
        *puVar2 = 1;
        pcVar4 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar4 == FUN_100845cb0) && (lVar6 == 0)) {
        *puVar2 = 2;
        pcVar4 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar4 == FUN_100845d00) && (lVar6 == 0)) {
        *puVar2 = 3;
      }
    }
    goto switchD_100845963_default;
  }
  if (param_2 != 0) {
    if (param_2 != 1) goto switchD_100845963_default;
    this = (QString *)*param_4;
    if (param_3 == 1) {
      FUN_10061e3b0(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) goto switchD_100845963_default;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        bVar7 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,bVar7);
joined_r0x000100845b1c:
        if (bVar7) goto switchD_100845963_default;
      }
    }
    else {
      if (param_3 != 0) goto switchD_100845963_default;
      FUN_10061e1a0(&local_50,param_1);
      QString::operator=(this,&local_50);
      if (*(int *)local_50.field0_0x0 == -1) goto switchD_100845963_default;
      local_58.field0_0x0 = local_50.field0_0x0;
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        bVar7 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,bVar7);
        goto joined_r0x000100845b1c;
      }
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    goto switchD_100845963_default;
  }
  switch(param_3) {
  case 0:
    local_40 = param_4[1];
    iVar5 = 0;
    break;
  case 1:
    iVar5 = 1;
    goto LAB_100845b94;
  case 2:
    local_40 = param_4[1];
    iVar5 = 2;
    break;
  case 3:
    iVar5 = 3;
LAB_100845b94:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102221430,iVar5,(void **)0x0)
    ;
    return;
  default:
    goto switchD_100845963_default;
  }
  local_48 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102221430,iVar5,&local_48);
switchD_100845963_default:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

