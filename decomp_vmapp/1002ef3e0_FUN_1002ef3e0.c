
void FUN_1002ef3e0(long *param_1)

{
  if ((int)param_1[1] != 4) {
    FUN_1008e3970("","LocalDevices",0,"adev_free: dev_state (%d:%d) is not set to terminated: %d\n",
                  *(undefined2 *)(*param_1 + 8),*(undefined2 *)(*param_1 + 10),(int)param_1[1]);
  }
  FUN_1007dc890(param_1 + 5);
  FUN_1007d8af0(param_1 + 0xc);
  *(undefined8 *)*param_1 = 0;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xe));
  QMutex::~QMutex((QMutex *)(param_1 + 0xd));
  operator_delete(param_1);
  return;
}

