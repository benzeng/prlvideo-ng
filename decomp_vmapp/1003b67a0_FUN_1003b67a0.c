
undefined8 FUN_1003b67a0(undefined8 param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(short *)(*param_2 + 0x4c) == 0x4c) {
    lVar3 = **(long **)(*param_2 + 8);
    if (lVar3 != 0) {
      iVar2 = 0;
      do {
        sVar1 = *(short *)(lVar3 + 0x4c);
        if (sVar1 == 6) {
          if (iVar2 == 0) {
            FUN_1003c4bd0(param_1,param_2,*(undefined8 *)(lVar3 + 0x40));
            iVar2 = 0;
          }
        }
        else {
          if (sVar1 == 0x17) {
            iVar2 = iVar2 + -1;
          }
          else {
            if (sVar1 != 0x4c) goto LAB_1003b680d;
            iVar2 = iVar2 + 1;
          }
          if (iVar2 < 0) {
            return 0;
          }
        }
LAB_1003b680d:
        lVar3 = **(long **)(lVar3 + 8);
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = FUN_1003a7de0();
    if ((*(byte *)(lVar3 + 0x1d) & 1) != 0) {
      uVar6 = (uint)*(byte *)(lVar3 + 0x11 +
                             ((ulong)((long)param_2 - *(long *)(*param_2 + 0x40)) >> 5 & 0x1fffffffe
                             ));
      while ((char)uVar6 != '\0') {
        uVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (uVar6 == 0) {
          uVar5 = 0xffffffff;
        }
        uVar6 = ~(1 << ((byte)uVar5 & 0x1f)) & uVar6;
        lVar3 = *(long *)(*param_2 + 0x40);
        lVar4 = (ulong)uVar5 * 0x40;
        if (((*(byte *)(lVar3 + 0x39 + lVar4) & 1) != 0) ||
           ((*(byte *)(lVar3 + 0x35 + lVar4) & 1) == 0)) {
          FUN_1003c4bd0(param_1,param_2,lVar3 + lVar4);
        }
      }
    }
  }
  return 0;
}

