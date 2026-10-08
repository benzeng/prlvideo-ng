
void FUN_100698820(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  local_28 = (QArrayData *)QString::fromAscii_helper("{EF5CD91C-8F87-4534-9EB1-036480853C57}",0x26);
  FUN_10018c2b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  cVar2 = CVmFullScreen::isUseAllDisplays();
  pcVar3 = "1";
  if (cVar2 != '\0') {
    pcVar3 = "0";
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(pcVar3,1);
  FUN_100198ac0(uVar1,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006988dc;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006988dc:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

