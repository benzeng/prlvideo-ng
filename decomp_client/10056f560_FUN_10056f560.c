
QVariant * FUN_10056f560(QVariant *param_1)

{
  ushort uVar1;
  CPortForwardEntry local_d8 [192];
  
  FUN_10056f960(local_d8);
  uVar1 = CPortForwardEntry::getIncomingPort();
  QVariant::QVariant(param_1,(uint)uVar1);
  CPortForwardEntry::~CPortForwardEntry(local_d8);
  return param_1;
}

