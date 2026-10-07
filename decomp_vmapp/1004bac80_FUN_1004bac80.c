
undefined1 FUN_1004bac80(char param_1,int param_2,long *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_3 + 8) = param_2;
  pcVar1 = DAT_1011cceb8;
  if (param_1 == '\0') {
    uVar3 = (*DAT_1011ccc38)();
    lVar9 = (*pcVar1)(uVar3,param_2);
    param_3[1] = lVar9;
    if (lVar9 == 0) {
      return 0;
    }
    cVar2 = (*DAT_1011ccec8)(lVar9);
    if (cVar2 != '\0') {
      iVar4 = (*DAT_1011cced8)(param_3[1]);
      iVar5 = (*DAT_1011ccee0)(param_3[1]);
      uVar10 = (*DAT_1011ccf10)(param_3[1]);
      iVar6 = (*DAT_1011ccef0)(param_3[1]);
      iVar7 = (*DAT_1011ccee8)(param_3[1]);
      uVar3 = (*DAT_1011ccef8)(param_3[1]);
      uVar11 = _CGColorSpaceCreateDeviceRGB();
      uVar8 = (iVar7 / iVar6) * iVar4;
      if ((iVar6 == 8) && (iVar7 == 0x20)) {
        uVar8 = uVar8 + 0x3f & 0xffffffc0;
      }
      lVar9 = _CGBitmapContextCreateWithData
                        (uVar10,(long)iVar4,(long)iVar5,(long)iVar6,(long)(int)uVar8,uVar11,uVar3,0,
                         0);
      *param_3 = lVar9;
      _CGColorSpaceRelease(uVar11);
      if (*param_3 != 0) {
        (*DAT_1011ccf00)(&local_60,param_3[1]);
        param_3[7] = local_38;
        param_3[6] = local_40;
        param_3[5] = local_48;
        param_3[4] = local_50;
        param_3[3] = local_58;
        param_3[2] = local_60;
        _CGContextScaleCTM(param_3[2],param_3[5] ^ DAT_100b5a890,*param_3);
        lVar9 = *param_3;
        goto LAB_1004bae5e;
      }
      (*DAT_1011cced0)(param_3[1]);
    }
    (*DAT_1011ccec0)(param_3[1]);
    uVar12 = 0;
  }
  else {
    param_3[1] = 0;
    pcVar1 = DAT_1011ccdd0;
    uVar3 = (*DAT_1011ccc38)();
    lVar9 = (*pcVar1)(uVar3,param_2,0);
    *param_3 = lVar9;
    if (lVar9 == 0) {
      return 0;
    }
LAB_1004bae5e:
    _CGContextSetBlendMode(lVar9,0x11);
    _CGContextSetInterpolationQuality(*param_3,1);
    uVar12 = 1;
  }
  return uVar12;
}

