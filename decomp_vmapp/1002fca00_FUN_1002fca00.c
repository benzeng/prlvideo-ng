
void FUN_1002fca00(long param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x118cc) = param_4;
  *(undefined4 *)(param_1 + 0x118d0) = param_5;
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x118b8) = param_3[1];
  *(undefined8 *)(param_1 + 0x118b0) = uVar3;
  uVar1 = *param_2;
  *(short *)(param_1 + 0x118a8) = (short)uVar1;
  uVar2 = param_2[1];
  *(short *)(param_1 + 0x118aa) = (short)uVar2;
  *(short *)(param_1 + 0x118ac) = (short)param_2[2] - (short)uVar1;
  *(short *)(param_1 + 0x118ae) = (short)param_2[3] - (short)uVar2;
  *(undefined1 *)(param_1 + 0x11901) = param_6;
  return;
}

