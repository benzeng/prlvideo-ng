
void FUN_1008dae90(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = FUN_1008946b0(param_2);
  uVar3 = FUN_100821870(uVar2);
  FUN_10089f940(param_1,uVar3,~-(uint)((uVar1 & 8) == 0) | 5,0);
  return;
}

