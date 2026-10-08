
void FUN_10041fde0(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102210c70;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102210e60;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102210eb0;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CVmHardDisk::~CVmHardDisk((CVmHardDisk *)(param_1 + 0x70));
  CBaseDialog::~CBaseDialog(param_1);
  operator_delete(param_1);
  return;
}

