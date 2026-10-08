
CIPReservations * FUN_100b41870(CHostOnlyNetwork *param_1)

{
  CDHCPServer *this;
  CIPReservations *this_00;
  CIPReservations *this_01;
  
  this_01 = (CIPReservations *)0x0;
  if (param_1 != (CHostOnlyNetwork *)0x0) {
    this = (CDHCPServer *)CVirtualNetwork::getHostOnlyNetwork();
    if (this == (CDHCPServer *)0x0) {
      this = operator_new(0xf8);
      CHostOnlyNetwork::CHostOnlyNetwork((CHostOnlyNetwork *)this);
      CVirtualNetwork::setHostOnlyNetwork(param_1);
    }
    this_00 = (CIPReservations *)CHostOnlyNetwork::getDHCPServer();
    if (this_00 == (CIPReservations *)0x0) {
      this_00 = operator_new(0xb8);
      CDHCPServer::CDHCPServer((CDHCPServer *)this_00);
      CHostOnlyNetwork::setDHCPServer(this);
    }
    this_01 = (CIPReservations *)CDHCPServer::getIPReservations();
    if (this_01 == (CIPReservations *)0x0) {
      this_01 = operator_new(0xa0);
      CIPReservations::CIPReservations(this_01);
      CDHCPServer::setIPReservations(this_00);
    }
  }
  return this_01;
}

