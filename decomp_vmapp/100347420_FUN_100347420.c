
undefined8 FUN_100347420(byte *param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  float *pfVar13;
  undefined8 uVar14;
  bool bVar15;
  
  uVar14 = 9;
  if ((((0xf < (ulong)*(uint *)(param_2 + 4)) &&
       (uVar1 = *(uint *)(param_2 + 8),
       (ulong)uVar1 <= ((ulong)*(uint *)(param_2 + 4) - 0x10) / 0x18)) && (uVar14 = 4, uVar1 < 0x11)
      ) && (uVar8 = *(uint *)(param_2 + 0xc), uVar8 <= 0x10 - uVar1)) {
    uVar14 = 0;
    uVar10 = 0;
    if (uVar1 != 0) {
      pfVar9 = (float *)(param_2 + 0x10);
      pfVar13 = (float *)(param_1 + 0x3ac);
      iVar11 = 0;
      do {
        fVar4 = *pfVar9;
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        fVar7 = pfVar9[3];
        fVar2 = pfVar9[4];
        fVar3 = pfVar9[5];
        if ((((((pfVar13[-5] != fVar4) || (NAN(pfVar13[-5]) || NAN(fVar4))) ||
              ((pfVar13[-4] != fVar5 || ((NAN(pfVar13[-4]) || NAN(fVar5) || (pfVar13[-3] != fVar6)))
               ))) || (NAN(pfVar13[-3]) || NAN(fVar6))) ||
            (((pfVar13[-2] != fVar7 || (NAN(pfVar13[-2]) || NAN(fVar7))) || (pfVar13[-1] != fVar2)))
            ) || (NAN(pfVar13[-1]) || NAN(fVar2))) {
LAB_100347540:
          pfVar13[-5] = fVar4;
          pfVar13[-4] = fVar5;
          pfVar13[-3] = fVar6;
          pfVar13[-2] = fVar7;
          pfVar13[-1] = fVar2;
          *pfVar13 = fVar3;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << ((byte)iVar11 & 0x1f);
          *param_1 = *param_1 | 0x20;
        }
        else if ((*pfVar13 != fVar3) || (NAN(*pfVar13) || NAN(fVar3))) goto LAB_100347540;
        pfVar13 = pfVar13 + 6;
        pfVar9 = pfVar9 + 6;
        bVar15 = iVar11 != uVar1 - 1;
        iVar11 = iVar11 + 1;
      } while (bVar15);
      uVar8 = *(uint *)(param_2 + 0xc);
      uVar10 = uVar1;
    }
    if (uVar10 < uVar8 + uVar1) {
      pfVar9 = (float *)(param_1 + (ulong)uVar10 * 0x18 + 0x3ac);
      uVar12 = (ulong)uVar10;
      do {
        if ((((pfVar9[-5] != 0.0) || (NAN(pfVar9[-5]))) ||
            ((pfVar9[-4] != 0.0 || (((NAN(pfVar9[-4]) || (pfVar9[-3] != 0.0)) || (NAN(pfVar9[-3]))))
             ))) || (((pfVar9[-2] != 0.0 || (NAN(pfVar9[-2]))) ||
                     ((pfVar9[-1] != 0.0 ||
                      (((NAN(pfVar9[-1]) || (*pfVar9 != 0.0)) || (NAN(*pfVar9))))))))) {
          pfVar9[-5] = 0.0;
          pfVar9[-4] = 0.0;
          pfVar9[-1] = 0.0;
          pfVar9[0] = 0.0;
          pfVar9[-3] = 0.0;
          pfVar9[-2] = 0.0;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << ((byte)uVar12 & 0x1f);
          *param_1 = *param_1 | 0x20;
        }
        pfVar9 = pfVar9 + 6;
        iVar11 = (int)uVar12;
        uVar12 = uVar12 + 1;
      } while (iVar11 != (uVar8 + uVar1) - 1);
    }
  }
  return uVar14;
}

