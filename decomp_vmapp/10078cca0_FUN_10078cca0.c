
undefined8 FUN_10078cca0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long local_30;
  undefined4 local_28;
  
  uVar4 = 1;
  do {
    uVar4 = uVar4 * 2;
  } while (uVar4 < param_2 + 0xc);
  iVar1 = FUN_10078cb50(&local_30);
  uVar2 = 0xfffffffe;
  if (iVar1 != 0) {
    *(long *)(param_1 + 4) = local_30;
    param_1[6] = local_28;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = param_2 + 0xc;
    uVar3 = (ulong)param_2;
    *(undefined4 *)(local_30 + uVar3) = 0;
    *(undefined4 *)(local_30 + 8 + uVar3) = 0;
    *(undefined4 *)(local_30 + 4 + uVar3) = 0x1000;
    uVar2 = 0;
  }
  return uVar2;
}

