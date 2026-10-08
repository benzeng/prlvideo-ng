
void FUN_100368880(long param_1,int param_2,int param_3)

{
  char *pcVar1;
  QVariant local_30;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"this=%p, state %d, prev. state %d",param_1,param_2,param_3)
    ;
  }
  if (param_2 == 0x30000001) {
    pcVar1 = *(char **)(param_1 + 0x20);
    QVariant::QVariant(&local_30,false);
    QObject::setProperty(pcVar1,(QVariant *)"VtdScreenManuallyClosed");
    QVariant::~QVariant(&local_30);
  }
  else if ((param_2 == 0x30000004) && (param_3 == 0x3000000b)) {
    QWidget::update();
  }
  FUN_1003682f0(param_1);
  return;
}

