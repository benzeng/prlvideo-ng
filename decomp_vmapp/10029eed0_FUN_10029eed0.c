
void FUN_10029eed0(long param_1,int *param_2,uint param_3,void *param_4,uint param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  double *pdVar18;
  bool bVar19;
  double dVar20;
  
  sVar3 = *(size_t *)(param_1 + 0xd0);
  uVar17 = *(uint *)(param_1 + 0xc4);
  uVar1 = *(uint *)(param_1 + 0x3c8);
  uVar13 = 0;
  uVar4 = param_3 / uVar1;
  uVar15 = param_5 - uVar4;
  uVar6 = uVar4 - param_5;
  uVar16 = (ulong)uVar15;
  if (uVar4 < param_5) {
    uVar6 = 0;
    uVar7 = uVar4;
  }
  else {
    uVar15 = 0;
    uVar7 = param_5;
    uVar16 = uVar13;
  }
  if (uVar7 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar5 = ~uVar4;
    if (~uVar4 < ~param_5) {
      uVar5 = ~param_5;
    }
    uVar8 = uVar1;
    do {
      if (uVar17 != 0) {
        uVar11 = 0;
        do {
          dVar20 = 0.0;
          if (uVar2 != 0) {
            dVar20 = 0.0;
            bVar19 = (uVar2 & 1) != 0;
            if (bVar19) {
              dVar20 = (double)*param_2 *
                       *(double *)(param_1 + 0x1a8 + (uVar11 & 0x1fffffff) * 0x40) + 0.0;
            }
            if (uVar2 != 1) {
              piVar10 = param_2 + (ulong)bVar19 + 1;
              pdVar18 = (double *)
                        (param_1 + 0x1b0 + ((uVar11 & 0x1fffffff) * 8 + (ulong)bVar19) * 8);
              iVar9 = (uVar2 + 1) - (bVar19 + 1);
              do {
                dVar20 = (double)*piVar10 * *pdVar18 + (double)piVar10[-1] * pdVar18[-1] + dVar20;
                piVar10 = piVar10 + 2;
                pdVar18 = pdVar18 + 2;
                iVar9 = iVar9 + -2;
              } while (iVar9 != 0);
            }
          }
          *(int *)((long)param_4 + uVar11 * 4) = (int)dVar20;
          iVar9 = (int)uVar11;
          uVar11 = uVar11 + 1;
        } while (iVar9 != uVar17 - 1);
        uVar8 = *(uint *)(param_1 + 0x3c8);
      }
      param_4 = (void *)((long)param_4 + (ulong)uVar17 * 4);
      param_2 = param_2 + uVar8 * uVar2;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar12;
    } while (uVar12 != ~uVar5);
    if (uVar7 != 0) {
      _memcpy((void *)(param_1 + 0x188),(void *)((long)param_4 - sVar3),sVar3);
    }
  }
  if (((uVar6 != 0) && (uVar6 != uVar4)) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformMatrixMixPCM32] Drop %u of %u frames");
  }
  if (uVar15 != 0) {
    if ((uVar15 != param_5) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("AudioT","LocalDevices",3,
                    "[CAudioTransformMatrixMixPCM32] Silence %u of %u frames",uVar16,param_5);
    }
    if (param_6 == '\0') {
      ___bzero(param_4,uVar16 * sVar3);
      ___bzero(param_1 + 0x188,sVar3);
    }
    else {
      pvVar14 = (void *)(param_1 + 0x188);
      param_3 = param_3 / uVar1;
      if (param_5 <= param_3) {
        param_5 = param_3;
      }
      for (uVar17 = param_5 - param_3 & 7; uVar17 != 0; uVar17 = uVar17 - 1) {
        _memcpy(param_4,pvVar14,sVar3);
        param_4 = (void *)((long)param_4 + sVar3);
        uVar16 = (ulong)((int)uVar16 - 1);
      }
      if (6 < (param_5 - 1) - param_3) {
        do {
          _memcpy(param_4,pvVar14,sVar3);
          _memcpy((void *)((long)param_4 + sVar3),pvVar14,sVar3);
          param_4 = (void *)((long)((long)param_4 + sVar3) + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          _memcpy(param_4,pvVar14,sVar3);
          param_4 = (void *)((long)param_4 + sVar3);
          uVar17 = (int)uVar16 - 8;
          uVar16 = (ulong)uVar17;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}

