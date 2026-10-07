
void FUN_1000f5f00(long param_1,uint param_2)

{
  QMutex::lock();
  if (param_2 < *(ushort *)(param_1 + 8)) {
    *(undefined2 *)(param_1 + 0x24a + (ulong)(param_2 & 0xffff) * 0x5b8) = 0;
  }
  else {
    FUN_1008e3970("","vm",0,"CMonitorDumpBuilder::ClearContext(%u) - vcpu is out of range",
                  param_2 & 0xffff);
  }
  QMutex::unlock();
  return;
}

