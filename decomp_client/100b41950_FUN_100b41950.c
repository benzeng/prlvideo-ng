
undefined8 FUN_100b41950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = CVirtualNetwork::getHostOnlyNetwork();
    if (lVar1 != 0) {
      lVar1 = CHostOnlyNetwork::getDHCPServer();
      if (lVar1 != 0) {
        uVar2 = CDHCPServer::getIPReservations();
        return uVar2;
      }
    }
  }
  return 0;
}

