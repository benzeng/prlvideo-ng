
undefined8 FUN_100ba5b60(long param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  long lVar12;
  size_t sVar13;
  long local_3c8 [12];
  long local_368;
  long local_360;
  undefined1 local_358 [528];
  undefined1 local_148 [256];
  undefined1 local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar4 = 0xffffffff;
  lVar12 = 0;
  local_38 = lVar5;
  if (*(char *)(param_1 + 0x100) == '\n') {
    puVar10 = local_358;
    do {
      ___sprintf_chk(puVar10,0,0xffffffffffffffff,"%2.2X",*(undefined1 *)(param_1 + lVar12));
      lVar12 = lVar12 + 1;
      puVar10 = puVar10 + 2;
    } while (lVar12 != 0x100);
    FUN_100bf96c0(local_3c8);
    FUN_100bf9460(local_3c8,param_1 + 0x101,(long)(param_2 + -0x101));
    FUN_100bf95d0(local_48,local_3c8);
    local_3c8[0] = 0;
    lVar5 = FUN_100c26720();
    local_360 = lVar5;
    local_368 = FUN_100c26720();
    iVar3 = -1;
    sVar13 = 0;
    if ((lVar5 == 0) || (local_368 == 0)) {
      pcVar6 = (char *)0x0;
      lVar5 = 0;
    }
    else {
      if (DAT_1023156f0 == '\0') {
        if (DAT_1022f02e1 == '-') {
          DAT_1023156f0 = '-';
          puVar10 = &DAT_1023156f1;
        }
        else {
          puVar10 = &DAT_1023156f0;
        }
        ___sprintf_chk(puVar10,0,0xffffffffffffffff,"%2.2X",DAT_1022f02e2);
        ___sprintf_chk(puVar10 + 2,0,0xffffffffffffffff,"%2.2X",DAT_1022f02e3);
        ___sprintf_chk(puVar10 + 4,0,0xffffffffffffffff,"%2.2X",DAT_1022f02e4);
      }
      if (DAT_102315700 == '\0') {
        if ((DAT_1022f01e0 & 0xff) == 0x2d) {
          DAT_102315700 = '-';
          puVar10 = &DAT_102315701;
        }
        else {
          puVar10 = &DAT_102315700;
        }
        ___sprintf_chk(puVar10,0,0xffffffffffffffff,"%2.2X",DAT_1022f01e0 >> 8);
        lVar5 = 0;
        do {
          puVar10 = puVar10 + 2;
          ___sprintf_chk(puVar10,0,0xffffffffffffffff,"%2.2X",(&DAT_1022f01e2)[lVar5]);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 != 0xff);
      }
      iVar2 = FUN_100c2a3e0(&local_368,&DAT_1023156f0);
      if (((iVar2 == 0) || (iVar2 = FUN_100c2a3e0(&local_360,&DAT_102315700), iVar2 == 0)) ||
         (lVar12 = FUN_100c27a20(), lVar12 == 0)) {
        lVar5 = 0;
        sVar13 = 0;
        pcVar6 = (char *)0x0;
      }
      else {
        iVar2 = FUN_100c26610(local_360);
        sVar13 = (size_t)((int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3);
        pcVar6 = _malloc(sVar13);
        lVar5 = 0;
        iVar3 = -1;
        if ((0x7ff < iVar2 + 7) && (pcVar6 != (char *)0x0)) {
          lVar5 = FUN_100c26720();
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            local_3c8[0] = FUN_100c26720();
            if (((local_3c8[0] != 0) && (iVar2 = FUN_100c2a3e0(local_3c8,local_358), iVar2 != 0)) &&
               (lVar7 = FUN_100c330d0(), lVar7 != 0)) {
              iVar2 = FUN_100c331e0(lVar7,local_360,lVar12);
              iVar3 = -1;
              if ((((iVar2 != 0) &&
                   (iVar2 = FUN_100c23e40(lVar5,local_3c8[0],local_368,local_360,lVar12,lVar7),
                   iVar2 != 0)) && (iVar2 = FUN_100c26ff0(lVar5,pcVar6), *pcVar6 == '\x01')) &&
                 (1 < iVar2)) {
                iVar8 = 0;
                pcVar1 = pcVar6;
                pcVar11 = pcVar6 + 1;
                do {
                  pcVar9 = pcVar1;
                  if (*pcVar11 != -1) {
                    if (*pcVar11 != '\0') goto LAB_100ba5f50;
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  pcVar1 = pcVar11;
                  pcVar11 = pcVar9 + 2;
                } while (iVar8 < iVar2 + -1);
                if ((iVar8 != iVar2 + -1) && (7 < iVar8)) {
                  iVar3 = (iVar2 + -2) - iVar8;
                  ___memcpy_chk(local_148,pcVar9 + 2,iVar3,0x100);
                }
              }
LAB_100ba5f50:
              FUN_100c33190(lVar7);
            }
          }
        }
        FUN_100c27ab0(lVar12);
      }
    }
    if (local_3c8[0] != 0) {
      FUN_100c266b0();
    }
    if (lVar5 != 0) {
      FUN_100c266b0(lVar5);
    }
    if (local_368 != 0) {
      FUN_100c266b0();
    }
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (local_360 != 0) {
      FUN_100c266b0();
    }
    if (pcVar6 != (char *)0x0) {
      ___bzero(pcVar6,sVar13);
      _free(pcVar6);
    }
    uVar4 = 0xfffffffe;
    if (iVar3 == 0x10) {
      iVar3 = _memcmp(local_48,local_148,0x10);
      uVar4 = 0xfffffffe;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

