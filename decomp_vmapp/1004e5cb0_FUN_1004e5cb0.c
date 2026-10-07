
int FUN_1004e5cb0(undefined8 *param_1,QString *param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bc3880;
  param_1[3] = PTR_shared_null_100ba20d0;
  param_1[2] = param_3;
  QString::operator=((QString *)(param_1 + 3),param_2);
  *(undefined2 *)(param_1 + 5) = 0;
  if (param_4 == 0) {
    uVar3 = FUN_1004e2de0(param_2);
    param_1[4] = uVar3;
  }
  else {
    param_1[4] = param_4;
  }
  LOCK();
  piVar1 = (int *)(param_1[2] + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}

