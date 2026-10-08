
void FUN_1007c8fc0(long param_1,int param_2)

{
  undefined2 uVar1;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_2 < 0) {
    return;
  }
  local_28 = (QArrayData *)
             QString::fromAscii_helper("lldb -s <(echo \'gdb-remote localhost:%1\')",0x29);
  FUN_10018c2b0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getDebugServer();
  uVar1 = CVmDebugServerInfo::getPort();
  QString::arg(&local_20,&local_28,uVar1,0,10,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007c9068;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007c9068:
  MacUtils::execInTerminal(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

