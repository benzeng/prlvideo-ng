
undefined8 FUN_10042cfb0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = (long)(int)param_1[6];
  uVar1 = (param_1[lVar2 * 3 + 8] + 0x27 & 0xfffffffc) + param_1[6] * 0xc;
  param_1[1] = uVar1;
  if ((long)(int)uVar1 + 0xcU < 0x41d) {
    _bcopy(param_1 + lVar2 * 3 + 7,param_1 + lVar2 * 3 + 10,(ulong)param_1[lVar2 * 3 + 8] + 8);
    uVar1 = param_1[6];
    param_1[(long)(int)uVar1 * 3 + 9] = *(uint *)(param_2 + 1);
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 3 + 7) = *param_2;
    uVar1 = param_1[6];
    lVar2 = (long)(int)uVar1 + 1;
    uVar4 = (uint)lVar2;
    param_1[6] = uVar4;
    uVar5 = *param_1 | 0x80000000;
    if ((long)(int)uVar1 < 0) {
      uVar5 = *param_1 & 0x7fffffff;
    }
    *param_1 = uVar5;
    uVar1 = (param_1[lVar2 * 3 + 8] + 0x27 & 0xfffffffc) + uVar4 * 0xc;
    param_1[1] = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

