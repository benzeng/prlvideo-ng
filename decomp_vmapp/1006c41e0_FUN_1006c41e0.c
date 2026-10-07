
int FUN_1006c41e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  string local_40;
  undefined1 local_3f [15];
  undefined1 *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QString::toUtf8();
  std::string::__init((char *)&local_40,(ulong)(local_28 + *(long *)(local_28 + 0x10)));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c4242;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1006c4242:
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (((byte)local_40 & 1) == 0) {
    local_30 = local_3f;
  }
  QString::sprintf((char *)&local_48,"%s %s/%s","/sbin/kextload",local_30,"prl_netbridge.kext");
  QString::toUtf8();
  _syslog(5,"[loadPrlNetbridgeKext] %s\n",local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c42d5;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1006c42d5:
  QString::toUtf8();
  FUN_1008e3970("","prl_net",0,"[loadPrlNetbridgeKext] %s",local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c4338;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1006c4338:
  QString::toUtf8();
  iVar1 = FUN_1007d8970(local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c4384;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1006c4384:
  if (iVar1 == 0) {
LAB_1006c43d1:
    iVar3 = iVar1;
  }
  else {
    _syslog(5,"[loadPrlNetbridgeKext] load drv result %d\n",iVar1);
    FUN_1008e3970("","prl_net",0,"[loadPrlNetbridgeKext] load drv result %d",iVar1);
    iVar2 = FUN_1007d8970("/usr/sbin/kextstat 2>&1 | grep com.parallels.kext.netbridge >/dev/null");
    iVar3 = 0;
    if (iVar2 != 0) goto LAB_1006c43d1;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006c4404;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006c4404:
  std::string::~string(&local_40);
  return iVar3;
}

