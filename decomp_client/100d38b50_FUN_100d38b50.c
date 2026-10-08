
undefined8 * FUN_100d38b50(undefined8 param_1,undefined8 *param_2,QString *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  cVar2 = operator==(&local_40,param_3);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d38bce;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d38bce:
  puVar3 = param_2;
  if (cVar2 == '\0') {
    iVar4 = 0;
    puVar3 = (undefined8 *)0x0;
    if (*(int *)(param_2[10] + 8) < *(int *)(param_2[10] + 0xc)) {
      do {
        puVar3 = (undefined8 *)FUN_100d3cd40(param_2 + 10,iVar4);
        uVar1 = *puVar3;
        local_48 = (QArrayData *)param_3->field0_0x0;
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        puVar3 = (undefined8 *)FUN_100d38b50(param_1,uVar1,&local_48);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d38c65;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_100d38c65:
        if (puVar3 != (undefined8 *)0x0) {
          return puVar3;
        }
        iVar4 = iVar4 + 1;
        puVar3 = (undefined8 *)0x0;
      } while (iVar4 < *(int *)(param_2[10] + 0xc) - *(int *)(param_2[10] + 8));
    }
  }
  return puVar3;
}

