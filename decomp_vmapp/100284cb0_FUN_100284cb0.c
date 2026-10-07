
void FUN_100284cb0(undefined8 *param_1,long *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1[2] != 0) {
    param_1[3] = 0;
    if ((void *)param_1[1] != (void *)0x0) {
      _free((void *)param_1[1]);
      param_1[1] = 0;
    }
    param_1[2] = 0;
  }
  param_1[3] = param_2;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  uVar4 = 0;
  uVar5 = 0;
  if (iVar1 != 0) {
    do {
      iVar1 = (**(code **)(*(long *)param_1[3] + 8))((long *)param_1[3],uVar4);
      uVar5 = uVar5 + iVar1;
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)param_1[3] + 0x10))();
    } while (uVar4 < uVar2);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  if (uVar5 < 0x7d001) {
    pvVar3 = (void *)*param_1;
  }
  else {
    pvVar3 = _valloc((ulong)uVar5);
    param_1[1] = pvVar3;
  }
  param_1[2] = pvVar3;
  return;
}

