
void FUN_10072adf0(QCloseEvent *param_1)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
      (lVar1 = *(long *)(param_1 + 0x70), lVar1 != 0)) && (*(char *)(lVar1 + 0x30) != '\0')) {
    *(undefined1 *)(lVar1 + 0x30) = 0;
    FUN_100853360(lVar1,0);
  }
  WidgetUtils::reparentNonBlockingDialogsTo((QWidget *)0x0,(QWidget *)param_1);
  QDialog::closeEvent(param_1);
  return;
}

