
void FUN_100856a50(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  long *plVar2;
  undefined4 uVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  QString local_58;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 < 5) {
        puVar8 = (undefined4 *)*param_4;
        switch(param_3) {
        case 0:
          goto switchD_100856adc_caseD_0;
        case 1:
          uVar3 = *puVar8;
          goto LAB_100856d54;
        case 2:
          uVar3 = *puVar8;
          goto LAB_100856d78;
        case 4:
          uVar3 = *puVar8;
          goto LAB_100856d98;
        }
      }
    }
    else if (param_2 == 10) {
      puVar8 = (undefined4 *)*param_4;
      plVar2 = (long *)param_4[1];
      pcVar5 = (code *)*plVar2;
      lVar7 = plVar2[1];
      if ((pcVar5 == FUN_100856e90) && (lVar7 == 0)) {
        *puVar8 = 0;
        pcVar5 = (code *)*plVar2;
        lVar7 = plVar2[1];
      }
      if ((pcVar5 == FUN_100856ee0) && (lVar7 == 0)) {
        *puVar8 = 1;
        pcVar5 = (code *)*plVar2;
        lVar7 = plVar2[1];
      }
      if ((pcVar5 == FUN_100856f40) && (lVar7 == 0)) {
        *puVar8 = 2;
        pcVar5 = (code *)*plVar2;
        lVar7 = plVar2[1];
      }
      if ((pcVar5 == FUN_100856fa0) && (lVar7 == 0)) {
        *puVar8 = 3;
        pcVar5 = (code *)*plVar2;
        lVar7 = plVar2[1];
      }
      if ((pcVar5 == FUN_100856ff0) && (lVar7 == 0)) {
        *puVar8 = 4;
      }
    }
    goto switchD_100856a93_default;
  }
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = (undefined4 *)param_4[1];
      iVar6 = 0;
      break;
    case 1:
      local_4c = *(undefined4 *)param_4[1];
      local_40 = &local_4c;
      iVar6 = 1;
      break;
    case 2:
      local_4c = *(undefined4 *)param_4[1];
      local_40 = &local_4c;
      iVar6 = 2;
      break;
    case 3:
      local_40 = (undefined4 *)param_4[1];
      iVar6 = 3;
      break;
    case 4:
      local_4c = *(undefined4 *)param_4[1];
      local_40 = &local_4c;
      iVar6 = 4;
      break;
    case 5:
      FUN_100735a10(param_1);
      return;
    case 6:
      puVar8 = (undefined4 *)param_4[1];
switchD_100856adc_caseD_0:
      FUN_1007358e0(param_1,puVar8);
      return;
    case 7:
      uVar3 = *(undefined4 *)param_4[1];
LAB_100856d54:
      FUN_100735930(param_1,uVar3);
      return;
    case 8:
      uVar3 = *(undefined4 *)param_4[1];
LAB_100856d78:
      FUN_100735970(param_1,uVar3);
      return;
    case 9:
      uVar3 = *(undefined4 *)param_4[1];
LAB_100856d98:
      FUN_1007359c0(param_1,uVar3);
      return;
    default:
      goto switchD_100856a93_default;
    }
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227560,iVar6,&local_48);
    goto switchD_100856a93_default;
  }
  if ((param_2 != 1) || (4 < param_3)) goto switchD_100856a93_default;
  this = (QString *)*param_4;
  switch(param_3) {
  case 0:
    FUN_100735860(&local_58,param_1);
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58.field0_0x0 != 0);
        if (*(int *)local_58.field0_0x0 != 0) goto switchD_100856a93_default;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    goto switchD_100856a93_default;
  case 1:
    uVar3 = FUN_100735890(param_1);
    break;
  case 2:
    uVar3 = FUN_1007358a0(param_1);
    break;
  case 3:
    pQVar4 = (QTypedArrayData<unsigned_short> *)FUN_1007358c0(param_1);
    this->field0_0x0 = pQVar4;
    goto switchD_100856a93_default;
  case 4:
    uVar3 = FUN_1007358b0(param_1);
  }
  *(undefined4 *)&this->field0_0x0 = uVar3;
switchD_100856a93_default:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

