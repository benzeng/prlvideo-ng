
void FUN_10084bae0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  uVar2 = *(uint *)((long)param_2 + 0x14);
  uVar6 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 1);
  uVar4 = *(undefined4 *)((long)param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 2);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *param_2 = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((long)param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 2) = uVar5;
  *(uint *)((long)param_1 + 0x14) = uVar2 & 2 | uVar1 & 1;
  *(uint *)((long)param_2 + 0x14) = uVar1 & 2 | uVar2 & 1;
  return;
}

