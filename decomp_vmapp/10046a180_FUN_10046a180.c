
void FUN_10046a180(long param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t sVar5;
  uint *puVar6;
  void *pvVar7;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar3 = (ulong)(*(byte *)(param_1 + 0x28) >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  pbVar1 = (byte *)(param_1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x44) + 0x10 + uVar3;
  puVar6 = (uint *)*param_2;
  uVar4 = param_2[1] - (long)puVar6;
  if (uVar4 < uVar3) {
    FUN_10005a320(param_2);
    puVar6 = (uint *)*param_2;
  }
  else if ((uVar3 < uVar4) && (param_2[1] != uVar3 + (long)puVar6)) {
    param_2[1] = uVar3 + (long)puVar6;
  }
  if ((*pbVar1 & 1) == 0) {
    uVar2 = (uint)(*pbVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x30);
  }
  *puVar6 = uVar2;
  if ((*pbVar1 & 1) == 0) {
    pvVar7 = (void *)(param_1 + 0x29);
    sVar5 = (size_t)(*pbVar1 >> 1);
  }
  else {
    sVar5 = *(size_t *)(param_1 + 0x30);
    pvVar7 = *(void **)(param_1 + 0x38);
  }
  _memcpy(puVar6 + 1,pvVar7,sVar5);
  if ((*pbVar1 & 1) == 0) {
    uVar3 = (ulong)(*pbVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  *(undefined4 *)(uVar3 + 4 + (long)puVar6) = 0;
  *(undefined4 *)(uVar3 + 8 + (long)puVar6) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(uVar3 + 0xc + (long)puVar6) = *(undefined4 *)(param_1 + 0x44);
  _memcpy((void *)(uVar3 + 0x10 + (long)puVar6),*(void **)(param_1 + 0x48),
          (ulong)*(uint *)(param_1 + 0x44));
  return;
}

