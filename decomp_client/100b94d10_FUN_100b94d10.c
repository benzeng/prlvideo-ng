
void FUN_100b94d10(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 4) = 1;
    piVar1 = _malloc(0x40);
    if (piVar1 != (int *)0x0) {
      piVar1[0xe] = 0;
      piVar1[0xf] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined8 *)(piVar1 + 4) = param_4;
      piVar1[1] = param_3;
      *piVar1 = 2 - (uint)(param_2 == 0);
      param_1[9] = piVar1;
    }
    return;
  }
  FUN_100b9d470(0xfffffffd,0);
  return;
}

