
void FUN_1009e6dd0(CProblemReport *param_1,undefined8 *param_2,QString *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  CProblemReport::CProblemReport(param_1);
  *(undefined **)param_1 = &DAT_1022368e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_getXml_102236b90;
  *(undefined2 *)(param_1 + 600) = 1;
  param_1[0x25a] = (CProblemReport)0x1;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x260) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x268) = PTR_shared_null_1021e1288;
  param_1[0x274] = (CProblemReport)0x0;
  QString::operator=((QString *)(param_1 + 0x268),param_3);
  cVar2 = QFile::exists(param_3);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_problem_report_utils",0,"temp dir for tar files not exists");
    param_1[600] = (CProblemReport)0x0;
  }
  iVar3 = (**(code **)(*(long *)param_1 + 0x280))(param_1);
  if (iVar3 != 0) {
    FUN_100df99c0("","prl_problem_report_utils",0,"failed load main xml descriptor!");
    param_1[600] = (CProblemReport)0x0;
  }
  return;
}

