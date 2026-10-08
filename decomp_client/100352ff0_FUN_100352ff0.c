
void FUN_100352ff0(long param_1)

{
  char cVar1;
  long lVar2;
  CVmConfiguration *pCVar3;
  CVmVideo *pCVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  CVmVideo local_1f0 [224];
  CVmConfiguration local_110 [248];
  
  cVar1 = FUN_10011bfc0();
  dVar6 = DAT_100e12b90;
  if (cVar1 == '\0') {
    dVar6 = DAT_100e11050;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar5);
  if (lVar2 != 0) {
    FUN_10018c2b0(lVar2);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    dVar7 = (double)CVmVideo::getHostScaleFactor();
    if ((dVar7 != dVar6) || (NAN(dVar7) || NAN(dVar6))) {
      pCVar3 = (CVmConfiguration *)FUN_10018c2b0(lVar2);
      CVmConfiguration::CVmConfiguration(local_110,pCVar3);
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getVideo();
      CVmVideo::setHostScaleFactor(dVar6);
      CVmConfiguration::getVmHardwareList();
      pCVar4 = (CVmVideo *)CVmHardware::getVideo();
      CVmVideo::CVmVideo(local_1f0,pCVar4);
      FUN_100198840(lVar2,local_1f0);
      CVmVideo::~CVmVideo(local_1f0);
      CVmConfiguration::~CVmConfiguration(local_110);
    }
  }
  return;
}

