
void FUN_100278b20(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  
  ___bzero(param_2,0xa0);
  *(undefined2 *)((long)param_2 + 0x24) = *(undefined2 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x1b8) != 1) {
    uVar8 = FUN_1000a7e20(DAT_1011c3698);
    *param_2 = uVar8;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  QString::toUtf8();
  pcVar9 = _strdup((char *)(local_40 + *(long *)(local_40 + 0x10)));
  param_2[10] = pcVar9;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100278beb;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100278beb:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100278c1b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100278c1b:
  *(uint *)(param_2 + 0x13) = (uint)(*(int *)(param_1 + 0x1b8) == 2);
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] != 0) {
      ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  bVar4 = CVmGenericNetworkAdapter::isRouter();
  *(uint *)((long)param_2 + 0x2c) = (uint)bVar4;
  iVar7 = FUN_1007da300("devices.net.wifi_router",0);
  if (iVar7 != 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"forced wifi-router");
    }
    *(undefined4 *)((long)param_2 + 0x2c) = 1;
  }
  cVar5 = CVmGenericNetworkAdapter::getDHCPUseHostMac();
  iVar7 = -1;
  if (cVar5 != '\x02') {
    iVar7 = (int)cVar5;
  }
  uVar6 = FUN_1007da300("devices.net.dhcp_use_host_mac",iVar7);
  *(undefined1 *)((long)param_2 + 0x34) = uVar6;
  FUN_1007d6bf0(DAT_1011c3650 + 0x18,param_2 + 2);
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x150);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return;
}

