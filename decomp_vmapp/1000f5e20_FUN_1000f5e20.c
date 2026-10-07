
void FUN_1000f5e20(long param_1,uint param_2,void *param_3)

{
  QMutex::lock();
  if (param_2 < *(ushort *)(param_1 + 8)) {
    if (*(short *)((long)param_3 + 0x222) == 0) {
      FUN_1008e3970("","vm",0,"CMonitorDumpBuilder::SetContext(%u) - context is invalid",param_2);
    }
    else {
      _memcpy((void *)(param_1 + 0x28 + ((ulong)param_2 & 0xffff) * 0x5b8),param_3,0x5b8);
    }
  }
  else {
    FUN_1008e3970("","vm",0,"CMonitorDumpBuilder::SetContext(%u, %u) - vcpu is out of range",param_2
                 );
  }
  QMutex::unlock();
  return;
}

