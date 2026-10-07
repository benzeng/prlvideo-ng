
void FUN_10062e550(ClientInfo *param_1,QString param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    CProblemReport::setClientInfo(param_1);
    return;
  }
  CBaseNode::toString(SUB81(&local_28,0),SUB81(param_2.field0_0x0,0));
  local_30 = (QArrayData *)QString::fromAscii_helper("ClientInfo.xml",0xe);
  FUN_10062dad0(param_1,&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062e5cf;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10062e5cf:
  (**(code **)(*(long *)param_2.field0_0x0 + 0x30))(param_2.field0_0x0);
  (**(code **)(*(long *)param_2.field0_0x0 + 0x18))(param_2.field0_0x0,0);
  pQVar1 = (QArrayData *)QString::fromAscii_helper("ClientInfo.xml",0xe);
  ClientInfo::setNameInArchive(param_2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062e63a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10062e63a:
  CProblemReport::setClientInfo(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

