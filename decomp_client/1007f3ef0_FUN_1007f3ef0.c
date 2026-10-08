
void FUN_1007f3ef0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 local_49;
  void *local_48;
  long **local_40;
  undefined4 *local_38;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar2;
  if (param_2 == 0xc) {
    if (((param_3 == 0) || (param_3 == 1)) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226ca68 == 0) {
        DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226ca68;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto LAB_1007f4155;
  }
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007f4250) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    goto LAB_1007f4155;
  }
  if (param_2 != 0) goto LAB_1007f4155;
  if (param_3 != 2) {
    if (param_3 == 1) {
      local_60 = *(long **)param_4[1];
      if (local_60 != (long *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_1000a3b70(param_1,&local_60,*(undefined4 *)param_4[2]);
      if (local_60 == (long *)0x0) goto LAB_1007f4155;
      LOCK();
      plVar4 = local_60 + 1;
      iVar3 = (int)*plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      plVar4 = local_60;
    }
    else {
      if (param_3 != 0) goto LAB_1007f4155;
      local_58 = *(long **)param_4[1];
      if (local_58 != (long *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_50 = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      local_40 = &local_58;
      local_38 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f86d0,0,&local_48);
      if (local_58 == (long *)0x0) goto LAB_1007f4155;
      LOCK();
      plVar4 = local_58 + 1;
      iVar3 = (int)*plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      plVar4 = local_58;
    }
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
    goto LAB_1007f4155;
  }
  uVar1 = *(undefined4 *)param_4[1];
  local_68 = *(QArrayData **)param_4[2];
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_49 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_70 = *(QArrayData **)param_4[3];
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_49 = *(int *)local_70 != 0;
    UNLOCK();
  }
  FUN_100095510(local_78,param_4[4]);
  FUN_1000a2280(param_1,uVar1,&local_68,&local_70,local_78);
  FUN_1000f1a40(local_78);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007f40a9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007f40a9:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007f4155;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007f4155:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

