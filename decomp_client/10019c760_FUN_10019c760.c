
void FUN_10019c760(QString *param_1,QWidget *param_2)

{
  void *pvVar1;
  
  QString::operator=(param_1 + 2,(QString *)param_2);
  if (DAT_102310a08 == (void *)0x0) {
    pvVar1 = operator_new(0x220);
    FUN_1007cc3f0(pvVar1);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar1;
  }
  FUN_1007d4290(DAT_102310a08,param_2);
  CProblemReportDelegate::postReportSuccess(param_1,param_2);
  return;
}

