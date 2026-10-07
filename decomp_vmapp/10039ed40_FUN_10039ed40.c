
void FUN_10039ed40(undefined8 param_1,uint param_2,char *param_3)

{
  if ((param_2 & 0xf0000) != 0xf0000) {
    FUN_10038e8e0(param_1,"%c",0x2e);
    if ((param_2 & 0x10000) != 0) {
      FUN_10038e8e0(param_1,"%c",(int)*param_3);
    }
    if ((param_2 & 0x20000) != 0) {
      FUN_10038e8e0(param_1,"%c",(int)param_3[1]);
    }
    if ((param_2 & 0x40000) != 0) {
      FUN_10038e8e0(param_1,"%c",(int)param_3[2]);
    }
    if ((param_2 & 0x80000) != 0) {
      FUN_10038e8e0(param_1,"%c",(int)param_3[3]);
      return;
    }
  }
  return;
}

