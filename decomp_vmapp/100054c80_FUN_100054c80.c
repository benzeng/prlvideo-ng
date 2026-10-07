
undefined8 FUN_100054c80(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  string local_50 [24];
  QArrayData *local_38;
  ulong local_30;
  undefined1 local_21;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  std::string::__init((char *)local_50,(ulong)(local_38 + *(long *)(local_38 + 0x10)));
  cVar1 = FUN_100533800(local_50,&local_30);
  std::string::~string(local_50);
  uVar2 = 8;
  if ((cVar1 != '\0') && (uVar2 = 8, *(ulong *)(param_1 + 0x30) <= local_30)) {
    uVar2 = 0;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar2;
}

