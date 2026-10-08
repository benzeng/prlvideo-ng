
void FUN_1006810f0(undefined8 param_1,int param_2,long param_3)

{
  char *pcVar1;
  long local_48;
  QVariant local_40;
  long local_30;
  
  CContentModel::setBusy(SUB81(param_1,0));
  if ((-1 < param_2) && (param_3 != 0)) {
    CAbstractTask::setOption(param_3,2,0);
    QObject::connect(&local_30,param_1,"2destroyed()",param_3,"1deleteLater()",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  CAbstractWizardModel::wizardCtrl();
  CWizardController::parentWidget();
  pcVar1 = (char *)QWidget::window();
  local_48 = 0;
  if (-1 < param_2) {
    local_48 = param_3;
  }
  QVariant::QVariant(&local_40,0x27,&local_48,1);
  QObject::setProperty(pcVar1,(QVariant *)"PromoTask");
  QVariant::~QVariant(&local_40);
  CAbstractWizardModel::goToPage(param_1,10,0);
  return;
}

