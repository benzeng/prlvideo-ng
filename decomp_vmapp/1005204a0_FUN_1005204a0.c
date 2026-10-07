
void FUN_1005204a0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  CVmEventParameter *pCVar3;
  long *plVar4;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_21;
  
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar3 = operator_new(0xd0);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_58,&local_60,*param_2,0,10,0x20);
  local_68 = (QArrayData *)QString::fromAscii_helper("vmcfg_time_shift",0x10);
  CVmEventParameter::CVmEventParameter(pCVar3,0x10,&local_58);
  local_50 = pCVar3;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100520588;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100520588:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005205ba;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005205ba:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005205ea;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005205ea:
  uVar2 = DAT_1011c3650;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_70 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_70 = plVar4;
  }
  FUN_100063770(uVar2,0x186bc,0,&local_48,0xbbb,&local_70);
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return;
}

