
undefined1 FUN_100751d80(undefined8 param_1,int *param_2,int *param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  
  if ((param_4 & 3) == 0) {
    uVar8 = *param_5;
    if (((uVar8 | param_4) & 3) == 0) {
      piVar3 = param_2;
      piVar6 = param_3;
      if (((ulong)(long)(int)param_4 >> 2 != 0) && (7 < uVar8)) {
        piVar1 = param_2 + ((ulong)(long)(int)param_4 >> 2);
        piVar11 = (int *)(((long)(int)uVar8 & 0xfffffffffffffffcU) + (long)param_3);
        iVar5 = 0;
        iVar12 = -1;
        piVar7 = param_3 + 2;
        piVar9 = param_2;
        piVar15 = param_3;
        do {
          piVar6 = piVar7;
          if (iVar12 < 0) {
            if ((((piVar1 < piVar9 + 4) || (iVar5 = *piVar9, piVar9[3] != iVar5)) ||
                (piVar9[2] != iVar5)) || (iVar12 = 4, piVar3 = piVar9 + 4, piVar9[1] != iVar5))
            goto LAB_100751e90;
LAB_100751ef7:
            for (; (piVar3 < piVar1 && (*piVar3 == iVar5)); piVar3 = piVar3 + 1) {
              iVar12 = iVar12 + 1;
            }
            *piVar15 = iVar12;
            piVar15[1] = iVar5;
            iVar12 = 0;
          }
          else {
            piVar3 = piVar9;
            if (iVar12 != 0) goto LAB_100751ef7;
LAB_100751e90:
            iVar5 = *piVar9;
            piVar15[1] = iVar5;
            piVar3 = piVar9 + 1;
            iVar12 = 0;
            iVar2 = 1;
            iVar10 = 1;
            iVar13 = iVar5;
            if (piVar3 < piVar1) {
              do {
                piVar7 = piVar3;
                piVar3 = piVar7;
                iVar5 = iVar13;
                if ((3 < iVar10) || (piVar11 <= piVar6)) break;
                iVar5 = *piVar7;
                iVar10 = iVar10 + 1;
                if (iVar5 != iVar13) {
                  iVar10 = 1;
                }
                *piVar6 = iVar5;
                piVar6 = piVar6 + 1;
                iVar2 = iVar2 + 1;
                piVar3 = piVar9 + 2;
                piVar9 = piVar7;
                iVar13 = iVar5;
              } while (piVar3 < piVar1);
              if (iVar10 == 4) {
                iVar2 = iVar2 + -4;
                piVar6 = piVar6 + -4;
                iVar12 = 4;
              }
            }
            *piVar15 = -iVar2;
          }
        } while ((piVar6 + 2 <= piVar11) &&
                (piVar7 = piVar6 + 2, piVar9 = piVar3, piVar15 = piVar6,
                piVar3 < piVar1 || iVar12 != 0));
      }
      uVar8 = (int)piVar3 - (int)param_2 & 0xfffffffc;
      uVar14 = (int)piVar6 - (int)param_3 & 0xfffffffc;
      if (uVar8 == param_4) {
        *param_5 = uVar14;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        FUN_1008e3970("","Compression",0,
                      "CCompressionEngineRLE4::do_compress() only %d out of %d bytes compressed to %d"
                      ,uVar8,param_4,uVar14);
      }
    }
    else {
      uVar4 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngineRLE4::do_compress() failed");
    }
  }
  else {
    uVar4 = 0;
    FUN_1008e3970("","Compression",0,"CCompressionEngineRLE4::do_compress(%u) unaligned size",
                  param_4);
  }
  return uVar4;
}

