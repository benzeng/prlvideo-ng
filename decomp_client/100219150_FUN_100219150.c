
undefined8 FUN_100219150(long param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (cVar1 = COsInstallationInfo::load(), cVar1 == '\0'))
  {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t load OS installation info.");
    return 0x80000009;
  }
  cVar1 = COsInstallationInfo::isNeedToDownloadOsImage();
  if (cVar1 == '\0') {
    CAbstractTask::removeSubTask((int)param_1);
  }
  return 0;
}

