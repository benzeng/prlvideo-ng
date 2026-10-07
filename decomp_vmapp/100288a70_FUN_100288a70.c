
undefined8 FUN_100288a70(uint *param_1,ulong *param_2,uint *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *param_1 >> 0x18;
  uVar1 = 0xffffffff;
  if ((uVar3 & 0x30) == 0x10) {
    *param_3 = *param_1 & 0xffffff;
    if ((uVar3 & 2) == 0) {
      uVar2 = (ulong)param_1[1];
    }
    else {
      uVar2 = *(ulong *)(param_1 + 1);
    }
    *param_2 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}

