
void FUN_10009dfb0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 local_30;
  
  local_30 = param_2;
  puVar4 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_30);
  uVar1 = *(uint *)(param_3 + 0xc);
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar3 = *puVar4;
  puVar4 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_30);
  *puVar4 = ~uVar2 & (uVar1 | uVar3);
  FUN_10009e010(param_1);
  return;
}

