
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10070e6f0(char *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  
  lVar2 = DAT_1011bdab8;
  uVar5 = _DAT_1011bdac0;
  if ((DAT_1011bdac4 == 0) && (DAT_1011bdab8 != 0)) {
    sVar4 = _strlen(param_1);
    uVar5 = 0xffffffec;
    if (sVar4 < 0xf0) {
      lVar6 = *(long *)(lVar2 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(lVar2 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,param_1);
            uVar5 = 0xffffffee;
            if (iVar3 == 0) goto LAB_10070e7ee;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar2 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar2 + 0x108 + lVar6);
        _strcpy(pcVar7,param_1);
        *(undefined8 *)(lVar2 + 0x200 + lVar6) = 1;
        uVar5 = 0;
LAB_10070e7ee:
        _DAT_1011bdac0 = uVar5;
        pcVar7[0xf0] = '\0';
        pcVar7[0xf1] = '\0';
        pcVar7[0xf2] = '\0';
        pcVar7[0xf3] = '\0';
        pcVar7[0xf4] = '\0';
        pcVar7[0xf5] = '\0';
        pcVar7[0xf6] = '\0';
        pcVar7[0xf7] = '\0';
        return pcVar7;
      }
      LOCK();
      *(long *)(lVar2 + 0xf8) = *(long *)(lVar2 + 0xf8) + -1;
      UNLOCK();
      uVar5 = 0xffffffed;
    }
  }
  _DAT_1011bdac0 = uVar5;
  return (char *)0x0;
}

