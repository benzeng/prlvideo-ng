
void FUN_100265d60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_100baf140;
  CVmParallelPort::CVmParallelPort((CVmParallelPort *)(param_1 + 1));
  *param_1 = &PTR_FUN_100baf190;
  QMutex::QMutex((QMutex *)(param_1 + 0x21));
  param_1[0x22] = 0;
  uVar1 = QString::fromAscii_helper("",0);
  param_1[0x23] = uVar1;
  return;
}

