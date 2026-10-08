
void FUN_10014a230(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  CVmConfiguration *pCVar5;
  void *pvVar6;
  Data *local_128;
  CVmConfiguration local_120 [255];
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  lVar4 = FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x20) != 8)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  pCVar5 = (CVmConfiguration *)FUN_10018c2b0(uVar3);
  CVmConfiguration::CVmConfiguration(local_120,pCVar5);
  lVar4 = CVmConfiguration::getVmHardwareList();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  uVar2 = CVmDevice::getIndex();
  FUN_10014a5f0(lVar4 + 0x1d0,uVar2);
  bVar1 = (bool)CVmGenericNetworkAdapter::getLinkRateLimit();
  CNetLinkRateLimit::setEnable(bVar1);
  pvVar6 = operator_new(600);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  local_128 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100210650(pvVar6,local_120,uVar3,&local_128,0);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_21 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10014a38a;
    }
    QListData::dispose(local_128);
  }
LAB_10014a38a:
  CAbstractTask::execute();
  CVmConfiguration::~CVmConfiguration(local_120);
  return;
}

