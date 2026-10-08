
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100acd1e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x82) == '\0') {
    iVar1 = QTime::elapsed();
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 1000) {
      iVar1 = 2000 - iVar3;
    }
    else if (iVar3 < 3000) {
      iVar1 = 5000;
      if ((int)((float)iVar3 * _DAT_101cd77e8) < 0x1389) {
        iVar1 = (int)((float)iVar3 * _DAT_101cd77e8);
      }
    }
    else {
      iVar1 = 0;
      if (iVar3 < 5000) {
        iVar1 = 5000 - iVar3;
      }
    }
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 < 5000)) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                      "Delay Coherence starting for %d msec (elapsed = %d)",iVar1,iVar3);
      }
      *(undefined1 *)(param_1 + 0x82) = 1;
      QTimer::setInterval((int)param_1 + 0xc0);
      QTimer::start();
      uVar2 = 1;
    }
  }
  return uVar2;
}

