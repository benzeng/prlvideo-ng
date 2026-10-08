
void FUN_1008670a0(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 == 1) {
        FUN_10007eba0(param_1,*(undefined4 *)*param_4);
        return;
      }
      if (param_3 == 0) {
        FUN_10007eae0(param_1,*(undefined1 *)*param_4);
        return;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
      if ((pcVar6 == FUN_1008672b0) && (lVar8 == 0)) {
        *puVar2 = 0;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_1008672d0) && (lVar8 == 0)) {
        *puVar2 = 1;
        pcVar6 = (code *)*plVar3;
        lVar8 = plVar3[1];
      }
      if ((pcVar6 == FUN_100867330) && (lVar8 == 0)) {
        *puVar2 = 2;
      }
    }
    goto switchD_1008670de_default;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = (undefined4 *)*param_4;
      if (param_3 == 1) {
        uVar5 = FUN_10007ec40();
        *puVar2 = uVar5;
      }
      else if (param_3 == 0) {
        uVar4 = FUN_10007eb60();
        *(undefined1 *)puVar2 = uVar4;
      }
    }
    goto switchD_1008670de_default;
  }
  switch(param_3) {
  case 0:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222fa20,0,(void **)0x0);
    return;
  case 1:
    local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
    iVar7 = 1;
    break;
  case 2:
    local_3c = *(undefined4 *)param_4[1];
    iVar7 = 2;
    break;
  case 3:
    auVar9 = FUN_10007e9b0(param_1,param_4[1]);
    if ((undefined1 (*) [16])*param_4 != (undefined1 (*) [16])0x0) {
      *(undefined1 (*) [16])*param_4 = auVar9;
    }
  default:
    goto switchD_1008670de_default;
  }
  local_30 = &local_3c;
  local_38 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222fa20,iVar7,&local_38);
switchD_1008670de_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

