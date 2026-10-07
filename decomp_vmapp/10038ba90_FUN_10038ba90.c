
void FUN_10038ba90(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined1 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined4 param_17)

{
  uint *puVar1;
  
  (*DAT_1011c5bc0)(0x8f9d);
  (*DAT_1011c5bc0)(0x8c89);
  FUN_100388010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,param_11,
                param_12,param_13,param_14,param_15,param_16,param_17);
  puVar1 = *(uint **)(param_1 + 0xd8);
  puVar1[1] = puVar1[1] | 1;
  *(byte *)(puVar1 + 2) = (byte)puVar1[2] | 1;
  *puVar1 = *puVar1 | 0x18027;
  return;
}

