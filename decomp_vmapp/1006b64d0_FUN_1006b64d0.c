
QTypedArrayData<unsigned_short> *
FUN_1006b64d0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  QString this;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  this.field0_0x0 = operator_new(0xd8);
  CVirtualNetwork::CVirtualNetwork((CVirtualNetwork *)this.field0_0x0);
  FUN_1006bb0c0(&local_48,param_1,param_2);
  CVirtualNetwork::setNetworkID(this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b6552;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006b6552:
  FUN_1006bb0c0(&local_50,param_1,param_2);
  CVirtualNetwork::setDescription(this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b659f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006b659f:
  CVirtualNetwork::setNetworkType(this.field0_0x0,0);
  CVirtualNetwork::setVLANTag((ushort)this.field0_0x0);
  if ((*(int *)(*param_1 + 4) == 0) || (pQVar1 = (QArrayData *)*param_3, *(int *)(pQVar1 + 4) == 0))
  {
    QString::fromUtf8_helper((char *)&local_40,0xae67c2);
    QString::operator=((QString *)(this.field0_0x0 + 200),&local_40);
    if (*(int *)local_40.field0_0x0 == -1) {
      return this.field0_0x0;
    }
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return this.field0_0x0;
      }
      local_31 = 0;
    }
  }
  else {
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    CVirtualNetwork::setBoundCardMac(this);
    if (*(int *)pQVar1 == -1) {
      return this.field0_0x0;
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return this.field0_0x0;
      }
      local_31 = 0;
    }
  }
  QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  return this.field0_0x0;
}

