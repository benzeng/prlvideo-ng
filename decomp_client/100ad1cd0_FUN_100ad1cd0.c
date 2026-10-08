
void FUN_100ad1cd0(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  CVmCoherence *pCVar9;
  long lVar10;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pCVar9 = (CVmCoherence *)CVmTools::getVmCoherence();
  plVar1 = (long *)param_1[0x13b];
  pcVar2 = *(code **)(*plVar1 + 0x140);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  uVar7 = CVmRunTimeOptions::getOptimizeModifiers();
  (*pcVar2)(plVar1,uVar7);
  CBaseNode::toString(SUB81(&local_40,0),(bool)((char)param_1 + '8'));
  CBaseNode::toString(SUB81(&local_48,0),(bool)((char)pCVar9 + '\x10'));
  cVar3 = operator==(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad1d99;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100ad1d99:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad1dc9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100ad1dc9:
  if (cVar3 != '\0') goto LAB_100ad1eba;
  cVar3 = FUN_100acadf0(param_1[2],1);
  if (cVar3 != '\0') {
    cVar3 = CVmCoherence::isExcludeDock();
    cVar4 = CVmCoherence::isExcludeDock();
    if (cVar3 == cVar4) {
      bVar5 = CVmCoherence::isMultiDisplay();
      bVar6 = CVmCoherence::isMultiDisplay();
      if ((bVar6 ^ bVar5) != 1) goto LAB_100ad1e2b;
    }
    (**(code **)(*param_1 + 0xe8))(param_1,0);
  }
LAB_100ad1e2b:
  bVar5 = CVmCoherence::isUseBorders();
  bVar6 = CVmCoherence::isUseBorders();
  if (((bVar6 ^ bVar5) == 1) &&
     (cVar3 = CVmCoherence::isUseBorders(), cVar3 != *(char *)((long)param_1 + 0xaa4))) {
    *(char *)((long)param_1 + 0xaa4) = cVar3;
    FUN_100ae32c0(param_1);
  }
  bVar5 = CVmCoherence::isCoherenceButtonVisibility();
  bVar6 = CVmCoherence::isCoherenceButtonVisibility();
  if (((bVar6 ^ bVar5) == 1) &&
     (cVar3 = CVmCoherence::isCoherenceButtonVisibility(), cVar3 != *(char *)((long)param_1 + 0xaa5)
     )) {
    *(char *)((long)param_1 + 0xaa5) = cVar3;
    FUN_100ae32e0(param_1);
  }
  CVmCoherence::operator=((CVmCoherence *)(param_1 + 5),pCVar9);
LAB_100ad1eba:
  CVmConfiguration::getVmSettings();
  lVar10 = CVmSettings::getVmCommonOptions();
  if ((lVar10 != 0) &&
     (lVar10 = param_1[0x154], iVar8 = CVmCommonOptions::getVmColor(), (int)lVar10 != iVar8)) {
    pcVar2 = *(code **)(*param_1 + 0x100);
    uVar7 = CVmCommonOptions::getVmColor();
    (*pcVar2)(param_1,uVar7);
  }
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar3 = CVmVideo::isEnableHiResDrawing();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar4 = CVmVideo::isEnableHiResDrawing();
  if (cVar3 == cVar4) {
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar5 = CVmVideo::isUseHiResInGuest();
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar6 = CVmVideo::isUseHiResInGuest();
    if ((bVar6 ^ bVar5) != 1) {
      return;
    }
  }
  FUN_100ad2030(param_1);
  return;
}

