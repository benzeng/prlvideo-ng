
undefined8
FUN_100b31410(long *param_1,long param_2,uint param_3,ulong param_4,long param_5,ulong param_6,
             ulong param_7,char param_8)

{
  ulong uVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  if (*param_1 != 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_Bitmap",
                  "ReclaimGuestBitmap.cpp",0x39,"create");
  }
  uVar9 = (ulong)param_3;
  iVar12 = (int)((~param_4 + param_5 + param_7) / param_7);
  *(int *)((long)param_1 + 0xc) = iVar12;
  if (((uVar9 == param_7) && (param_4 % param_7 == 0)) && (param_8 == '\0')) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","dimg",2,
                    "Way-I: Block sizes equal, start sector is aligned to block, no padding");
    }
    *(undefined1 *)(param_1 + 1) = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_7;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_4;
    *param_1 = param_2 + (SUB168(auVar4 / auVar3,0) >> 5) * 4;
    *(uint *)(param_1 + 2) = SUB164(auVar4 / auVar3,0) & 0x1f;
  }
  else {
    pvVar7 = _malloc((ulong)(iVar12 + 0x1fU >> 3) & 0x1ffffffc);
    *param_1 = (long)pvVar7;
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
    ___bzero(pvVar7);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (1 < DAT_10230ffd0) {
      pcVar10 = "no";
      if (param_8 != '\0') {
        pcVar10 = "yes";
      }
      FUN_100df99c0("","dimg",2,
                    "Way-II: block sizes: guest = %u, own = %llu alignment = %llu, has padding = %s"
                    ,param_3,param_7,param_4 % param_7,pcVar10);
      iVar12 = *(int *)((long)param_1 + 0xc);
    }
    if (iVar12 == 0) {
      return 1;
    }
    uVar13 = 0;
    do {
      uVar1 = param_4 + param_7;
      if ((long)param_4 < 0) {
        iVar12 = 0;
        if (-1 < (long)uVar1) goto LAB_100b31607;
LAB_100b31660:
        puVar2 = (uint *)(*param_1 + (ulong)(uVar13 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
      }
      else {
        iVar12 = (int)(param_4 / uVar9);
LAB_100b31607:
        uVar5 = ((uVar9 - 1) + uVar1) / uVar9;
        iVar6 = (int)uVar5;
        if (param_6 / uVar9 < (uVar5 & 0xffffffff)) goto LAB_100b31660;
        if (iVar6 != iVar12) {
          uVar11 = 1;
          do {
            uVar8 = iVar12 + -1 + uVar11;
            uVar8 = 1 << ((byte)uVar8 & 0x1f) & *(uint *)(param_2 + (ulong)(uVar8 >> 5) * 4);
            if ((uint)(iVar6 - iVar12) <= uVar11) break;
            uVar11 = uVar11 + 1;
          } while (uVar8 == 0);
          if (uVar8 != 0) goto LAB_100b31660;
        }
      }
      uVar13 = uVar13 + 1;
      param_4 = uVar1;
    } while (uVar13 < *(uint *)((long)param_1 + 0xc));
  }
  return 1;
}

