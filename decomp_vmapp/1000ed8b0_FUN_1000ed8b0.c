
int * FUN_1000ed8b0(int *param_1,int *param_2,long param_3)

{
  while( true ) {
    if (*param_1 == 1) {
      return (int *)0x0;
    }
    if ((*param_1 == 9) && (*(long *)(param_1 + 1) == param_3)) break;
    param_1 = param_1 + 0xf;
  }
  *param_2 = param_1[9];
  return param_1;
}

