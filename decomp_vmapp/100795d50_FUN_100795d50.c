
void FUN_100795d50(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 6;
  *(undefined4 *)(param_1 + 8) = 10;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x28));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_1007d6870(param_1 + 0x40);
  return;
}

