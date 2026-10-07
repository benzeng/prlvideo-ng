
undefined8 * FUN_100504090(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  QString local_48;
  QArrayData *local_40;
  char local_38;
  undefined7 uStack_37;
  undefined1 local_29;
  
  FUN_100503d00(&local_40,param_3,0);
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1005040e5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005040e5:
  if (iVar1 == 0) {
    puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 1;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_10111d318;
      puVar4 = puVar3;
    }
    *param_1 = puVar4;
    return param_1;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_38,0xa3b87c);
  QString::append(&local_48);
  piVar2 = (int *)CONCAT71(uStack_37,local_38);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100504158;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_37,local_38),2,8);
  }
LAB_100504158:
  FUN_100503450(param_1,param_2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_38 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

