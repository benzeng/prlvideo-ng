
void FUN_10075c1a0(long param_1)

{
  QString *pQVar1;
  char *pcVar2;
  undefined *puVar3;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_38,"",0x1e14fef);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10075c214;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10075c214:
  puVar3 = PTR_s_DynProp_CanShowSheet_102270de0;
  pcVar2 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar2,(QVariant *)puVar3);
  QVariant::~QVariant(&local_48);
  QDialog::setModal(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  FUN_100381400(*(undefined8 *)(param_1 + 0x10));
  FUN_10075c3b0(param_1);
  return;
}

