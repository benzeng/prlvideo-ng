
void FUN_1000aeee0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  CScreenSaverBlocker *pCVar4;
  
  lVar3 = FUN_1000a9690(param_2);
  iVar2 = FUN_1000a97b0(param_1,1);
  if (param_3 == '\0') {
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) & 0xfe;
    }
    if (0 < iVar2) {
      iVar2 = FUN_1000a97b0(param_1,1);
      puVar1 = PTR_m_instance_1021e1420;
      if (iVar2 == 0) {
        pCVar4 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
        if (pCVar4 == (CScreenSaverBlocker *)0x0) {
          pCVar4 = operator_new(0x18);
          CScreenSaverBlocker::CScreenSaverBlocker(pCVar4);
          *(CScreenSaverBlocker **)puVar1 = pCVar4;
          DAT_10226c8a0 = 1;
        }
        CScreenSaverBlocker::removeBlocker(pCVar4,3);
        return;
      }
    }
  }
  else {
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) | 1;
    }
    puVar1 = PTR_m_instance_1021e1420;
    if (iVar2 == 0) {
      pCVar4 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
      if (pCVar4 == (CScreenSaverBlocker *)0x0) {
        pCVar4 = operator_new(0x18);
        CScreenSaverBlocker::CScreenSaverBlocker(pCVar4);
        *(CScreenSaverBlocker **)puVar1 = pCVar4;
        DAT_10226c8a0 = 1;
      }
      CScreenSaverBlocker::addBlocker(pCVar4,3);
      return;
    }
  }
  return;
}

