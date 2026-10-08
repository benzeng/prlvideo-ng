
void FUN_10009df40(long param_1,undefined8 param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 local_30;
  
  if (((3 < param_4) && (0x1f < param_4)) && (*param_3 == 0xc)) {
    local_30 = param_2;
    puVar4 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_30);
    uVar1 = param_3[3];
    uVar2 = param_3[4];
    uVar3 = *puVar4;
    puVar4 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_30);
    *puVar4 = ~uVar2 & (uVar1 | uVar3);
    FUN_10009e010(param_1);
  }
  return;
}

