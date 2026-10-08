
void FUN_1003f92b0(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_3 == 2) {
    CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
    return;
  }
  plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar3 + 0x70);
  local_38 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.HostSharing.Enabled",0x30);
  QVariant::QVariant(&local_48,true);
  (*pcVar1)(plVar3,param_1 + 0x28,&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f9362;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003f9362:
  plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar3 + 0x70);
  local_50 = (QArrayData *)
             QString::fromAscii_helper
                       ("Settings.Tools.SharedFolders.HostSharing.ShareUserHomeDir",0x39);
  QVariant::QVariant(&local_60,true);
  (*pcVar1)(plVar3,param_1 + 0x28,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f93e2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003f93e2:
  cVar2 = FUN_1003f9070(param_1);
  if (cVar2 == '\0') {
    CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  }
  return;
}

