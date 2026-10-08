
void FUN_1001c99c0(bool param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  QString local_28;
  undefined1 local_1a;
  
  FUN_100dfa5a0(param_1);
  PrlGui::setupLogging(param_1);
  pcVar1 = (char *)FUN_100dfa260();
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    iVar3 = (int)sVar2;
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,iVar3);
  setupTasksLogging(&local_28,param_1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

