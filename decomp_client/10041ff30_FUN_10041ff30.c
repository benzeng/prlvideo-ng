
void FUN_10041ff30(long param_1)

{
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_10013a450(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),*(long *)(param_1 + 0x1c8),
                  param_1 + 0x70,1);
  }
  QDialog::reject();
  return;
}

