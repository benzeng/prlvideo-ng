
void FUN_10040e3c0(undefined8 param_1,int param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6,undefined8 param_7,int param_8,int param_9)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_5 == 2) {
    if ((int)param_3 < 8) goto joined_r0x00010040e4b1;
    if ((int)param_3 < 0x18) {
      if (param_3 == 8) {
        FUN_10040f830(param_1,param_4);
        return;
      }
      if (param_3 == 0x10) {
        FUN_10040f760(param_1,param_4);
        return;
      }
    }
    else {
      if (param_3 == 0x18) {
        FUN_10040f680(param_1,param_4);
        return;
      }
      if (param_3 == 0x20) {
        FUN_10040f5b0(param_1,param_4);
        return;
      }
    }
  }
  else {
    if (param_6 < 0x18) {
      if (param_6 == 8) {
        FUN_10040fc60(param_1,param_4);
        return;
      }
      if (param_6 == 0x10) {
        FUN_10040fb10(param_1,param_4);
        return;
      }
    }
    else {
      if (param_6 == 0x18) {
        FUN_10040fa20(param_1,param_4);
        return;
      }
      if (param_6 == 0x20) {
        FUN_10040f970(param_1,param_4,param_9,param_7);
        return;
      }
    }
joined_r0x00010040e4b1:
    if (param_3 == 0) goto LAB_10040e4fe;
  }
  if ((param_3 & 7) == 0) {
    ___bzero(param_1,param_9 * param_8 * param_3 >> 3);
  }
LAB_10040e4fe:
  iVar1 = FUN_1008e38f0(&DAT_101119cc0);
  if (iVar1 != 0) {
    pcVar2 = "pcm";
    pcVar3 = "pcm";
    if ((param_5 != 1) && (pcVar3 = "spdif", param_5 == 2)) {
      pcVar3 = "float";
    }
    if ((param_2 != 1) && (pcVar2 = "spdif", param_2 == 2)) {
      pcVar2 = "float";
    }
    FUN_1008e3970("","PrlAudioCore",0,"Trying to do unsupported convertion: %s %d bit -> %s %d bit."
                  ,pcVar3,param_6,pcVar2,param_3);
  }
  return;
}

