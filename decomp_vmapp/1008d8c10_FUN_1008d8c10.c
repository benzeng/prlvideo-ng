
int FUN_1008d8c10(long param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,
                 int param_6,int param_7,long param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  
  if (param_4 == (char *)0x0) {
    FUN_100887ce0(0x28,0x6c,0x43,"ui_lib.c",0xc4);
  }
  else if (param_5 == (char *)0x0) {
    FUN_100887ce0(0x28,0x6c,0x43,"ui_lib.c",0xc6);
  }
  else {
    cVar1 = *param_4;
    pcVar6 = param_4;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      pcVar3 = _strchr(param_5,(int)cVar1);
      if (pcVar3 != (char *)0x0) {
        FUN_100887ce0(0x28,0x6c,0x68,"ui_lib.c",0xcb);
      }
      cVar1 = *pcVar6;
    }
    if (param_2 == 0) {
      FUN_100887ce0(0x28,0x6d,0x43,"ui_lib.c",0x8f);
    }
    else if (param_8 == 0) {
      FUN_100887ce0(0x28,0x6d,0x69,"ui_lib.c",0x92);
    }
    else {
      piVar4 = (int *)FUN_10081ddd0(0x40,"ui_lib.c",0x93);
      if (piVar4 != (int *)0x0) {
        *(long *)(piVar4 + 2) = param_2;
        piVar4[0xe] = (uint)(param_6 != 0);
        piVar4[4] = param_7;
        *piVar4 = 3;
        *(long *)(piVar4 + 6) = param_8;
        lVar5 = *(long *)(param_1 + 8);
        if (lVar5 == 0) {
          lVar5 = FUN_100884e10();
          *(long *)(param_1 + 8) = lVar5;
          if (lVar5 == 0) {
            if (((*(byte *)(piVar4 + 0xe) & 1) != 0) &&
               (FUN_10081e1a0(*(undefined8 *)(piVar4 + 2)), *piVar4 == 3)) {
              FUN_10081e1a0(*(undefined8 *)(piVar4 + 8));
              FUN_10081e1a0(*(undefined8 *)(piVar4 + 10));
              FUN_10081e1a0(*(undefined8 *)(piVar4 + 0xc));
            }
            FUN_10081e1a0(piVar4);
            return -1;
          }
        }
        *(undefined8 *)(piVar4 + 8) = param_3;
        *(char **)(piVar4 + 10) = param_4;
        *(char **)(piVar4 + 0xc) = param_5;
        iVar2 = FUN_1008852e0(lVar5,piVar4);
        return iVar2 - (uint)(iVar2 < 1);
      }
    }
  }
  return -1;
}

