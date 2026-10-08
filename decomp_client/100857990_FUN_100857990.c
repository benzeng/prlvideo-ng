
void FUN_100857990(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  QString local_68;
  QString local_60;
  QString local_58;
  QVariant local_50;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 < 5) {
        param_4 = (undefined8 *)*param_4;
        switch(param_3) {
        case 0:
          FUN_100739760(param_1,*param_4);
          return;
        case 2:
          uVar4 = *(undefined4 *)param_4;
          goto LAB_100857bdc;
        case 3:
          goto switchD_100857a18_caseD_3;
        case 4:
          goto switchD_100857a18_caseD_4;
        }
        goto switchD_100857a18_caseD_1;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
      if ((pcVar6 == FUN_100857eb0) && (lVar8 == 0)) {
        *puVar2 = 0;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100857f00) && (lVar8 == 0)) {
        *puVar2 = 1;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100857f60) && (lVar8 == 0)) {
        *puVar2 = 2;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100857fb0) && (lVar8 == 0)) {
        *puVar2 = 3;
      }
    }
    goto switchD_1008579d3_default;
  }
  if (param_2 != 0) {
    if ((param_2 != 1) || (4 < param_3)) goto switchD_1008579d3_default;
    this = (QString *)*param_4;
    switch(param_3) {
    case 0:
      pQVar5 = (QTypedArrayData<unsigned_short> *)FUN_100739750(param_1);
      this->field0_0x0 = pQVar5;
      goto switchD_1008579d3_default;
    case 1:
      FUN_100739bc0(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) goto switchD_1008579d3_default;
      local_68.field0_0x0 = local_58.field0_0x0;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_58.field0_0x0 != 0);
        if (*(int *)local_58.field0_0x0 != 0) goto switchD_1008579d3_default;
      }
      break;
    case 2:
      uVar4 = FUN_100739e60(param_1);
      *(undefined4 *)&this->field0_0x0 = uVar4;
      goto switchD_1008579d3_default;
    case 3:
      FUN_100739eb0(&local_60,param_1);
      QString::operator=(this,&local_60);
      if (*(int *)local_60.field0_0x0 == -1) goto switchD_1008579d3_default;
      local_68.field0_0x0 = local_60.field0_0x0;
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        bVar9 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar9);
joined_r0x000100857d64:
        if (bVar9) goto switchD_1008579d3_default;
      }
      break;
    case 4:
      FUN_10073a130(&local_68,param_1);
      QString::operator=(this,&local_68);
      if (*(int *)local_68.field0_0x0 == -1) goto switchD_1008579d3_default;
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        bVar9 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar9);
        goto joined_r0x000100857d64;
      }
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    goto switchD_1008579d3_default;
  }
  switch(param_3) {
  case 0:
    local_30 = (undefined4 *)param_4[1];
    iVar7 = 0;
    break;
  case 1:
    local_3c = *(undefined4 *)param_4[1];
    local_30 = &local_3c;
    iVar7 = 1;
    break;
  case 2:
    local_30 = (undefined4 *)param_4[1];
    iVar7 = 2;
    break;
  case 3:
    local_30 = (undefined4 *)param_4[1];
    iVar7 = 3;
    break;
  case 4:
    param_4 = (undefined8 *)param_4[1];
switchD_100857a18_caseD_1:
    FUN_100739bf0(param_1,param_4);
    return;
  case 5:
    uVar4 = *(undefined4 *)param_4[1];
LAB_100857bdc:
    FUN_100739e70(param_1,uVar4);
    return;
  case 6:
    param_4 = (undefined8 *)param_4[1];
switchD_100857a18_caseD_3:
    FUN_100739ee0(param_1,param_4);
    return;
  case 7:
    param_4 = (undefined8 *)param_4[1];
switchD_100857a18_caseD_4:
    FUN_10073a190(param_1,param_4);
    return;
  case 8:
    FUN_10073a5b0(&local_50,param_1,*(undefined4 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_50);
    }
    QVariant::~QVariant(&local_50);
    goto switchD_1008579d3_default;
  case 9:
    FUN_10073a330(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                  *(undefined4 *)param_4[3]);
    return;
  default:
    goto switchD_1008579d3_default;
  }
  local_38 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227c30,iVar7,&local_38);
switchD_1008579d3_default:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

