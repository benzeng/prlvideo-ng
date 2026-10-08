
uint FUN_100b4b8f0(undefined4 param_1,char param_2,long param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  QHostAddress local_50 [8];
  QHostAddress local_48 [8];
  QHostAddress local_40 [8];
  QHostAddress local_38 [8];
  
  uVar3 = 0x80000003;
  if (param_3 != 0) {
    CHostOnlyNetwork::getHostIPAddress();
    CHostOnlyNetwork::getIPNetMask();
    uVar3 = FUN_100b4ba90(param_1,param_2,local_38,local_40);
    QHostAddress::~QHostAddress(local_40);
    QHostAddress::~QHostAddress(local_38);
    if ((int)uVar3 < 0) {
      FUN_100df99c0("","prl_net",0,
                    "[PrlNet] Failed to set up IPv4 address for Parallels Adapter %d: error 0x%08x",
                    param_1,uVar3);
    }
    uVar1 = CHostOnlyNetwork::isHostAssignIPv6();
    iVar4 = FUN_100b45f50("vnic.assign_ipv6",uVar1);
    cVar2 = FUN_100b45da0();
    if ((cVar2 == '\0') || (iVar4 == 0)) {
      if (param_2 == '\0') {
        FUN_100b511a0(param_1);
      }
    }
    else {
      CHostOnlyNetwork::getHostIP6Address();
      CHostOnlyNetwork::getIP6NetMask();
      uVar5 = FUN_100b4ba90(param_1,param_2,local_48,local_50);
      QHostAddress::~QHostAddress(local_50);
      uVar3 = uVar5 | uVar3;
      QHostAddress::~QHostAddress(local_48);
      if ((int)uVar3 < 0) {
        FUN_100df99c0("","prl_net",0,
                      "[PrlNet] Failed to set up IPv6 address for Parallels Adapter %d: error 0x%08x"
                      ,param_1,uVar3);
      }
    }
  }
  return uVar3;
}

