
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db68e0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long local_40;
  
  if (((param_2 != 0) && (lVar4 = *param_1, lVar4 != 0)) && (lVar9 = param_1[1], lVar4 != lVar9)) {
    pcVar5 = FUN_100db6b80;
    if (param_2 == 3) {
      pcVar5 = FUN_100db6b50;
    }
    pcVar10 = FUN_100db6b20;
    if (param_2 != 2) {
      pcVar10 = pcVar5;
    }
    if (*(long *)(lVar4 + 0x20) != lVar9) {
      iVar12 = 1;
LAB_100db6950:
      if (lVar4 != 0) {
        iVar7 = 0;
        local_40 = 0;
        lVar9 = 0;
LAB_100db6970:
        iVar7 = iVar7 + 1;
        lVar3 = lVar4;
        iVar1 = 1;
        iVar13 = iVar12;
        lVar6 = local_40;
        if (iVar12 < 1) {
          iVar11 = 0;
          lVar8 = lVar9;
        }
        else {
          do {
            iVar11 = iVar1;
            lVar3 = *(long *)(lVar3 + 0x20);
            if (lVar3 == 0) {
              lVar3 = 0;
              lVar8 = lVar9;
              break;
            }
            lVar8 = lVar9;
            iVar1 = iVar11 + 1;
          } while (iVar11 < iVar12);
        }
        do {
          local_40 = lVar6;
          lVar9 = lVar8;
          lVar6 = lVar4;
          lVar8 = lVar3;
          if (iVar11 < 1) {
            if ((lVar3 == 0) || (iVar13 < 1)) goto LAB_100db6aa0;
            if (iVar11 != 0) goto LAB_100db6a09;
            iVar13 = iVar13 + -1;
            iVar11 = 0;
            lVar3 = *(long *)(lVar3 + 0x20);
          }
          else {
LAB_100db6a09:
            if ((lVar3 == 0) || (iVar13 == 0)) {
              iVar11 = iVar11 + -1;
              lVar6 = *(long *)(lVar4 + 0x20);
              lVar8 = lVar4;
            }
            else {
              lVar2 = (*pcVar10)(lVar4,lVar3);
              if (lVar2 < 1) {
                lVar6 = *(long *)(lVar4 + 0x20);
                iVar11 = iVar11 + -1;
                lVar8 = lVar4;
              }
              else {
                iVar13 = iVar13 + -1;
                lVar3 = *(long *)(lVar3 + 0x20);
              }
            }
          }
          lVar4 = lVar6;
          lVar6 = lVar8;
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x20) = lVar8;
            lVar6 = local_40;
          }
        } while( true );
      }
      _DAT_00000020 = 0;
      lVar9 = 0;
      local_40 = 0;
      goto LAB_100db6b05;
    }
    lVar4 = (*pcVar10)(lVar9,lVar4);
    if (lVar4 < 0) {
      lVar4 = *param_1;
      lVar9 = param_1[1];
      *param_1 = lVar9;
      param_1[1] = lVar4;
      *(long *)(lVar9 + 0x20) = lVar4;
      *(undefined8 *)(lVar4 + 0x20) = 0;
    }
  }
  return;
LAB_100db6aa0:
  lVar4 = lVar3;
  if (lVar3 == 0) goto code_r0x000100db6ab1;
  goto LAB_100db6970;
code_r0x000100db6ab1:
  *(undefined8 *)(lVar9 + 0x20) = 0;
  iVar12 = iVar12 * 2;
  lVar4 = local_40;
  if (iVar7 < 2) {
LAB_100db6b05:
    param_1[1] = lVar9;
    *param_1 = local_40;
    return;
  }
  goto LAB_100db6950;
}

