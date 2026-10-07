
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004aaeb0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  cVar2 = FUN_1004ab040((double)*param_1,(double)param_1[1],local_60);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = FUN_1004ab180(local_60,1);
  pcVar1 = DAT_1011ccd98;
  if (iVar3 != 0) {
    local_28 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x18);
    local_30 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x10);
    local_40 = *(undefined8 *)PTR__CGRectNull_100ba2058;
    local_38 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 8);
    uVar4 = (*DAT_1011ccc38)();
    iVar5 = (*pcVar1)(uVar4,iVar3,&local_40);
    if ((iVar5 == 0) && (lVar6 = _CGWindowListCreateImage(8,iVar3,0), lVar6 != 0)) {
      uVar7 = _CGImageGetWidth(lVar6);
      auVar10._8_4_ = (int)((ulong)uVar7 >> 0x20);
      auVar10._0_8_ = uVar7;
      auVar10._12_4_ = _UNK_100b2e9f4;
      dVar8 = (double)CONCAT44(_DAT_100b2e9f0,(int)uVar7) - _DAT_100b2ea00;
      dVar12 = auVar10._8_8_ - _UNK_100b2ea08;
      uVar7 = _CGImageGetHeight(lVar6);
      auVar11._8_4_ = (int)((ulong)uVar7 >> 0x20);
      auVar11._0_8_ = uVar7;
      auVar11._12_4_ = _UNK_100b2e9f4;
      dVar9 = ((double)CONCAT44(_DAT_100b2e9f0,(int)uVar7) - _DAT_100b2ea00) +
              (auVar11._8_8_ - _UNK_100b2ea08);
      _CFRelease(lVar6);
      dVar13 = *(double *)PTR__CGSizeZero_100ba2060;
      dVar12 = dVar8 + dVar12;
      dVar8 = *(double *)(PTR__CGSizeZero_100ba2060 + 8);
    }
    else {
      dVar13 = *(double *)PTR__CGSizeZero_100ba2060;
      dVar9 = *(double *)(PTR__CGSizeZero_100ba2060 + 8);
      dVar12 = dVar13;
      dVar8 = dVar9;
    }
    if ((dVar12 == dVar13) && (!NAN(dVar12) && !NAN(dVar13))) {
      if ((dVar9 == dVar8) && (!NAN(dVar9) && !NAN(dVar8))) {
        return 0;
      }
    }
    return (int)(dVar12 * dVar9 * _DAT_100b44b38);
  }
  return 0;
}

