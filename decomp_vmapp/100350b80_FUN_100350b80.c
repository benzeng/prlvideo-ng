
void FUN_100350b80(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  fVar3 = (float)(DAT_100b44c98 / SQRT((double)(param_2 * param_2 + fVar2 * fVar2 + fVar1 * fVar1)))
  ;
  *(float *)(param_3 + 0x10) = fVar1 * fVar3;
  *(float *)(param_3 + 0x14) = fVar2 * fVar3;
  *(float *)(param_3 + 0x18) = param_2 * fVar3;
  *(undefined4 *)(param_3 + 0x1c) = 0x3f800000;
  return;
}

