
undefined4 FUN_1006c39a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0xa10314);
  QString::append(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c3a1b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006c3a1b:
  FUN_100640950(&local_30,&local_38,param_3);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c3a5b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006c3a5b:
  QString::toUtf8();
  uVar1 = FUN_1007d8970(local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c3aa7;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1006c3aa7:
  if (uVar1 == 0xffffffff) {
    piVar3 = ___error();
    DAT_1011bd254 = *piVar3;
    QString::toUtf8();
    FUN_1008e3970("","prl_net",0,"[startPrlNetService] Failed to execute %s",
                  local_48 + *(long *)(local_48 + 0x10));
    uVar5 = 0x80004001;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006c3b87;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    uVar1 = uVar1 >> 8 & 0xff;
    uVar5 = 0;
    if (uVar1 != 0) {
      puVar2 = (uint *)___error();
      *puVar2 = uVar1;
      piVar3 = ___error();
      DAT_1011bd254 = *piVar3;
      FUN_1008e3970("","prl_net",0,"[startPrlNetService] child process returned %d",uVar1);
      uVar4 = 0x80004001;
      if (uVar1 == 2) {
        uVar4 = 0x80000010;
      }
      uVar5 = 0x80000005;
      if (uVar1 != 1) {
        uVar5 = uVar4;
      }
    }
  }
LAB_1006c3b87:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar5;
}

