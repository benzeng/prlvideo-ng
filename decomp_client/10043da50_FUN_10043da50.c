
void FUN_10043da50(long param_1,QString *param_2)

{
  char *pcVar1;
  QString *pQVar2;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmEdChooseSourceDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10043dac0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10043dac0:
  pcVar1 = *(char **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdChooseSourceDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty(pcVar1,(QVariant *)"initer");
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10043db3e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10043db3e:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_50,"CVmEdChooseSourceDialog","Source:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

