
void FUN_1002607b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100baed40;
  QMutex::lock();
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xe7 | 0x10;
  *(byte *)((long)param_1 + 0x126) = *(byte *)((long)param_1 + 0x126) & 0xf0;
  (**(code **)(*(long *)param_1[1] + 0x28))((long *)param_1[1],param_1 + 0x22);
  (**(code **)(*(long *)param_1[0x21] + 0x28))();
  (**(code **)(*(long *)param_1[0x21] + 0x10))();
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x25));
  CVmSerialPort::~CVmSerialPort((CVmSerialPort *)(param_1 + 2));
  return;
}

