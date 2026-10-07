
/* WARNING: Removing unreachable block (ram,0x00010008c7ea) */

ulong FUN_10008c640(ulong *param_1,ulong param_2,ulong param_3,undefined1 param_4,char param_5,
                   ulong param_6)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  param_6 = param_6 & 0xffffffff;
  if (*param_1 <= param_2) {
    uVar5 = FUN_1008e3970("","vm",0,"[GuestMem] OutOfBound %llx > %llx",param_2);
    return uVar5;
  }
  uVar5 = param_1[0xc];
  if (uVar5 != 0) {
    if (((char)param_6 != '\0') && (*(char *)((long)param_1 + 0xd9) != '\0')) {
      uVar9 = (uint)(param_2 >> 0xc);
      iVar8 = (int)(param_2 + param_3 + 0xfffffffffff >> 0xc);
      uVar4 = iVar8 + (1 - uVar9);
      iVar7 = (int)(*param_1 >> 0xc);
      uVar6 = iVar7 - uVar9;
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      if ((uVar6 != 0) && (uVar9 < uVar6 + uVar9)) {
        uVar4 = (uVar9 - 1) - iVar7;
        uVar6 = ~((iVar8 + 1) - uVar9);
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
        uVar5 = param_2 >> 0xc & 0xffffffff;
LAB_10008c700:
        do {
          cVar2 = *(char *)(param_1[0x1c] + uVar5);
          if (cVar2 != -1) {
            pcVar1 = (char *)(param_1[0x1c] + uVar5);
            LOCK();
            bVar10 = cVar2 == *pcVar1;
            if (bVar10) {
              *pcVar1 = cVar2 + -1;
            }
            UNLOCK();
            if (!bVar10) goto LAB_10008c700;
          }
          iVar7 = (int)uVar5;
          uVar5 = uVar5 + 1;
        } while (iVar7 != (uVar9 - 2) - uVar6);
        uVar5 = param_1[0xc];
      }
    }
    if ((*(long *)(uVar5 + 0x20) != 0) && (*(long *)(uVar5 + 0x20) + param_2 != 0)) {
      uVar5 = ((ulong)param_1 & 0x1fffffffffffffff) >> 0x30;
      uVar3 = (((long)param_1 << 3 | (ulong)param_1 >> 0x3d) << 0xd | uVar5) >> 3;
      param_1 = (ulong *)(uVar3 << 0x33 | (uVar5 << 0x3d | uVar3) >> 0xd);
    }
    param_6 = 0;
    if (param_5 != '\0') {
      param_6 = FUN_10008c230(param_1,param_2,param_3 & 0xffffffff,param_4);
    }
  }
  return param_6;
}

