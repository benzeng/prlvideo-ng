
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004470d0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = CNetLinkRateLimit::getGUIRxScale();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38);
  CNetLinkRateLimit::getRxBps();
  _pow(DAT_100e1e238,(double)iVar2);
  QSpinBox::setValue((int)uVar1);
  QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28));
  uVar3 = CNetLinkRateLimit::getRxLossPpm();
  QDoubleSpinBox::setValue((double)uVar3 * _DAT_100e1eaa8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48);
  CNetLinkRateLimit::getRxDelayMs();
  QSpinBox::setValue((int)uVar1);
  iVar2 = CNetLinkRateLimit::getGUITxScale();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x68);
  CNetLinkRateLimit::getTxBps();
  _pow(DAT_100e1e238,(double)iVar2);
  QSpinBox::setValue((int)uVar1);
  QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78));
  uVar3 = CNetLinkRateLimit::getTxLossPpm();
  QDoubleSpinBox::setValue((double)uVar3 * _DAT_100e1eaa8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x90);
  CNetLinkRateLimit::getTxDelayMs();
  QSpinBox::setValue((int)uVar1);
  return;
}

