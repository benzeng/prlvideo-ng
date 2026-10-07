
void FUN_1004b6330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_100bc2820;
  param_1[1] = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 3),0);
  QMutex::QMutex((QMutex *)(param_1 + 5),0);
  param_1[7] = param_3;
  param_1[8] = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 9),0);
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_100097250(DAT_1011c3698);
  param_1[10] = uVar1;
  pvVar2 = operator_new(0x850,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar3 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_100527120(pvVar2,param_1);
    pvVar3 = pvVar2;
  }
  param_1[2] = pvVar3;
  pvVar2 = operator_new(0x1058,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar3 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_1004b7cf0(pvVar2,param_1[10],param_1);
    pvVar3 = pvVar2;
  }
  param_1[4] = pvVar3;
  pvVar4 = operator_new(0x250,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar2 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    FUN_1004bb250(pvVar4,param_1[10],param_1,pvVar3);
    pvVar2 = pvVar4;
  }
  param_1[6] = pvVar2;
  return;
}

