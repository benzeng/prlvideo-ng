
void FUN_100425d00(double param_1,long param_2)

{
  char cVar1;
  
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x60),0));
  if (0.0 <= param_1) {
    cVar1 = (char)(int)(DAT_100e110f0 + param_1);
  }
  else {
    cVar1 = (char)(int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
            (char)(int)(DAT_100e110e0 + param_1);
  }
  CMemorySlider::setMemoryValue((int)*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x60),(bool)cVar1);
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x60),0));
  if (((*(long *)(param_2 + 0x68) != 0) && (*(int *)(*(long *)(param_2 + 0x68) + 4) != 0)) &&
     (*(ulong *)(param_2 + 0x70) != 0)) {
    CVmHardDisk::setSize(*(ulong *)(param_2 + 0x70));
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
  return;
}

