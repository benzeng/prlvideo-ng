
void FUN_10082a1b0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  QArrayData *local_50;
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
    pcVar7 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar7 == FUN_10082a6c0) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a6e0) && (lVar8 == 0)) {
      *puVar2 = 1;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a730) && (lVar8 == 0)) {
      *puVar2 = 2;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a790) && (lVar8 == 0)) {
      *puVar2 = 3;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a7f0) && (lVar8 == 0)) {
      *puVar2 = 4;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a850) && (lVar8 == 0)) {
      *puVar2 = 5;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,0,(void **)0x0);
      return;
    case 1:
      local_30 = (undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,1,&local_38);
      break;
    case 2:
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)param_4[1]);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)param_4[2]);
      local_38 = (void *)0x0;
      local_30 = &local_40;
      local_28 = &local_48;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,2,&local_38);
      break;
    case 3:
      local_28 = (undefined8 *)param_4[2];
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,3,&local_38);
      break;
    case 4:
      local_40 = *(undefined8 *)param_4[1];
      local_48 = *(undefined8 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      local_28 = &local_48;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,4,&local_38);
      break;
    case 5:
      local_30 = (undefined8 *)param_4[1];
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)param_4[2]);
      local_38 = (void *)0x0;
      local_28 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b8e0,5,&local_38);
      break;
    case 6:
      FUN_100326130();
      return;
    case 7:
      uVar4 = *(undefined8 *)param_4[1];
      uVar5 = ((undefined8 *)param_4[1])[1];
      local_50 = *(QArrayData **)param_4[2];
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
      }
      FUN_100327870(param_1,uVar4,uVar5,&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
          if (*(int *)local_50 != 0) break;
        }
        QArrayData::deallocate(local_50,1,8);
      }
      break;
    case 8:
      FUN_1003267d0(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_100326910(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      FUN_1003265e0(param_1,param_4[1]);
      break;
    case 0xb:
      FUN_1003266a0(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xc:
      FUN_1003276e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xd:
      FUN_1003265d0(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 0xe:
      FUN_100324300();
      return;
    case 0xf:
      FUN_100325ab0();
      return;
    case 0x10:
      uVar6 = FUN_100325fe0();
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar6;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

