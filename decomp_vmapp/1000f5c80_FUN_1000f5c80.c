
void FUN_1000f5c80(long param_1,uint param_2)

{
  QMutex::lock();
  if (param_2 < 0x21) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"CMonitorDumpBuilder::Init(%u)",param_2);
    }
    *(short *)(param_1 + 8) = (short)param_2;
  }
  else {
    FUN_1008e3970("","vm",0,"CMonitorDumpBuilder::Init(%u, %u) - vcpu is out of range",param_2,0x20)
    ;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  QMutex::unlock();
  return;
}

