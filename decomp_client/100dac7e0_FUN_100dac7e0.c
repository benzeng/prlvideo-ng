
void FUN_100dac7e0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (**(code **)(param_1 + 4))(param_2,*param_1);
  lVar4 = (long)iVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 2) + lVar4 * 8);
  if (lVar3 == 0) {
    uVar2 = FUN_100dabeb0(2,0);
    *(undefined8 *)(*(long *)(param_1 + 2) + lVar4 * 8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 2) + lVar4 * 8);
  }
  iVar1 = FUN_100dac030(lVar3,param_2);
  if (iVar1 == 0) {
    param_1[6] = param_1[6] + 1;
  }
  return;
}

