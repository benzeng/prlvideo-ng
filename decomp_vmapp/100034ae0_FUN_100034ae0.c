
undefined1 FUN_100034ae0(long param_1,long param_2)

{
  undefined1 uVar1;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x70) == param_2) {
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.cmd not CMD_NONE");
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.currentCmd not CMD_NONE");
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  QMutex::unlock();
  return uVar1;
}

