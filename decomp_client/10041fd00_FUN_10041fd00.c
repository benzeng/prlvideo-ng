
void FUN_10041fd00(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102210c70;
  *param_1 = &PTR_FUN_102210e60;
  param_1[4] = &PTR_FUN_102210eb0;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  CVmHardDisk::~CVmHardDisk((CVmHardDisk *)(param_1 + 0xc));
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

