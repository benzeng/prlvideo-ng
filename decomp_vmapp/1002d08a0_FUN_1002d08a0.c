
uint FUN_1002d08a0(undefined8 param_1,long param_2,undefined8 *param_3,int param_4,uint param_5)

{
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0x1000000;
  *(uint *)((long)param_3 + 0xc) = (param_5 & 0x1f) << 0x10 | param_4 << 0x18 | 0x8000;
  return (*(uint *)(param_2 + 0xc) & 0x20) << 5 | *(uint *)(param_2 + 8) >> 0x16 | 0x2800;
}

