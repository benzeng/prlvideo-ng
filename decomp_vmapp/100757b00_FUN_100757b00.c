
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_100757b00(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
             ulong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  bool bVar15;
  size_t local_38;
  
  lVar14 = DAT_1011bf938 - DAT_1011bf930 >> 6;
  _DAT_1011bf980 = lVar14 + 4;
  uVar12 = _DAT_1011bf980 * 0x40;
  if (param_6 < uVar12) {
    pcVar6 = "section headers size > buffer size";
  }
  else {
    param_6 = param_6 + _DAT_1011bf980 * -0x40;
    ___bzero(param_5,uVar12);
    uVar5 = DAT_1011bf938 - DAT_1011bf930 >> 6;
    if (DAT_1011bf938 != DAT_1011bf930) {
      puVar9 = (undefined8 *)(param_5 + 0x120);
      puVar7 = (undefined8 *)(DAT_1011bf930 + 8);
      iVar10 = 0x50;
      uVar11 = 0;
      do {
        *(undefined4 *)((long)puVar9 + -0x1c) = 1;
        puVar9[-3] = 5;
        puVar9[-2] = puVar7[1];
        puVar9[-1] = puVar7[3];
        *puVar9 = *puVar7;
        *(int *)(puVar9 + -4) = iVar10;
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 8;
        iVar10 = iVar10 + 0x14;
        puVar7 = puVar7 + 8;
      } while (uVar11 < uVar5);
    }
    *(undefined4 *)(param_5 + 0x44) = 3;
    *(ulong *)(param_5 + 0x58) = DAT_1011bf978 + uVar12;
    uVar5 = uVar5 * 0x14 + 0x50;
    *(ulong *)(param_5 + 0x60) = uVar5;
    *(undefined4 *)(param_5 + 0x40) = 0x14;
    if (uVar5 <= param_6) {
      _memcpy((void *)(uVar12 + param_5),&DAT_100b4ae10,0x50);
      if (DAT_1011bf938 != DAT_1011bf930) {
        pcVar6 = (char *)(lVar14 * 0x40 + 0x150 + param_5);
        uVar5 = 0;
        lVar14 = 0x28;
        do {
          qstrncpy(pcVar6,(char *)(DAT_1011bf930 + lVar14),0x14);
          uVar5 = uVar5 + 1;
          pcVar6 = pcVar6 + 0x14;
          lVar14 = lVar14 + 0x40;
        } while (uVar5 < (ulong)(DAT_1011bf938 - DAT_1011bf930 >> 6));
      }
      pcVar13 = (char *)((long)(uVar12 + param_5) + *(long *)(param_5 + 0x60));
      *(undefined4 *)(param_5 + 0x84) = 3;
      *(char **)(param_5 + 0x98) = pcVar13 + (DAT_1011bf978 - param_5);
      *(undefined4 *)(param_5 + 0x80) = 0x28;
      pcVar6 = pcVar13;
      if (param_3 != 0) {
        local_38 = param_6 - *(long *)(param_5 + 0x60);
        uVar8 = 1;
        uVar12 = 0;
        do {
          lVar14 = uVar12 * 0x768;
          iVar10 = _snprintf(pcVar6,local_38,
                             ">>> VCPU %u <<<\nRELIABLE: %d\nEFER: %llx\nCR0: %llx\nCR2: %llx\nCR3: %llx\nCR4: %llx\nGDT_BASE: %llx\nGDT_LIMIT: %llx\nLDT_BASE:: %llx\nLDT_LIMIT:: %llx\nIDT_BASE: %llx\nIDT_LIMIT: %llx\nTSS_BASE: %llx\nTSS_LIMIT: %llx\nTR: %hx\nCS_BASE: %llx\nDS_BASE: %llx\nES_BASE: %llx\nSS_BASE: %llx\nFS_BASE: %llx\nGS_BASE: %llx\n"
                             ,(ulong)*(uint *)(param_4 + 0x5b8 + lVar14),
                             (ulong)(*(int *)(param_4 + 0x270 + lVar14) != 0),
                             *(undefined8 *)(param_4 + 0x228 + lVar14),
                             *(undefined8 *)(param_4 + 0x230 + lVar14),
                             *(undefined8 *)(param_4 + 0x238 + lVar14),
                             *(undefined8 *)(param_4 + 0x90 + lVar14),
                             *(undefined8 *)(param_4 + 0x98 + lVar14),
                             *(undefined8 *)(param_4 + 0x240 + lVar14),
                             *(undefined8 *)(param_4 + 0x248 + lVar14),
                             *(undefined8 *)(param_4 + 0x700 + lVar14),
                             *(undefined8 *)(param_4 + 0x708 + lVar14),
                             *(undefined8 *)(param_4 + 0x250 + lVar14),
                             *(undefined8 *)(param_4 + 600 + lVar14),
                             *(undefined8 *)(param_4 + 0x730 + lVar14),
                             *(undefined8 *)(param_4 + 0x738 + lVar14),
                             (uint)*(ushort *)(param_4 + 0x711 + lVar14),
                             *(undefined8 *)(param_4 + 0x610 + lVar14),
                             *(undefined8 *)(param_4 + 0x670 + lVar14),
                             *(undefined8 *)(param_4 + 0x5e0 + lVar14),
                             *(undefined8 *)(param_4 + 0x640 + lVar14),
                             *(undefined8 *)(param_4 + 0x6a0 + lVar14),
                             *(undefined8 *)(param_4 + 0x6d0 + lVar14));
          if (iVar10 < 0) {
            return 0;
          }
          uVar12 = (ulong)iVar10;
          bVar15 = local_38 < uVar12;
          local_38 = local_38 - uVar12;
          if (bVar15) {
            return 0;
          }
          pcVar6 = pcVar6 + uVar12;
          uVar12 = (ulong)uVar8;
          uVar8 = uVar8 + 1;
        } while (uVar12 < param_3);
      }
      pcVar6[-1] = '\0';
      *(long *)(param_5 + 0xa0) = (long)pcVar6 - (long)pcVar13;
      *(undefined4 *)(param_5 + 0xc4) = 7;
      uVar3 = DAT_1011bf968._4_4_;
      uVar2 = (undefined4)DAT_1011bf968;
      uVar1 = DAT_1011bf960._4_4_;
      *(undefined4 *)(param_5 + 0xd8) = (undefined4)DAT_1011bf960;
      *(undefined4 *)(param_5 + 0xdc) = uVar1;
      *(undefined4 *)(param_5 + 0xe0) = uVar2;
      *(undefined4 *)(param_5 + 0xe4) = uVar3;
      *(undefined4 *)(param_5 + 0xc0) = 0x3c;
      uVar4 = FUN_1007567e0();
      return uVar4;
    }
    pcVar6 = "section names len > buffer size";
  }
  FUN_1008e3970("","dbgdump",0,pcVar6);
  return 0;
}

