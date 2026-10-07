
void FUN_1004c66a0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  CVmHostSharing *pCVar5;
  long lVar6;
  long *plVar7;
  CVmHostSharing local_f0 [192];
  
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    pCVar5 = (CVmHostSharing *)CVmSharing::getHostSharing();
    if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
      CVmConfiguration::getVmSettings();
      lVar6 = CVmSettings::getVmTools();
      if ((pCVar5 != (CVmHostSharing *)0x0) && (lVar6 != 0)) {
        plVar7 = operator_new(0xe0);
        CVmHostSharing::CVmHostSharing(local_f0,pCVar5);
        uVar3 = CVmTools::isIsolatedVm();
        FUN_1004f4660(plVar7,param_1,local_f0,uVar3);
        CVmHostSharing::~CVmHostSharing(local_f0);
        uVar2 = *(undefined8 *)(*param_1 + 0x90);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        cVar4 = FUN_100041750(uVar2,plVar7);
        if (cVar4 == '\0') {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        LOCK();
        plVar1 = plVar7 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  return;
}

