
void FUN_100031690(long param_1,undefined8 *param_2,ulong param_3)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  
  if ((param_3 & 0x10) != 0) {
    piVar5 = (int *)*param_2;
    if (*piVar5 != 1) {
      FUN_100031c40(param_2);
      piVar5 = (int *)*param_2;
    }
    pQVar1 = *(QArrayData **)(piVar5 + 0x12);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    if ((((0xf < *(uint *)(pQVar1 + 4)) && (*(int *)(pQVar1 + *(long *)(pQVar1 + 0x10) + 4) == 1))
        && (*(int *)(pQVar1 + *(long *)(pQVar1 + 0x10)) == 2)) &&
       (((*(long *)(DAT_1011c3698 + 0x110) != 0 && ((*(byte *)(param_1 + 0x298) & 2) != 0)) &&
        (*(short *)(param_1 + 0x29a) != 0)))) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      iVar3 = CVmCommonOptions::getOsType();
      if (iVar3 == 8) {
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmCommonOptions();
        uVar4 = CVmCommonOptions::getOsVersion();
        if (0x80d < uVar4) {
          CVmConfiguration::getVmHardwareList();
          CVmHardware::getVideo();
          cVar2 = CVmVideo::isEnableHiResDrawing();
          if (cVar2 != '\0') {
            uStack_30 = 0;
            uStack_40 = 0;
            local_48 = 0x600080000000000;
            local_38 = (ulong)*(ushort *)(param_1 + 0x29a) << 0x10;
            if (0 < DAT_1011b55f8) {
              FUN_1008e3970("DYNRESHOST","vm",1,
                            "Clean tools installation: set guest resolution to [%d x %d]",0x800,
                            0x600);
            }
            FUN_100030750(param_1,1,&local_48,0);
          }
        }
      }
    }
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_21 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_21) {
          return;
        }
      }
      QArrayData::deallocate(pQVar1,1,8);
    }
  }
  return;
}

