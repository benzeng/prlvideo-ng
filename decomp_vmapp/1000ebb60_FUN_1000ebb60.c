
int * FUN_1000ebb60(int *param_1,ulong param_2,undefined8 *param_3)

{
  while( true ) {
    if (*param_1 == 1) {
      return (int *)0x0;
    }
    if ((*param_1 == 9) && (*(ulong *)(param_1 + 9) == (param_2 & 0xffffffff))) break;
    param_1 = param_1 + 0xf;
  }
  *param_3 = *(undefined8 *)(param_1 + 1);
  return param_1;
}

