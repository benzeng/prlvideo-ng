
void FUN_10085e7e0(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QVariant *this;
  undefined4 *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long_long lVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  QVariant local_60;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar7 = (code *)*plVar3;
    lVar9 = plVar3[1];
    if ((pcVar7 == FUN_10085ea50) && (lVar9 == 0)) {
      *puVar2 = 0;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_10085eaa0) && (lVar9 == 0)) {
      *puVar2 = 1;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_10085eb00) && (lVar9 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_10085e8f0_default;
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      switch(param_3) {
      case 0:
        local_40 = (undefined4 *)param_4[1];
        iVar8 = 0;
        break;
      case 1:
        local_4c = *(undefined4 *)param_4[1];
        local_40 = &local_4c;
        iVar8 = 1;
        break;
      case 2:
        local_4c = CONCAT31(local_4c._1_3_,*(undefined1 *)param_4[1]);
        local_40 = &local_4c;
        iVar8 = 2;
        break;
      case 3:
        FUN_100786550(param_1);
        return;
      case 4:
        FUN_100786590(param_1);
        return;
      default:
        goto switchD_10085e8f0_default;
      }
      local_48 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222b090,iVar8,&local_48);
    }
    goto switchD_10085e8f0_default;
  }
  if (4 < param_3) goto switchD_10085e8f0_default;
  this = (QVariant *)*param_4;
  switch(param_3) {
  case 0:
    iVar5 = FUN_1007864b0(param_1);
    (this->field0_0x0).field0_0x0.field5 = iVar5;
    break;
  case 1:
    FUN_1007864c0(&local_60,param_1);
    QVariant::operator=(this,&local_60);
    QVariant::~QVariant(&local_60);
    break;
  case 2:
    lVar6 = FUN_100786480(param_1);
    (this->field0_0x0).field0_0x0.field7 = lVar6;
    break;
  case 3:
    cVar4 = FUN_100786530(param_1);
    goto LAB_10085e95b;
  case 4:
    cVar4 = FUN_100786e40(param_1);
LAB_10085e95b:
    (this->field0_0x0).field0_0x0.field0 = cVar4;
  }
switchD_10085e8f0_default:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

