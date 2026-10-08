
void FUN_10060a320(undefined8 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  QArrayData *pQVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  char *local_48;
  undefined4 *local_40;
  char *local_38;
  undefined1 local_29;
  
  lVar3 = 0;
  if ((*param_3 != 0) && (lVar3 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar3 = param_3[1];
  }
  local_e0 = param_5;
  local_dc = param_2;
  FUN_100a1c6c0(&local_f0,param_3);
  QString::toLatin1();
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = &local_e0;
  local_d0 = "int";
  puVar4 = &local_dc;
  local_38 = "CLicenseManager::DialogType";
  local_48 = "QString";
  local_50 = param_4;
  local_40 = puVar4;
  cVar1 = QMetaObject::invokeMethod(lVar3,local_e8 + *(long *)(local_e8 + 0x10),0,0,0);
  uVar5 = (undefined4)((ulong)puVar4 >> 0x20);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a519;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_10060a519:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a54f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10060a54f:
  if (cVar1 != '\0') {
    return;
  }
  FUN_100a1c6c0(&local_100,param_3);
  QString::toLatin1();
  pQVar2 = local_f8 + *(long *)(local_f8 + 0x10);
  if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) || (param_3[1] == 0)) {
    local_110 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    QObject::objectName();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to invoke method \'%s\' for object \'%s\'.",
                pQVar2,local_108 + *(long *)(local_108 + 0x10));
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a635;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_10060a635:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a66b;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10060a66b:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a6a1;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_10060a6a1:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a6d7;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10060a6d7:
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","isCalled",
                "License/CLicenseManager.cpp",CONCAT44(uVar5,0x14f),"invokeWatcher");
  return;
}

