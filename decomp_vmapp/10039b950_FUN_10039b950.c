
char * FUN_10039b950(undefined8 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = "";
  switch(param_2) {
  case 2:
    return ", SampleIndex";
  case 4:
    return ", bias";
  case 6:
    if (param_3 - 2U < 9) {
      pcVar1 = (&PTR_s___ddx_x__ddy_x_100bbd580)[(int)(param_3 - 2U)];
    }
    break;
  case 7:
    return ", lod";
  case 8:
    return ", 0.0";
  }
  return pcVar1;
}

