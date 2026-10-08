
void FUN_100447250(long param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = QComboBox::currentIndex();
  lVar1 = *(longlong *)(param_1 + 0x68);
  QSpinBox::value();
  _pow(DAT_100e1e238,(double)iVar3);
  CNetLinkRateLimit::setRxBps(lVar1);
  CNetLinkRateLimit::setGUIRxScale((uint)*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  QDoubleSpinBox::value();
  CNetLinkRateLimit::setRxLossPpm((uint)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  QSpinBox::value();
  CNetLinkRateLimit::setRxDelayMs((uint)uVar2);
  iVar3 = QComboBox::currentIndex();
  lVar1 = *(longlong *)(param_1 + 0x68);
  QSpinBox::value();
  _pow(DAT_100e1e238,(double)iVar3);
  CNetLinkRateLimit::setTxBps(lVar1);
  CNetLinkRateLimit::setGUITxScale((uint)*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  QDoubleSpinBox::value();
  CNetLinkRateLimit::setTxLossPpm((uint)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  QSpinBox::value();
  CNetLinkRateLimit::setTxDelayMs((uint)uVar2);
  return;
}

