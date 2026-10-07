
undefined8 FUN_10008e3a0(void)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  undefined1 local_60 [24];
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  QString local_30;
  undefined1 local_21;
  
  iVar1 = FUN_1000a7060();
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("<br>",4);
  uVar3 = 1;
  if (iVar1 - 1U < 0x20) goto LAB_10008e603;
  FUN_1008e3970("","vm",0,"Invalid user configurations (cpu count is wrong)");
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  FUN_10006a060(local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("CPU count = ",0xc);
  FUN_10006a120(local_60,&local_68,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008e466;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10008e466:
  FUN_10006a860(local_60,iVar1,1);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("<b>hardware.cpu.number</b> = ",0x1d);
  QString::number((uint)&local_78,iVar1);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::append(&local_70);
  QString::append(&local_30);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008e4fd;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10008e4fd:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008e52d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10008e52d:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008e55a;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10008e55a:
  local_80 = (QArrayData *)QString::fromAscii_helper("Details",7);
  FUN_10006a690(local_60,&local_30,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008e5b0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10008e5b0:
  FUN_1000648b0(DAT_1011c3650,0x80000365,&local_48,local_60);
  FUN_10006a680(local_60);
  uVar3 = 0;
  if (local_48 != (void *)0x0) {
    if (pvStack_40 != local_48) {
      pvStack_40 = (void *)((~((long)pvStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU) +
                           (long)pvStack_40);
    }
    operator_delete(local_48);
  }
LAB_10008e603:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar3;
}

