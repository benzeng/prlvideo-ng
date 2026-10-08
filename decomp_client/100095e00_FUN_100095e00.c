
void FUN_100095e00(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = 0xc;
    if (*(int *)(param_1 + 0x44) != 1) {
      uVar1 = 9;
    }
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = 100;
    FUN_1000901c0(*(undefined8 *)(param_1 + 0x38),param_1 + 0x48);
  }
  QDialog::reject();
  return;
}

