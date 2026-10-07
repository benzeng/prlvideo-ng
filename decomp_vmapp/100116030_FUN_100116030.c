
void FUN_100116030(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *local_60;
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_28;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar4;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100116270) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      local_60 = *(int **)param_4[1];
      if (local_60 != (int *)0x0) {
        LOCK();
        *local_60 = *local_60 + 1;
        UNLOCK();
        local_50 = CONCAT71(local_50._1_7_,*local_60 != 0);
      }
      FUN_10002c480(param_1,&local_60,*(undefined4 *)param_4[2]);
      piVar6 = local_60;
      if (local_60 != (int *)0x0) {
        LOCK();
        *local_60 = *local_60 + -1;
        UNLOCK();
        local_50 = CONCAT71(local_50._1_7_,*local_60 != 0);
        if ((*local_60 == 0) && (local_60 != (int *)0x0)) {
          FUN_100031ed0(local_60);
          operator_delete(piVar6);
        }
      }
    }
    else if (param_3 == 1) {
      uVar3 = *(undefined4 *)param_4[1];
      uVar1 = *(undefined1 *)param_4[2];
      uVar2 = *(undefined1 *)param_4[3];
      local_58 = *(QArrayData **)param_4[4];
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        UNLOCK();
        local_50 = CONCAT71(local_50._1_7_,*(int *)local_58 != 0);
      }
      FUN_100026d50(param_1,uVar3,uVar1,uVar2,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          local_50 = CONCAT71(local_50._1_7_,*(int *)local_58 != 0);
          if (*(int *)local_58 != 0) goto LAB_1001161b9;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
    else if (param_3 == 0) {
      puVar5 = (undefined8 *)param_4[1];
      local_50 = *puVar5;
      local_48 = puVar5[1];
      local_40 = *(undefined4 *)(puVar5 + 2);
      local_38 = (void *)0x0;
      local_30 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100ba9930,0,&local_38);
    }
  }
LAB_1001161b9:
  if (lVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

