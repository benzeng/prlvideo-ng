
void FUN_100865d00(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100866050) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008660a0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008660c0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100866120) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100866180) && (lVar6 == 0)) {
      *puVar2 = 4;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = (undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ee00,0,&local_38);
      break;
    case 1:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ee00,1,(void **)0x0);
      return;
    case 2:
      local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ee00,2,&local_38);
      break;
    case 3:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ee00,3,&local_38);
      break;
    case 4:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ee00,4,&local_38);
      break;
    case 5:
      FUN_1007e1430(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_1007e1bd0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1007e2ee0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 8:
      FUN_1007e3b80();
      return;
    case 9:
      FUN_1007e4030(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      uVar4 = FUN_1007e1310();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xb:
      uVar4 = FUN_1007e1740();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xc:
      uVar4 = FUN_1007e1f30();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xd:
      uVar4 = FUN_1007e33f0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xe:
      uVar4 = FUN_1007e3d50();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

