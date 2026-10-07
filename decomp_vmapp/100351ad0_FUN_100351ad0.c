
void FUN_100351ad0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  FUN_10039f200();
  FUN_100356d60(param_1 + 0x18,param_3 + 0x160);
  uVar1 = *(undefined8 *)(param_3 + 0x10c);
  param_1[0x1b] = *(undefined8 *)(param_3 + 0x104);
  param_1[0x1c] = uVar1;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_3 + 200);
  *(undefined1 *)((long)param_1 + 0xec) = *(undefined1 *)(param_3 + 0x114);
  if (*(uint *)*param_1 < 0xffff0200) {
    *(undefined4 *)(param_1 + 0x1d) = 1;
  }
  return;
}

