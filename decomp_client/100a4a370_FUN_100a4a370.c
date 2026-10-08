
bool FUN_100a4a370(undefined8 param_1,char param_2)

{
  CVmConfiguration *pCVar1;
  undefined8 uVar2;
  bool *pbVar3;
  long lVar4;
  bool bVar5;
  char local_121;
  CVmConfiguration local_120 [248];
  
  pCVar1 = (CVmConfiguration *)FUN_10018c2b0();
  CVmConfiguration::CVmConfiguration(local_120,pCVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  uVar2 = CVmTools::getVmSharing();
  lVar4 = CVmSharing::getHostSharing();
  bVar5 = SUB81(lVar4,0);
  if (lVar4 == 0) {
    bVar5 = false;
  }
  else {
    CVmHostSharing::setEnabled(bVar5);
    if (param_2 == '\0') {
      CVmHostSharing::setShareAllMacDisks(bVar5);
      CVmHostSharing::setShareUserHomeDir(bVar5);
    }
    else {
      CVmHostSharing::setShareAllMacDisks(bVar5);
      CVmHostSharing::setShareUserHomeDir(bVar5);
    }
    pbVar3 = (bool *)FUN_100197ee0(param_1,uVar2);
    local_121 = '\0';
    CSdkRequest::waitForCompletion(pbVar3,(uint)&local_121);
    bVar5 = local_121 != '\0';
  }
  CVmConfiguration::~CVmConfiguration(local_120);
  return bVar5;
}

