
void FUN_100105010(string *param_1)

{
  string *psVar1;
  string *psVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (((byte)*param_1 & 1) == 0) {
    psVar1 = param_1 + 1;
LAB_100105041:
    _strlen((char *)psVar1);
    psVar2 = psVar1;
  }
  else {
    psVar1 = *(string **)(param_1 + 0x10);
    psVar2 = (string *)0x0;
    if (psVar1 != (string *)0x0) goto LAB_100105041;
  }
  QString::fromUtf8_helper((char *)&local_38,(int)psVar2);
  FUN_100d9bbb0(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100105091;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100105091:
  std::string::~string(param_1);
  return;
}

