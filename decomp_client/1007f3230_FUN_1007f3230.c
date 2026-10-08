
void FUN_1007f3230(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long *local_48;
  undefined4 local_3c;
  void *local_38;
  long **local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if (((param_3 == 0) || (param_3 == 4)) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226ca68 == 0) {
        DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226ca68;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_1007f32d9_default;
  }
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007f3520) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    goto switchD_1007f32d9_default;
  }
  if (param_2 != 0) goto switchD_1007f32d9_default;
  switch(param_3) {
  case 0:
    local_48 = *(long **)param_4[1];
    if (local_48 != (long *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_3c = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_48;
    local_28 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8270,0,&local_38);
    if (local_48 == (long *)0x0) goto switchD_1007f32d9_default;
    LOCK();
    plVar4 = local_48 + 1;
    iVar3 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_48;
    break;
  case 1:
    FUN_10009b320(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
    return;
  case 2:
    puVar2 = (undefined8 *)param_4[2];
    local_50 = *(undefined4 *)(puVar2 + 3);
    local_58 = puVar2[2];
    local_68 = *puVar2;
    local_60 = puVar2[1];
    FUN_10009b400(param_1,param_4[1]);
    goto switchD_1007f32d9_default;
  case 3:
    FUN_10009b440();
    return;
  case 4:
    local_70 = *(long **)param_4[1];
    if (local_70 != (long *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_10009b7f0(param_1,&local_70,*(undefined4 *)param_4[2]);
    if (local_70 == (long *)0x0) goto switchD_1007f32d9_default;
    LOCK();
    plVar4 = local_70 + 1;
    iVar3 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_70;
    break;
  case 5:
    FUN_10009b5a0();
    return;
  case 6:
    FUN_10009be40();
    return;
  default:
    goto switchD_1007f32d9_default;
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar4 + 0x10))();
  }
switchD_1007f32d9_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

