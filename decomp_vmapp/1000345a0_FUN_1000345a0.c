
void FUN_1000345a0(long param_1,long param_2)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x50);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Suspended m_tmpRevisionDefault = %d");
  }
  FUN_1000373c0(param_2,param_1 + 0x48);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x50);
  QString::operator=((QString *)(param_2 + 0x10),(QString *)(param_1 + 0x58));
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_1 + 0x60);
  FUN_100036f60(param_1 + 0x48);
  QMutex::unlock();
  return;
}

