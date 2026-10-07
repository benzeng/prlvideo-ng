
void FUN_10005c750(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_68;
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
  local_50 = operator_new(0xd0);
  local_58 = (QArrayData *)*param_1;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("writing_file_string",0x13);
  CVmEventParameter::CVmEventParameter(local_50,1,&local_58);
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = local_50;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005c81b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10005c81b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005c84b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10005c84b:
  uVar2 = DAT_1011c3650;
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_68 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_100bef0d0;
    local_68 = plVar3;
  }
  FUN_100063770(uVar2,0x18c18,0,&local_48,0xbbb,&local_68);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  return;
}

