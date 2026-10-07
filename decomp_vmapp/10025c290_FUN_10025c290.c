
void FUN_10025c290(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  CVmEventParameter *pCVar3;
  long *plVar4;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_29;
  
  QMutex::lock();
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar3 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_58,0),(bool)((char)*(undefined8 *)(param_1 + 8) + '\x10'));
  local_60 = (QArrayData *)QString::fromAscii_helper("vmcfg_vm_device_config_with_new_state",0x25);
  CVmEventParameter::CVmEventParameter(pCVar3,1,&local_58);
  local_50 = pCVar3;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025c366;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10025c366:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025c396;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10025c396:
  uVar2 = DAT_1011c3650;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_68 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_68 = plVar4;
  }
  FUN_100063770(uVar2,0x186bc,0,&local_48,0xbbb,&local_68);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_68 + 0x10))();
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
  QMutex::unlock();
  return;
}

