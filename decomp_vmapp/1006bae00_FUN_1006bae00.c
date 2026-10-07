
undefined8 FUN_1006bae00(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  QHostAddress local_58 [8];
  QHostAddress local_50 [8];
  QHostAddress local_48 [8];
  QHostAddress local_40 [8];
  QHostAddress local_38 [8];
  
  lVar5 = CVirtualNetwork::getHostOnlyNetwork();
  uVar9 = 0x80004200;
  if (lVar5 != 0) {
    CHostOnlyNetwork::getIPNetMask();
    uVar2 = QHostAddress::toIPv4Address();
    QHostAddress::~QHostAddress(local_38);
    uVar9 = 0x80004201;
    if ((uVar2 & 0x1000001f) == 0x10000000) {
      if (uVar2 != 0) {
        bVar6 = false;
        uVar7 = uVar2;
        do {
          if ((bVar6) && ((uVar7 & 1) == 0)) {
            return 0x80004201;
          }
          if ((uVar7 & 1) != 0) {
            bVar6 = true;
          }
          uVar7 = uVar7 >> 1;
        } while (uVar7 != 0);
      }
      CHostOnlyNetwork::getHostIPAddress();
      uVar7 = QHostAddress::toIPv4Address();
      QHostAddress::~QHostAddress(local_40);
      uVar8 = ~uVar2;
      uVar9 = 0x80004202;
      if (((uVar7 & uVar8) != uVar8) && ((uVar7 & uVar8) != 0)) {
        CHostOnlyNetwork::getDhcpIPAddress();
        uVar7 = QHostAddress::toIPv4Address();
        QHostAddress::~QHostAddress(local_48);
        uVar9 = 0x80004203;
        if (((uVar7 & uVar8) != uVar8) && ((uVar7 & uVar8) != 0)) {
          lVar5 = CHostOnlyNetwork::getDHCPServer();
          uVar9 = 0;
          if ((lVar5 != 0) && (cVar1 = CDHCPServer::isEnabled(), cVar1 != '\0')) {
            CDHCPServer::getIPScopeStart();
            uVar3 = QHostAddress::toIPv4Address();
            QHostAddress::~QHostAddress(local_50);
            CDHCPServer::getIPScopeEnd();
            uVar4 = QHostAddress::toIPv4Address();
            QHostAddress::~QHostAddress(local_58);
            uVar7 = uVar3;
            if (((uVar3 & uVar8) == uVar8) ||
               ((((uVar3 & uVar8) == 0 || (uVar7 = uVar4, (uVar4 & uVar8) == uVar8)) ||
                ((uVar4 & uVar8) == 0)))) {
              FUN_1008e3970("","prl_net",0,"Address %08x:%08x is either 0 or broadcast",uVar7,uVar2)
              ;
              uVar9 = 0x80004204;
            }
            else if ((uVar2 & (uVar4 ^ uVar3)) == 0) {
              if ((int)(uVar4 - uVar3) < 0xf) {
                FUN_1008e3970("","prl_net",0,
                              "DHCP scope must contain at least 16 addresses %08x:%08x",uVar3,uVar4)
                ;
                uVar9 = 0x80004206;
              }
            }
            else {
              FUN_1008e3970("","prl_net",0,
                            "Addresses %08x:%08x (mask %08x) don\'t belong to the same subnet",uVar3
                            ,uVar4,uVar2);
              uVar9 = 0x80004205;
            }
          }
        }
      }
    }
  }
  return uVar9;
}

