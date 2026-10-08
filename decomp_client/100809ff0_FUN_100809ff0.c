
void FUN_100809ff0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_10080a240) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10080a290) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10080a2f0) && (lVar6 == 0)) {
      *puVar2 = 2;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021ff590,0,&local_38);
      break;
    case 1:
      local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021ff590,1,&local_38);
      break;
    case 2:
      local_40 = *(undefined8 *)param_4[1];
      local_48 = *(undefined8 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      local_28 = &local_48;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021ff590,2,&local_38);
      break;
    case 3:
      uVar4 = FUN_1001d51e0(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2],
                            *(undefined4 *)param_4[3]);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 4:
      uVar4 = FUN_1001d51e0(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2],0xffff);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 5:
      uVar4 = FUN_1001d51e0(param_1,*(undefined4 *)param_4[1],1,0xffff);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 6:
      uVar4 = FUN_1001d51e0(param_1,0,1,0xffff);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 7:
      FUN_1001d5260();
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

