
void FUN_1002683f0(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100baf140;
  CVmParallelPort::CVmParallelPort((CVmParallelPort *)(param_1 + 0x18));
  *(undefined ***)param_1 = &PTR_FUN_100bbe480;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bbe500;
  *(undefined **)(param_1 + 0x118) = PTR_shared_null_100ba20d0;
  pvVar1 = operator_new(0x38);
  FUN_100412930(pvVar1,param_1);
  *(void **)(param_1 + 0x130) = pvVar1;
  return;
}

