
void FUN_100a51530(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = FUN_100a515e0(param_2);
  uVar4 = (ulong)uVar2 + 0x24;
  puVar3 = (undefined4 *)*param_1;
  uVar5 = param_1[1] - (long)puVar3;
  if (uVar5 < uVar4) {
    FUN_100a337b0(param_1);
    puVar3 = (undefined4 *)*param_1;
  }
  else if ((uVar4 < uVar5) && (param_1[1] != uVar4 + (long)puVar3)) {
    param_1[1] = uVar4 + (long)puVar3;
  }
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_5;
  puVar3[3] = param_7;
  puVar3[4] = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *param_6;
  *(undefined8 *)(puVar3 + 7) = param_6[1];
  *(undefined8 *)(puVar3 + 5) = uVar1;
  FUN_100a516f0(*param_1 + 0x24,param_2);
  return;
}

