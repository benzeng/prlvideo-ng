
uint FUN_100b4bb90(undefined4 param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  QHostAddress local_38 [8];
  QHostAddress local_30 [8];
  
  uVar2 = 0;
  if (param_2 != '\0') {
    CHostOnlyNetwork::getHostIPAddress();
    uVar1 = FUN_100b4bca0(param_1,1,local_30);
    QHostAddress::~QHostAddress(local_30);
    if ((int)uVar1 < 0) {
      FUN_100df99c0("","prl_net",0,
                    "[PrlNet] Failed to delete Parallels Adapter %d  IPv4 address: error 0x%08x",
                    param_1,uVar1);
    }
    CHostOnlyNetwork::getHostIP6Address();
    uVar2 = FUN_100b4bca0(param_1,1,local_38);
    QHostAddress::~QHostAddress(local_38);
    uVar2 = uVar2 | uVar1;
    if ((int)uVar2 < 0) {
      FUN_100df99c0("","prl_net",0,
                    "[PrlNet] Failed to delete Parallels Adapter %d IPv6 address: error 0x%08x",
                    param_1,uVar2);
    }
  }
  return uVar2;
}

