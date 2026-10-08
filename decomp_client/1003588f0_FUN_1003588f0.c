
double FUN_1003588f0(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  QWidget *pQVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double local_20;
  
  dVar6 = 0.0;
  if (param_1 != 0) {
    pQVar4 = (QWidget *)FUN_100323e30(0,param_1);
    dVar6 = 0.0;
    if (pQVar4 != (QWidget *)0x0) {
      dVar6 = (double)FUN_1003277b0(0,param_1);
      if (dVar6 <= DAT_100e11050) {
        local_20 = DAT_100e11050;
      }
      else {
        local_20 = DAT_100e11050;
        uVar5 = FUN_100323dd0(param_1);
        FUN_10018c2b0(uVar5);
        CVmConfiguration::getVmHardwareList();
        CVmHardware::getVideo();
        cVar1 = CVmVideo::isUseHiResInGuest();
        if (cVar1 != '\0') {
          uVar5 = FUN_100323dd0(param_1);
          uVar2 = FUN_10018f890(uVar5);
          if (0x80b < uVar2) {
            iVar3 = FUN_100325aa0(param_1);
            local_20 = *(double *)(&DAT_100e18fc0 + (ulong)(iVar3 == 2) * 8);
          }
        }
      }
      iVar3 = MacUtils::getDisplayForWidget(pQVar4);
      dVar6 = (double)MacUtils::getDisplayDPI(iVar3,false);
      dVar7 = (double)FUN_1003277b0(param_1);
      local_20 = dVar7 * dVar6 * local_20;
      if (0.0 <= local_20) {
        iVar3 = (int)(local_20 + DAT_100e110f0);
      }
      else {
        iVar3 = (int)((local_20 - (double)(int)(DAT_100e110e0 + local_20)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + local_20);
      }
      dVar6 = (double)iVar3;
    }
  }
  return dVar6;
}

