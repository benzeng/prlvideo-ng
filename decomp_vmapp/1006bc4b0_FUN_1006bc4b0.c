
void FUN_1006bc4b0(CDHCPServer *param_1,long param_2)

{
  QString local_28;
  undefined1 local_1a;
  
  if (param_2 != 0) {
    local_28.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DHCPv6Server",0xc);
    QString::operator=((QString *)(param_2 + 0x48),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_1a = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_1a) goto LAB_1006bc518;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1006bc518:
  CHostOnlyNetwork::setDHCPv6ServerOrig(param_1);
  return;
}

