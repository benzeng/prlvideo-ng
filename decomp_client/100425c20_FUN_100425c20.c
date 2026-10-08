
void FUN_100425c20(long param_1,int param_2)

{
  ulong uVar1;
  
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),0));
  QDoubleSpinBox::setValue((double)param_2);
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),0));
  if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
     (uVar1 = *(ulong *)(param_1 + 0x70), uVar1 != 0)) {
    QDoubleSpinBox::value();
    CVmHardDisk::setSize(uVar1);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
  return;
}

