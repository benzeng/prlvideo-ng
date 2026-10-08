
void FUN_10009b320(long param_1,QString *param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  CScreenSaverBlocker *pCVar3;
  
  cVar2 = operator==((QString *)(param_1 + 0x20),param_2);
  if (cVar2 != '\0') {
    FUN_10009b130(param_1);
    *(int *)(param_1 + 0x28) = param_3;
    *(int *)(param_1 + 0x2c) = param_3;
    puVar1 = PTR_m_instance_1021e1420;
    if (param_3 != 2) {
      *(undefined2 *)(param_1 + 0x30) = 0;
      puVar1 = PTR_m_instance_1021e1420;
      pCVar3 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
      if (pCVar3 == (CScreenSaverBlocker *)0x0) {
        pCVar3 = operator_new(0x18);
        CScreenSaverBlocker::CScreenSaverBlocker(pCVar3);
        *(CScreenSaverBlocker **)puVar1 = pCVar3;
        DAT_10226c8a0 = 1;
      }
      CScreenSaverBlocker::removeBlocker(pCVar3,1);
      return;
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      pCVar3 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
      if (pCVar3 == (CScreenSaverBlocker *)0x0) {
        pCVar3 = operator_new(0x18);
        CScreenSaverBlocker::CScreenSaverBlocker(pCVar3);
        *(CScreenSaverBlocker **)puVar1 = pCVar3;
        DAT_10226c8a0 = 1;
      }
      CScreenSaverBlocker::addBlocker(pCVar3,1);
      return;
    }
  }
  return;
}

