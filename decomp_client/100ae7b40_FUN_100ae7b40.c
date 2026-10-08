
undefined1  [16] FUN_100ae7b40(long *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined local_78 [24];
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (param_2 < 0) {
    lVar8 = *param_1;
  }
  else {
    lVar8 = *param_1;
    if (param_2 < *(int *)(lVar8 + 4)) goto LAB_100ae7bb3;
  }
  iVar13 = -1;
  if (0 < (long)*(int *)(lVar8 + 4)) {
    lVar14 = lVar8 + -4 + *(long *)(lVar8 + 0x10);
    lVar10 = (long)*(int *)(lVar8 + 4) << 2;
    do {
      if (lVar10 == 0) goto LAB_100ae7bab;
      lVar10 = lVar10 + -4;
      piVar1 = (int *)(lVar14 + 4);
      lVar14 = lVar14 + 4;
    } while (*piVar1 != (int)param_1[1]);
    iVar13 = (int)((ulong)(lVar14 - (lVar8 + *(long *)(lVar8 + 0x10))) >> 2);
  }
LAB_100ae7bab:
  param_2 = 0;
  if (iVar13 != -1) {
    param_2 = iVar13;
  }
LAB_100ae7bb3:
  iVar13 = *(int *)(lVar8 + *(long *)(lVar8 + 0x10) + (long)param_2 * 4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSScreen_10226a8e8,PTR_s_screens_102269810);
  uVar6 = (*(code *)puVar2)(uVar5,PTR_s_count_102268e68);
  puVar3 = PTR_s_deviceDescription_10226a538;
  iVar11 = 0;
  if (uVar6 != 0) {
    uVar12 = 0;
    do {
      uVar7 = (*(code *)puVar2)(uVar5,PTR_s_objectAtIndex__102269480,uVar12);
      lVar8 = (*(code *)puVar2)(uVar7,puVar3);
      iVar11 = (int)uVar12;
      if (((lVar8 != 0) &&
          (lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (lVar8,PTR_s_objectForKey__1022699d0,&cf_NSScreenNumber), lVar8 != 0))
         && (iVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar8,PTR_s_unsignedIntValue_10226a540),
            iVar4 == iVar13)) break;
      uVar12 = (ulong)(iVar11 + 1);
      iVar11 = 0;
    } while (uVar12 < uVar6);
  }
  IVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_objectAtIndex__102269480,iVar11);
  if (IVar9 == 0) {
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_58 = 0.0;
    dStack_50 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,IVar9,PTR_s_visibleFrame_10226a548);
  }
  IVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_objectAtIndex__102269480,0);
  if (IVar9 == 0) {
    dStack_60 = 0.0;
  }
  else {
    _objc_msgSend_stret(local_78,IVar9,PTR_s_frame_102268b50);
  }
  iVar13 = (int)(dStack_60 - (dStack_40 + dStack_50));
  auVar15._4_4_ = iVar13;
  auVar15._0_4_ = (int)local_58;
  auVar15._12_4_ = (int)dStack_40 + -1 + iVar13;
  auVar15._8_4_ = (int)local_58 + -1 + (int)local_48;
  return auVar15;
}

