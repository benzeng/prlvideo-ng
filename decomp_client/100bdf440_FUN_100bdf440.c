
void FUN_100bdf440(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  if (0x4000 < param_4) {
    FUN_100bf2cd0("d1_pkt.c",0x5c7,"len <= SSL3_RT_MAX_PLAIN_LENGTH");
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_100bdf4a0(param_1,param_2,param_3,param_4,0);
  return;
}

