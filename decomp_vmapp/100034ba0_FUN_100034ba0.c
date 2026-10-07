
void FUN_100034ba0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x88);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Suspended m_tmpRevisionTable = %d");
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  param_2[1] = *(undefined8 *)(param_1 + 0x78);
  *param_2 = uVar1;
  QString::operator=((QString *)(param_2 + 2),(QString *)(param_1 + 0x80));
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x88);
  FUN_100037480(param_2 + 4,param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x70) = 0;
  QMutex::unlock();
  return;
}

