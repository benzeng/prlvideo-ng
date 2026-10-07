
void FUN_10078c670(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_3 & 0xfff;
  uVar1 = 0x1000 - uVar2;
  if (uVar2 + param_5 < 0x1001) {
    uVar1 = param_5;
  }
  if (*(int *)(param_1 + 0x18) - 1U < 3) {
    while (param_5 != 0) {
      uVar4 = (ulong)uVar1;
      lVar3 = (**(code **)(param_1 + 0x20))(param_1,param_2,param_3,0);
      if (lVar3 != 0) {
        (**(code **)(param_1 + 8))(param_4,uVar4,lVar3);
      }
      uVar2 = param_5 - uVar1;
      param_3 = param_3 + uVar4;
      param_4 = param_4 + uVar4;
      if (0xfff < uVar2) {
        uVar2 = 0x1000;
      }
      param_5 = param_5 - uVar1;
      uVar1 = uVar2;
    }
    return;
  }
  FUN_1008e3970("","va2pa",0,"Memory mode is not initialized");
  return;
}

