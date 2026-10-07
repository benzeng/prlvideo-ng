
void FUN_1004682d0(long param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    lVar4 = CVmConfiguration::getVmSettings();
    if (lVar4 != 0) {
      lVar4 = CVmSettings::getVmTools();
      if (lVar4 != 0) {
        lVar4 = CVmTools::getClipboardSync();
        if (lVar4 != 0) {
          cVar2 = ClipboardSync::isEnabled();
          if (cVar2 == '\0') {
            bVar3 = 0;
          }
          else {
            bVar3 = CVmTools::isIsolatedVm();
            bVar3 = bVar3 ^ 1;
          }
          cVar2 = ClipboardSync::isPreserveTextFormatting();
          goto LAB_10046834b;
        }
      }
    }
  }
  cVar2 = '\0';
  bVar3 = 0;
LAB_10046834b:
  QMutex::lock();
  bVar5 = bVar3 == *(byte *)(param_1 + 0x58);
  if (!bVar5) {
    *(byte *)(param_1 + 0x58) = bVar3;
  }
  if (((byte)(bVar3 ^ 1 | bVar5) == 1) && (cVar2 == *(char *)(param_1 + 0x78))) {
    bVar1 = false;
  }
  else {
    *(char *)(param_1 + 0x78) = cVar2;
    bVar1 = true;
  }
  QMutex::unlock();
  if (bVar3 == 0 && !bVar5) {
    FUN_1004683f0(param_1);
  }
  if (bVar1) {
    FUN_1004680e0(param_1,cVar2);
  }
  return;
}

