
uint FUN_1007d72c0(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = *param_1 - (param_1[3] - param_1[2] & param_1[5]);
  if (param_3 <= uVar6) {
    uVar6 = param_3;
  }
  uVar2 = param_1[3] & param_1[4];
  iVar4 = 0;
  uVar3 = uVar6;
  if (*param_1 < uVar6 + uVar2) {
    uVar3 = *param_1 - uVar2;
    iVar4 = uVar6 - uVar3;
  }
  uVar1 = param_1[1];
  puVar5 = (uint *)0x0;
  if (iVar4 != 0) {
    puVar5 = param_1 + 6;
  }
  uVar3 = uVar3 * uVar1;
  if (uVar3 != 0) {
    _memcpy((void *)((long)param_1 + (ulong)(uVar2 * uVar1) + 0x18),param_2,(ulong)uVar3);
  }
  if (uVar1 * iVar4 != 0) {
    _memcpy(puVar5,(void *)((long)param_2 + (ulong)uVar3),(ulong)(uVar1 * iVar4));
  }
  param_1[3] = param_1[3] + uVar6 & param_1[5];
  return uVar6;
}

