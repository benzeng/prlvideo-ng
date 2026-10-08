
void FUN_100a356a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  CVmConfiguration *pCVar4;
  undefined8 uVar5;
  long lVar6;
  bool *pbVar7;
  long local_138;
  undefined1 local_129;
  CVmConfiguration local_128 [248];
  
  puVar2 = operator_new(0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = 0;
  *(undefined4 *)puVar2 = 0x20000;
  *(undefined4 *)((long)puVar2 + 4) = 0xc;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x10;
  if (param_3 == 1) {
    lVar3 = FUN_100319390(param_2);
    if (lVar3 != 0) {
      pCVar4 = (CVmConfiguration *)FUN_10018c2b0(lVar3);
      CVmConfiguration::CVmConfiguration(local_128,pCVar4);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      uVar5 = CVmTools::getVmSharing();
      lVar6 = CVmSharing::getGuestSharing();
      if (lVar6 != 0) {
        CVmGuestSharing::setEnabled(SUB81(lVar6,0));
        CVmGuestSharing::setAutoMount(SUB81(lVar6,0));
        pbVar7 = (bool *)FUN_100197ee0(lVar3,uVar5);
        local_129 = 0;
        CSdkRequest::waitForCompletion(pbVar7,(uint)&local_129);
      }
      CVmConfiguration::~CVmConfiguration(local_128);
    }
  }
  FUN_1003193b0(&local_138,param_2);
  iVar1 = _PrlDevSIA_SendSIAData(local_138,puVar2,0x10);
  if ((iVar1 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("","SIAToolClient",1,"Can\'t send SIA command to vm. Err = 0x%x",iVar1);
  }
  if (local_138 != 0) {
    _PrlHandle_Free();
  }
  operator_delete(puVar2);
  return;
}

