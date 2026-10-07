
void FUN_1000eabc0(undefined8 param_1,int *param_2,int param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  char *pcVar2;
  
  FUN_1008e3970("","vm",0,"%s ========================",param_1);
  FUN_1008e3970("","vm",0,"-------------------- %u",param_5);
  FUN_1008e3970("","vm",0,"Current offset: 0x%08x",(int)param_4 - param_3);
  pcVar2 = "Unknown";
  if (PTR_s_FIEmpty_10110cb78 != (undefined *)0x0) {
    piVar1 = &DAT_10110cb70;
    pcVar2 = PTR_s_FIEmpty_10110cb78;
    do {
      if (*piVar1 == param_4[1]) goto LAB_1000eac85;
      pcVar2 = *(char **)(piVar1 + 6);
      piVar1 = piVar1 + 4;
    } while (pcVar2 != (char *)0x0);
    pcVar2 = "Unknown";
  }
LAB_1000eac85:
  FUN_1008e3970("","vm",0,"FileType:       0x%08x, %s",param_4[1],pcVar2);
  FUN_1008e3970("","vm",0,"iID:            0x%08x",*param_4);
  FUN_1008e3970("","vm",0,"uLength:        0x%08x",param_4[2]);
  FUN_1008e3970("","vm",0,"uOffs:          0x%08x",param_4[3]);
  if (PTR_s_SubSysStart_10110cbf8 == (undefined *)0x0) {
    pcVar2 = "Unknown";
  }
  else {
    piVar1 = &DAT_10110cbf0;
    pcVar2 = PTR_s_SubSysStart_10110cbf8;
    do {
      if (*piVar1 == *param_2) goto LAB_1000ead3e;
      pcVar2 = *(char **)(piVar1 + 6);
      piVar1 = piVar1 + 4;
    } while (pcVar2 != (char *)0x0);
    pcVar2 = "Unknown";
  }
LAB_1000ead3e:
  FUN_1008e3970("","vm",0,"iType:          0x%08x, %s",*param_2,pcVar2);
  FUN_1008e3970("","vm",0,"uSize:          0x%08x",param_2[3]);
  FUN_1008e3970("","vm",0,"iOff:           0x%08x",param_2[4]);
  FUN_1008e3970("","vm",0,"puSize:         %p",*(undefined8 *)(param_2 + 5));
  FUN_1008e3970("","vm",0,"name:           %s",*(undefined8 *)(param_2 + 0xb));
  FUN_1008e3970("","vm",0,"--------------------- %u",param_5);
  return;
}

