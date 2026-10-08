
void FUN_100104d80(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  string local_58 [24];
  string local_40;
  char local_3f [15];
  char *local_30;
  undefined1 local_21;
  
  FUN_100104f20(local_58,param_1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (char *)0x0;
  pcVar2 = local_30;
  if (((byte)local_40 & 1) == 0) {
    pcVar2 = local_3f;
  }
  cVar1 = FUN_100105150(pcVar2);
  if (cVar1 == '\0') goto LAB_100104e38;
  if ((local_78 & 1) == 0) {
    pcVar2 = (char *)((long)&local_78 + 1);
LAB_100104de8:
    _strlen(pcVar2);
    pcVar3 = pcVar2;
  }
  else {
    pcVar3 = (char *)0x0;
    pcVar2 = local_68;
    if (local_68 != (char *)0x0) goto LAB_100104de8;
  }
  QString::fromUtf8_helper((char *)&local_80,(int)pcVar3);
  FUN_100d9bbb0(&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100104e38;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100104e38:
  if (((byte)local_40 & 1) == 0) {
    local_30 = local_3f;
  }
  _unlink(local_30);
  std::string::~string((string *)&local_78);
  std::string::~string(&local_40);
  std::string::~string(local_58);
  return;
}

