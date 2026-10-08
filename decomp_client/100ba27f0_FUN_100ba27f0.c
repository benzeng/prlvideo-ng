
int FUN_100ba27f0(long param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 int param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  DAT_1023118f0 = param_5;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      lVar2 = (long)iVar4;
      do {
        lVar5 = lVar2;
        if (param_3 <= lVar5) break;
        lVar2 = lVar5 + 1;
      } while (*(char *)(param_2 + lVar5) != '\n');
      iVar7 = (int)lVar5;
      if (iVar7 < 0) {
        return -1;
      }
      plVar6 = _malloc(0x2b0);
      if (plVar6 == (long *)0x0) {
        return -4;
      }
      ___bzero(plVar6,0x2a0);
      plVar6[1] = (long)plVar6;
      *plVar6 = (long)plVar6;
      plVar6[0x53] = (long)(plVar6 + 0x52);
      plVar6[0x52] = (long)(plVar6 + 0x52);
      plVar6[0x55] = (long)(plVar6 + 0x54);
      plVar6[0x54] = (long)(plVar6 + 0x54);
      iVar3 = FUN_100ba1fc0(plVar6,param_2 + iVar4,iVar7 - iVar4,param_4);
      if (iVar3 < iVar7 - iVar4) {
        FUN_100ba1ea0(plVar6);
        return iVar3;
      }
      if (((char)plVar6[4] == '\0') ||
         ((iVar4 = FUN_100ba1660(plVar6 + 4), param_6 != 0 && (iVar4 != param_6)))) {
        FUN_100ba1ea0(plVar6);
      }
      else {
        puVar1 = *(undefined8 **)(param_1 + 8);
        plVar6[1] = (long)puVar1;
        *plVar6 = param_1;
        *puVar1 = plVar6;
        *(long **)(param_1 + 8) = plVar6;
      }
      iVar4 = iVar7 + 1;
    } while (iVar4 < param_3);
  }
  return 0;
}

