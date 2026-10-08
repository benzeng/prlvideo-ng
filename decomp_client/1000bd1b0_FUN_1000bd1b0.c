
void FUN_1000bd1b0(long *param_1)

{
  char cVar1;
  long lVar2;
  QString local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  lVar2 = CVmSettings::getVmTools();
  if (lVar2 == 0) {
    FUN_100df99c0("SGAA","prl_client_app",0,"Error: Vm Tools configuration object is 0");
    return;
  }
  CBaseNode::toString(SUB81(&local_38,0),(bool)((char)lVar2 + '\x10'));
  cVar1 = operator==(&local_38,(QString *)(param_1 + 8));
  if (cVar1 == '\0') {
    QString::operator=((QString *)(param_1 + 8),&local_38);
    (**(code **)(*param_1 + 0x98))(param_1,lVar2,0);
  }
  else if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAA","prl_client_app",2,"Vm Tools configuration not changed");
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

