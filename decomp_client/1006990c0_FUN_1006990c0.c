
void FUN_1006990c0(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  CVmCoherence *pCVar5;
  int iVar6;
  CVmCoherence local_100 [200];
  long local_38;
  
  uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar3 = FUN_100319c60(uVar3);
  lVar4 = FUN_10033c600(uVar3);
  iVar1 = *(int *)(lVar4 + 4);
  iVar6 = *(int *)(lVar4 + 8);
  uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar3 = FUN_100319c50(uVar3);
  cVar2 = FUN_100330a50(uVar3);
  if (cVar2 == '\0') {
    iVar6 = iVar1;
  }
  FUN_10018c250(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  _PrlVm_ToolsSetTaskBarVisibility(local_38,iVar6 == 0);
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  FUN_10018c2b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pCVar5 = (CVmCoherence *)CVmTools::getVmCoherence();
  CVmCoherence::CVmCoherence(local_100,pCVar5);
  if (cVar2 == '\0') {
    CVmCoherence::setShowTaskBar(false);
  }
  else {
    CVmCoherence::setShowTaskBarInCoherence(false);
  }
  lVar4 = FUN_100198390(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),local_100);
  if (lVar4 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                  "(!)Error: processing desktop utilities state change, failed to send VM coherence configuration update request "
                 );
  }
  CVmCoherence::~CVmCoherence(local_100);
  return;
}

