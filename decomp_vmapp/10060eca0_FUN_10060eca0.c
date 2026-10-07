
undefined8 FUN_10060eca0(undefined8 param_1,QString *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  QString QVar3;
  char cVar4;
  undefined8 uVar5;
  QArrayData *local_40;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  cVar4 = QFile::rename(&local_28,param_2);
  QVar3.field0_0x0 = local_28.field0_0x0;
  uVar5 = 0;
  if (cVar4 != '\0') goto LAB_10060ee32;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar1 = *(long *)(local_30 + 0x10);
  pQVar2 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_19 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","crypt",0,"Error renaming %s to %s",local_30 + lVar1,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10060ed9c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10060ed9c:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10060edcc;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10060edcc:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10060edfc;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10060edfc:
  uVar5 = 0x80000081;
  if (*(int *)QVar3.field0_0x0 != -1) {
    if (*(int *)QVar3.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
      local_19 = *(int *)QVar3.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10060ee32;
    }
    QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
  }
LAB_10060ee32:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar5;
}

