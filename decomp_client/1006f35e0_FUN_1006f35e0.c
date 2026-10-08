
void FUN_1006f35e0(long param_1)

{
  QString *pQVar1;
  char *pcVar2;
  QSize *pQVar3;
  undefined *puVar4;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_1001c72e0(&local_38);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f363d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006f363d:
  puVar4 = PTR_s_DynProp_CanShowSheet_102270de0;
  pcVar2 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar2,(QVariant *)puVar4);
  QVariant::~QVariant(&local_48);
  QDialog::setModal(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  QDialog::setResult((int)*(undefined8 *)(param_1 + 0x10));
  FUN_1006f3720(param_1);
  FUN_1006f38c0(param_1);
  FUN_1006f3a90(param_1);
  pQVar3 = *(QSize **)(param_1 + 0x10);
  (**(code **)((long)*pQVar3 + 0x70))(pQVar3);
  QWidget::setFixedSize(pQVar3);
  return;
}

