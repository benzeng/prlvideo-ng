
void FUN_100832aa0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 < 2) {
    if (param_2 == 0) {
      switch(param_3) {
      case 0:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 0;
        break;
      case 1:
        local_39 = *(undefined1 *)param_4[1];
        iVar7 = 1;
        break;
      case 2:
        FUN_10036a3c0();
        return;
      case 3:
        puVar5 = (undefined4 *)param_4[1];
LAB_100832c37:
        FUN_10036a330(param_1,*(undefined1 *)puVar5);
        return;
      default:
        goto switchD_100832adb_default;
      }
      local_30 = &local_39;
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220def0,iVar7,&local_38);
    }
    else if (param_2 == 1) {
      puVar5 = (undefined4 *)*param_4;
      if (param_3 == 2) {
        uVar4 = FUN_10036a3b0();
        *puVar5 = uVar4;
      }
      else if (param_3 == 1) {
        uVar3 = FUN_10036a3e0();
        *(undefined1 *)puVar5 = uVar3;
      }
      else if (param_3 == 0) {
        uVar3 = FUN_10036a390();
        *(undefined1 *)puVar5 = uVar3;
      }
    }
  }
  else if (param_2 == 2) {
    puVar5 = (undefined4 *)*param_4;
    if (param_3 == 2) {
      FUN_10036a3a0(param_1,*puVar5);
      return;
    }
    if (param_3 == 0) goto LAB_100832c37;
  }
  else if (param_2 == 10) {
    puVar5 = (undefined4 *)*param_4;
    plVar2 = (long *)param_4[1];
    pcVar6 = (code *)*plVar2;
    lVar8 = plVar2[1];
    if ((pcVar6 == FUN_100832c70) && (lVar8 == 0)) {
      *puVar5 = 0;
      pcVar6 = (code *)*plVar2;
      lVar8 = plVar2[1];
    }
    if ((pcVar6 == FUN_100832cc0) && (lVar8 == 0)) {
      *puVar5 = 1;
    }
  }
switchD_100832adb_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

