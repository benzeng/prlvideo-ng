
undefined4 FUN_100d6c5f0(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  
  puVar4 = (uint *)*param_1;
  uVar3 = puVar4[1];
  if (1 < *puVar4) {
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(4,8,0,2);
      *param_1 = puVar4;
    }
    else {
      FUN_1000bf180(param_1,uVar3,puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*param_1;
    }
  }
  uVar1 = *(undefined4 *)((long)puVar4 + (long)(int)uVar3 * 4 + *(long *)(puVar4 + 4) + -4);
  uVar6 = puVar4[1] - 1;
  uVar2 = puVar4[2] & 0x7fffffff;
  lVar5 = 8;
  uVar3 = uVar6;
  if (((int)uVar6 <= (int)uVar2) && (lVar5 = 0, uVar3 = uVar2, -1 < (int)puVar4[2])) {
    if ((int)uVar6 < (int)(uVar2 >> 1)) {
      uVar3 = uVar6;
    }
    lVar5 = (ulong)((int)uVar6 < (int)(uVar2 >> 1)) << 3;
  }
  FUN_1000bf180(param_1,uVar6,uVar3,lVar5);
  return uVar1;
}

