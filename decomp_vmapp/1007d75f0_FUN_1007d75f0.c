
uint FUN_1007d75f0(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  
  uVar2 = param_1[4] & *param_1;
  uVar1 = param_1[1] - *param_1 & param_1[5];
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  if (param_1[6] < uVar1 + uVar2) {
    uVar3 = param_1[6] - uVar2;
    sVar4 = (size_t)uVar3;
    _memcpy((void *)((long)param_2 + sVar4),param_1 + 8,(ulong)(uVar1 - uVar3));
  }
  else {
    sVar4 = (size_t)uVar1;
  }
  _memcpy(param_2,(void *)((long)param_1 + (ulong)uVar2 + 0x20),sVar4);
  *param_1 = *param_1 + uVar1 & param_1[5];
  return uVar1;
}

