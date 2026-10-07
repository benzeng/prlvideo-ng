
void FUN_10029eb40(long param_1,short *param_2,uint param_3,void *param_4,uint param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  bool bVar16;
  double dVar17;
  
  sVar3 = *(size_t *)(param_1 + 0xd0);
  uVar13 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0xc4);
  uVar2 = *(uint *)(param_1 + 0x3c8);
  uVar12 = 0;
  uVar5 = param_3 / uVar2;
  uVar6 = param_5 - uVar5;
  uVar7 = uVar5;
  uVar4 = uVar12;
  if (param_5 <= uVar5) {
    uVar6 = 0;
    uVar7 = param_5;
    uVar4 = uVar5 - param_5;
  }
  if (uVar7 != 0) {
    uVar8 = ~uVar5;
    if (~uVar5 < ~param_5) {
      uVar8 = ~param_5;
    }
    do {
      uVar11 = 0;
      if (uVar1 != 0) {
        do {
          dVar17 = 0.0;
          if (uVar13 != 0) {
            dVar17 = 0.0;
            bVar16 = (uVar13 & 1) != 0;
            if (bVar16) {
              dVar17 = (double)(int)*param_2 *
                       *(double *)(param_1 + 0x1a8 + (uVar11 & 0x1fffffff) * 0x40) + 0.0;
            }
            uVar9 = (ulong)bVar16;
            if (uVar13 != 1) {
              lVar14 = (uVar11 & 0x1fffffff) * 0x40 + param_1 + 0x1b0;
              do {
                dVar17 = (double)(int)param_2[uVar9 + 1] * *(double *)(lVar14 + uVar9 * 8) +
                         (double)(int)param_2[uVar9] * *(double *)(lVar14 + -8 + uVar9 * 8) + dVar17
                ;
                uVar9 = uVar9 + 2;
              } while (uVar13 != (uint)uVar9);
            }
          }
          *(short *)((long)param_4 + uVar11 * 2) = (short)(int)dVar17;
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 1;
        } while (iVar10 != uVar1 - 1);
      }
      param_4 = (void *)((long)param_4 + (ulong)uVar1 * 2);
      param_2 = param_2 + uVar2 * uVar13;
      uVar12 = uVar12 + 1;
    } while (uVar12 != ~uVar8);
    if (uVar7 != 0) {
      _memcpy((void *)(param_1 + 0x188),(void *)((long)param_4 - sVar3),sVar3);
    }
  }
  if (((uVar4 != 0) && (uVar4 != uVar5)) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformMatrixMixPCM16] Drop %u of %u frames");
  }
  if (uVar6 != 0) {
    if ((uVar6 != param_5) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("AudioT","LocalDevices",3,
                    "[CAudioTransformMatrixMixPCM16] Silence %u of %u frames",uVar6,param_5);
    }
    if (param_6 == '\0') {
      ___bzero(param_4,uVar6 * sVar3);
      ___bzero(param_1 + 0x188,sVar3);
    }
    else {
      pvVar15 = (void *)(param_1 + 0x188);
      param_3 = param_3 / uVar2;
      if (param_5 <= param_3) {
        param_5 = param_3;
      }
      for (uVar13 = param_5 - param_3 & 7; uVar13 != 0; uVar13 = uVar13 - 1) {
        _memcpy(param_4,pvVar15,sVar3);
        param_4 = (void *)((long)param_4 + sVar3);
        uVar6 = uVar6 - 1;
      }
      if (6 < (param_5 - 1) - param_3) {
        do {
          _memcpy(param_4,pvVar15,sVar3);
          _memcpy((void *)((long)param_4 + sVar3),pvVar15,sVar3);
          param_4 = (void *)((long)((long)param_4 + sVar3) + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar15,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}

