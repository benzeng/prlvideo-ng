
void FUN_10038bcc0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  
  (*DAT_1011c5bc0)(0x8c89);
  FUN_100388c90(param_1,param_2,param_3,param_4,param_5);
  puVar1 = *(uint **)(param_1 + 0xd8);
  puVar1[3] = puVar1[3] | 1;
  *puVar1 = *puVar1 | 0xc;
  return;
}

