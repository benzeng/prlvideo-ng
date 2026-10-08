
undefined8 * FUN_100124a60(undefined8 *param_1,QString *param_2,QString *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  QString local_78;
  QString local_70;
  undefined8 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return param_1;
  }
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_60,uVar2);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_100124b4d:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100124b4d;
    }
    if (local_40 == 0) goto LAB_100124c72;
  }
  if (local_50 != local_48) {
    do {
      uVar2 = *(undefined8 *)local_50;
      local_68 = uVar2;
      FUN_10018c2b0(uVar2);
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getLinkedSnapshotUuid();
      cVar1 = operator==(&local_70,param_2);
      if (cVar1 == '\0') {
        cVar1 = '\0';
      }
      else {
        FUN_10018c2b0(uVar2);
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getLinkedVmUuid();
        cVar1 = operator==(&local_78,param_3);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100124c13;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
      }
LAB_100124c13:
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100124c43;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_100124c43:
      if (cVar1 != '\0') {
        FUN_10012c6e0(param_1,&local_68);
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_100124c72:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

