
void FUN_1008dbb70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100821ab0(*param_2);
  uVar3 = FUN_1008dac20(param_2);
  uVar2 = FUN_100821ab0(uVar3);
  uVar3 = 0;
  if (iVar1 == 0x16) {
    uVar3 = *(undefined8 *)(param_2[1] + 8);
  }
  FUN_1008abdb0(param_1,param_2,param_3,param_4,iVar1,uVar2,uVar3,&DAT_100be8818);
  return;
}

