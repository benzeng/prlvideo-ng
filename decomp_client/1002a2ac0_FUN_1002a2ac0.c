
undefined8 FUN_1002a2ac0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      CAntivirusInfo::info(0,*(undefined4 *)(param_1 + 0x38));
      uVar2 = CAntivirusInfo::opCodeUninstall();
      return uVar2;
    }
  }
  else {
    if (iVar1 == 2) {
      CAntivirusInfo::info(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
      uVar2 = CAntivirusInfo::opCodeInstall();
      return uVar2;
    }
    if (iVar1 == 1) {
      CAntivirusInfo::info(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
      uVar2 = CAntivirusInfo::opCodeDownload();
      return uVar2;
    }
  }
  return 0;
}

