
void FUN_1003509f0(float param_1,float param_2,undefined4 param_3,long param_4)

{
  double dVar1;
  
  dVar1 = (double)_cos((double)(param_1 * DAT_100b39670));
  *(float *)(param_4 + 0x60) = (float)dVar1;
  dVar1 = (double)_cos((double)(param_2 * DAT_100b39670));
  *(float *)(param_4 + 100) = (float)dVar1;
  *(undefined4 *)(param_4 + 0x68) = param_3;
  return;
}

