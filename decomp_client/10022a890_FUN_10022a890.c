
void FUN_10022a890(long param_1)

{
  undefined1 uVar1;
  
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    uVar1 = CPasswordDialog::isNeedSavePassword();
    *(undefined1 *)(param_1 + 0xb0) = uVar1;
    QObject::deleteLater();
    return;
  }
  return;
}

