
void FUN_1002be9a0(QObject *param_1)

{
  char cVar1;
  int iVar2;
  QObject *pQVar3;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 == 2) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmProtection();
    cVar1 = CVmProtection::isEnabled();
    if (cVar1 != '\0') {
      pQVar3 = (QObject *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pQVar3 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pQVar3 = *(QObject **)(param_1 + 0x30);
      }
      QObject::disconnect(pQVar3,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                          "1onVmConfigarationChanged(const CVmConfiguration&)");
                    /* WARNING: Could not recover jumptable at 0x0001002bea13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
      return;
    }
  }
  return;
}

