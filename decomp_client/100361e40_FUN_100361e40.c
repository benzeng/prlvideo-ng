
undefined4 FUN_100361e40(undefined8 param_1,double param_2,undefined8 *param_3,long param_4)

{
  short sVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  double dVar10;
  
  pcVar2 = (char *)param_3[1];
  if (*(int *)(*(long *)(param_4 + 0x40) + 0xc) - *(int *)(*(long *)(param_4 + 0x40) + 8) == 1) {
    dVar10 = (double)QTouchEvent::TouchPoint::normalizedPos();
    sVar1 = *(short *)(param_4 + 0x10);
    if (sVar1 != 0xc4) {
      if (sVar1 == 0xc3) {
        if (*pcVar2 == '\0') {
          return 0;
        }
        iVar7 = (int)(dVar10 * DAT_100e16cb0 + DAT_100e110f0);
        iVar6 = (int)(param_2 * DAT_100e16cb0 + DAT_100e110f0);
        iVar5 = 0x10000017;
        iVar8 = 100;
        if (iVar7 < 100) {
          iVar5 = (uint)(8 < iVar7) * 4 + 0x10000013;
          iVar8 = iVar7;
        }
        iVar7 = 100 - iVar7;
        if ((iVar6 < iVar8) && (iVar8 = iVar6, iVar6 < 9)) {
          iVar5 = 0x10000015;
        }
        if ((iVar7 < iVar8) && (iVar8 = iVar7, iVar7 < 9)) {
          iVar5 = 0x10000014;
        }
        iVar7 = 0x10000016;
        if (iVar8 <= 100 - iVar6) {
          iVar7 = iVar5;
        }
        if (8 < 100 - iVar6) {
          iVar7 = iVar5;
        }
        if (iVar7 == 0x10000017) {
          if (*(int *)(pcVar2 + 8) != 0x10000017) {
            return 0;
          }
          uVar9 = *(undefined4 *)(pcVar2 + 4);
          *(undefined4 *)(pcVar2 + 8) = uVar9;
        }
        else {
          if (iVar7 != *(int *)(pcVar2 + 4)) goto LAB_100362006;
          uVar9 = 0;
        }
        *(int *)(pcVar2 + 4) = iVar7;
        return uVar9;
      }
      if (sVar1 != 0xc2) {
        return 0;
      }
      iVar7 = (int)(dVar10 * DAT_100e16cb0 + DAT_100e110f0);
      iVar6 = (int)(param_2 * DAT_100e16cb0 + DAT_100e110f0);
      iVar5 = 0x10000017;
      iVar8 = 100;
      if (iVar7 < 100) {
        iVar5 = (uint)(2 < iVar7) * 4 + 0x10000013;
        iVar8 = iVar7;
      }
      iVar7 = 100 - iVar7;
      if ((iVar6 < iVar8) && (iVar8 = iVar6, iVar6 < 3)) {
        iVar5 = 0x10000015;
      }
      if ((iVar7 < iVar8) && (iVar8 = iVar7, iVar7 < 3)) {
        iVar5 = 0x10000014;
      }
      iVar7 = 0x10000016;
      if (iVar8 <= 100 - iVar6) {
        iVar7 = iVar5;
      }
      if (2 < 100 - iVar6) {
        iVar7 = iVar5;
      }
      if (iVar7 != 0x10000017) {
        uVar4 = FUN_10035da10(*param_3);
        FUN_10018c2b0(uVar4);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmTools();
        CVmTools::getGestures();
        cVar3 = CVmGestures::isEnabled();
        if (cVar3 == '\0') {
          return 0;
        }
        *pcVar2 = '\x01';
        *(int *)(pcVar2 + 4) = iVar7;
        pcVar2[8] = '\x17';
        pcVar2[9] = '\0';
        pcVar2[10] = '\0';
        pcVar2[0xb] = '\x10';
        return 1;
      }
    }
  }
LAB_100362006:
  uVar9 = 0;
  if (*pcVar2 != '\0') {
    *pcVar2 = '\0';
    uVar9 = 2;
  }
  return uVar9;
}

