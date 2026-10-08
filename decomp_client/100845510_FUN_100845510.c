
void FUN_100845510(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
      if ((pcVar5 == FUN_100845670) && (lVar6 == 0)) {
        *puVar2 = 0;
        pcVar5 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar5 == FUN_1008456c0) && (lVar6 == 0)) {
        *puVar2 = 1;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 1) {
        local_40 = param_4[1];
        uStack_38 = param_4[2];
        local_30 = param_4[3];
        local_48 = (void *)0x0;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102221370,1,&local_48);
      }
      else if (param_3 == 0) {
        local_40 = param_4[1];
        uStack_38 = param_4[2];
        local_48 = (void *)0x0;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102221370,0,&local_48);
      }
    }
    goto LAB_10084565b;
  }
  if (param_3 == 0) {
    uVar4 = *(uint *)param_4[1];
joined_r0x0001008455f9:
    if (uVar4 < 2) {
      if (DAT_10227150c == 0) {
        DAT_10227150c = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10227150c;
      goto LAB_10084565b;
    }
  }
  else if (param_3 == 1) {
    uVar4 = *(int *)param_4[1] - 1;
    goto joined_r0x0001008455f9;
  }
  *(undefined4 *)*param_4 = 0xffffffff;
LAB_10084565b:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

