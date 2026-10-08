
undefined8 FUN_10012f780(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_28;
  
  if (param_1 == 0) {
    pcVar4 = "(!)Error: Network is null";
    goto LAB_10012f875;
  }
  iVar2 = CVirtualNetwork::getNetworkType();
  if (iVar2 == 0) {
    CVirtualNetwork::getBoundCardMac();
    iVar2 = *(int *)(local_28 + 4);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_10012f7e3;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_10012f7e3:
    if (iVar2 != 0) {
      return 0;
    }
  }
  lVar3 = CVirtualNetwork::getHostOnlyNetwork();
  if (lVar3 == 0) {
    pcVar4 = "(!)Error: CHostOnlyNetwork object is null";
  }
  else {
    lVar3 = CHostOnlyNetwork::getParallelsAdapter();
    if (lVar3 != 0) {
      lVar3 = CHostOnlyNetwork::getNATServer();
      if ((lVar3 != 0) && (cVar1 = CNATServer::isEnabled(), cVar1 != '\0')) {
        return 2;
      }
      return 1;
    }
    pcVar4 = "(!)Error: CParallelsAdapter object is null";
  }
LAB_10012f875:
  FUN_100df99c0("","prl_client_app",0,pcVar4);
  return 3;
}

