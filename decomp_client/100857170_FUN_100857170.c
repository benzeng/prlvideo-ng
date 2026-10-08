
/* WARNING: Removing unreachable block (ram,0x00010085744e) */

void FUN_100857170(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  QString local_60;
  QString local_58;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      puVar8 = (undefined4 *)*param_4;
      if (param_3 == 2) {
        uVar3 = *puVar8;
        goto LAB_100857309;
      }
      if (param_3 == 1) goto LAB_100857417;
      if (param_3 == 0) goto LAB_1008573f9;
    }
    else if (param_2 == 10) {
      puVar8 = (undefined4 *)*param_4;
      plVar2 = (long *)param_4[1];
      pcVar4 = (code *)*plVar2;
      lVar6 = plVar2[1];
      if ((pcVar4 == FUN_100857520) && (lVar6 == 0)) {
        *puVar8 = 0;
        pcVar4 = (code *)*plVar2;
        lVar6 = plVar2[1];
      }
      if ((pcVar4 == FUN_100857570) && (lVar6 == 0)) {
        *puVar8 = 1;
        pcVar4 = (code *)*plVar2;
        lVar6 = plVar2[1];
      }
      if ((pcVar4 == FUN_1008575c0) && (lVar6 == 0)) {
        *puVar8 = 2;
      }
    }
    goto switchD_1008571b3_default;
  }
  if (param_2 != 0) {
    if (param_2 != 1) goto switchD_1008571b3_default;
    this = (QString *)*param_4;
    if (param_3 == 2) {
      uVar3 = FUN_100736590(param_1);
      *(undefined4 *)&this->field0_0x0 = uVar3;
      goto switchD_1008571b3_default;
    }
    if (param_3 == 1) {
      FUN_100736560(&local_60,param_1);
      QString::operator=(this,&local_60);
      if (*(int *)local_60.field0_0x0 == -1) goto switchD_1008571b3_default;
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        bVar9 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,bVar9);
joined_r0x000100857374:
        if (bVar9) goto switchD_1008571b3_default;
      }
    }
    else {
      if (param_3 != 0) goto switchD_1008571b3_default;
      FUN_100736530(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) goto switchD_1008571b3_default;
      local_60.field0_0x0 = local_58.field0_0x0;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        bVar9 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,bVar9);
        goto joined_r0x000100857374;
      }
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    goto switchD_1008571b3_default;
  }
  switch(param_3) {
  case 0:
    local_40 = (undefined4 *)param_4[1];
    iVar5 = 0;
    break;
  case 1:
    local_40 = (undefined4 *)param_4[1];
    iVar5 = 1;
    break;
  case 2:
    local_4c = *(undefined4 *)param_4[1];
    local_40 = &local_4c;
    iVar5 = 2;
    break;
  case 3:
    puVar8 = (undefined4 *)param_4[1];
LAB_1008573f9:
    FUN_1007365a0(param_1,puVar8);
    return;
  case 4:
    puVar8 = (undefined4 *)param_4[1];
LAB_100857417:
    FUN_1007365f0(param_1,puVar8);
    return;
  case 5:
    uVar3 = *(undefined4 *)param_4[1];
LAB_100857309:
    FUN_100736640(param_1,uVar3);
    return;
  case 6:
    uVar7 = *(undefined4 *)param_4[1];
    uVar3 = *(undefined4 *)param_4[2];
    goto LAB_10085746a;
  case 7:
    uVar7 = *(undefined4 *)param_4[1];
    uVar3 = 0;
    goto LAB_10085746a;
  case 8:
    uVar7 = 0;
    uVar3 = 0;
LAB_10085746a:
    FUN_100736680(param_1,uVar7,uVar3);
    return;
  default:
    goto switchD_1008571b3_default;
  }
  local_48 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022277e0,iVar5,&local_48);
switchD_1008571b3_default:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

