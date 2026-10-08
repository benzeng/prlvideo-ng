
void FUN_1003e5ec0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1003e31a0(param_1);
      return;
    case 1:
      FUN_1003e4550(param_1,param_4[1]);
      return;
    case 2:
      FUN_1003e43d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1003e4a60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1003e3340(param_1);
      FUN_1003e31a0(param_1);
      CMappingModel::dataChanged();
      return;
    case 5:
      FUN_1003e4ad0(param_1);
      return;
    default:
      return;
    }
  }
  if (param_3 == 2) {
    puVar1 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar1 = 0xffffffff;
      return;
    }
  }
  else {
    if (param_3 != 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    puVar1 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar1 = 0xffffffff;
      return;
    }
  }
  *puVar1 = 2;
  return;
}

