
undefined1 FUN_1000b6b90(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAL","prl_client_app",2,"CSharedAppsClient::up()");
  }
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return 1;
  }
  cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar2 != '\0') {
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    uVar3 = FUN_1000a9790(param_1[6]);
    *(undefined4 *)(param_1 + 7) = uVar3;
    local_30 = (QArrayData *)param_1[4];
    lVar1 = param_1[6];
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
    }
    FUN_1000a7ba0(lVar1,&local_30);
    if (*(int *)local_30 == -1) {
      return 1;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
    return 1;
  }
  QString::toUtf8();
  FUN_100df99c0("SGAL","prl_client_app",0,
                "Error: failed to initialize Shared Guest Applications client worker for vmUuid=\"%s\""
                ,local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000b6cb8;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1000b6cb8:
  (**(code **)(*param_1 + 0x78))(param_1);
  return 0;
}

