
void FUN_100cb76d0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = FUN_100c6fc30(param_2);
  uVar3 = FUN_100bf6fe0(uVar2);
  FUN_100c7aec0(param_1,uVar3,~-(uint)((uVar1 & 8) == 0) | 5,0);
  return;
}

