
void FUN_1000349c0(long param_1,undefined4 param_2,QString *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.cmd not CMD_NONE");
  }
  *(undefined4 *)(param_1 + 0x78) = param_2;
  QString::operator=((QString *)(param_1 + 0x80),param_3);
  plVar1 = (long *)(param_1 + 0x70);
  if (*plVar1 != 0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.currentCmd not CMD_NONE");
    }
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  }
  lVar2 = *plVar1;
  param_4[1] = *(long *)(param_1 + 0x78);
  *param_4 = lVar2;
  QString::operator=((QString *)(param_4 + 2),(QString *)(param_1 + 0x80));
  *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 0x88);
  FUN_100037480(param_4 + 4,param_1 + 0x90);
  *plVar1 = 0;
  QMutex::unlock();
  return;
}

