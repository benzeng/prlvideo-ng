
void FUN_100272c10(void)

{
  long lVar1;
  int iVar2;
  
  iVar2 = FUN_1007da300("devices.net.dhcp.notify",1);
  if (iVar2 == 0) {
    FUN_1008e3970("","LocalDevices",0,"net: dhcp-notify is forcibly disabled via system-flag.");
    return;
  }
  FUN_1008e3970("","LocalDevices",0,"Notify guest to renew DHCP lease");
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x20) != 0) {
      FUN_1004c2f50(*(long *)(lVar1 + 0x20),2,0,0,1,1);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

