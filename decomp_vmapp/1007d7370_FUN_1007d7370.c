
uint FUN_1007d7370(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  uVar4 = param_1[3] - param_1[2] & param_1[5];
  if (param_3 <= uVar4) {
    uVar4 = param_3;
  }
  uVar2 = param_1[2] & param_1[4];
  iVar6 = 0;
  uVar3 = uVar4;
  if (*param_1 < uVar4 + uVar2) {
    uVar3 = *param_1 - uVar2;
    iVar6 = uVar4 - uVar3;
  }
  uVar1 = param_1[1];
  puVar5 = (uint *)0x0;
  if (iVar6 != 0) {
    puVar5 = param_1 + 6;
  }
  uVar3 = uVar3 * uVar1;
  if (uVar3 != 0) {
    _memcpy(param_2,(void *)((long)(param_1 + 6) + (ulong)(uVar1 * uVar2)),(ulong)uVar3);
  }
  if (iVar6 * uVar1 != 0) {
    _memcpy((void *)((long)param_2 + (ulong)uVar3),puVar5,(ulong)(iVar6 * uVar1));
  }
  param_1[2] = param_1[2] + uVar4 & param_1[5];
  return uVar4;
}

