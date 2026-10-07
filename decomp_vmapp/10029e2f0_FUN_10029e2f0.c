
void FUN_10029e2f0(long param_1,float *param_2,uint param_3,float *param_4,uint param_5,char param_6
                  )

{
  ulong uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  float *pfVar13;
  void *pvVar14;
  uint uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  
  sVar3 = *(size_t *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar12 = (ulong)uVar2;
  uVar15 = param_5 - param_3;
  uVar4 = 0;
  uVar6 = param_3;
  if (param_5 <= param_3) {
    uVar4 = param_3 - param_5;
    uVar15 = 0;
    uVar6 = param_5;
  }
  pfVar13 = param_4;
  if (uVar6 != 0) {
    uVar5 = ~param_3;
    if (~param_3 < ~param_5) {
      uVar5 = ~param_5;
    }
    lVar7 = ((ulong)(-uVar5 - 2) * 4 + 4) * uVar12;
    uVar9 = 0;
    do {
      if (uVar2 != 0) {
        bVar16 = (uVar2 & 1) != 0;
        if (bVar16) {
          *pfVar13 = (float)((double)*param_2 * *(double *)(param_1 + 0x70));
        }
        uVar10 = (ulong)bVar16;
        if (uVar2 != 1) {
          do {
            dVar17 = 0.0;
            dVar18 = 0.0;
            if (uVar10 < 8) {
              dVar18 = *(double *)(param_1 + 0x70 + uVar10 * 8);
            }
            pfVar13[uVar10] = (float)((double)param_2[uVar10] * dVar18);
            uVar1 = uVar10 + 1;
            if (uVar1 < 8) {
              dVar17 = *(double *)(param_1 + 0x78 + uVar10 * 8);
            }
            pfVar13[uVar10 + 1] = (float)((double)param_2[uVar10 + 1] * dVar17);
            uVar10 = uVar10 + 2;
          } while ((int)uVar1 != uVar2 - 1);
        }
      }
      pfVar13 = pfVar13 + uVar12;
      param_2 = param_2 + uVar12;
      uVar9 = uVar9 + 1;
    } while (uVar9 != ~uVar5);
    pfVar13 = (float *)((long)param_4 + lVar7);
    if (uVar6 != 0) {
      _memcpy((void *)(param_1 + 0x188),(void *)((long)param_4 + (lVar7 - sVar3)),sVar3);
    }
  }
  if (((uVar4 != 0) && (uVar4 != param_3)) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformFLOAT] Drop %u of %u frames",uVar4,
                  param_3);
  }
  if (uVar15 != 0) {
    if ((uVar15 != param_5) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformFLOAT] Silence %u of %u frames",
                    uVar15,param_5);
    }
    if (param_6 == '\0') {
      ___bzero(pfVar13,uVar15 * sVar3);
      ___bzero(param_1 + 0x188,sVar3);
    }
    else {
      pvVar8 = (void *)(param_1 + 0x188);
      uVar2 = param_3;
      if (param_3 < param_5) {
        uVar2 = param_5;
      }
      if ((uVar2 - param_3 & 7) != 0) {
        if (param_5 <= param_3) {
          param_5 = param_3;
        }
        iVar11 = -(param_5 - param_3 & 7);
        do {
          _memcpy(pfVar13,pvVar8,sVar3);
          pfVar13 = (float *)((long)pfVar13 + sVar3);
          uVar15 = uVar15 - 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0);
      }
      if (6 < (uVar2 - 1) - param_3) {
        do {
          _memcpy(pfVar13,pvVar8,sVar3);
          _memcpy((void *)((long)pfVar13 + sVar3),pvVar8,sVar3);
          pvVar14 = (void *)((long)((long)pfVar13 + sVar3) + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pvVar14 = (void *)((long)pvVar14 + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pvVar14 = (void *)((long)pvVar14 + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pvVar14 = (void *)((long)pvVar14 + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pvVar14 = (void *)((long)pvVar14 + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pvVar14 = (void *)((long)pvVar14 + sVar3);
          _memcpy(pvVar14,pvVar8,sVar3);
          pfVar13 = (float *)((long)pvVar14 + sVar3);
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
    }
  }
  return;
}

