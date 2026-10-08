
undefined8 FUN_100341c30(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  CHostDesktop *this;
  ulong uVar11;
  undefined7 uVar12;
  byte bVar13;
  undefined8 uVar14;
  long lVar15;
  Data *pDVar16;
  Data *local_40;
  
  if (param_2 == 2) {
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar10 = FUN_100319390(uVar10);
    FUN_10018c2b0(uVar10);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::getVmFullScreen();
    bVar6 = CVmFullScreen::isUseAllDisplays();
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar8 = FUN_1003195d0(uVar10,2);
    puVar5 = PTR_m_instance_1021e12d8;
    if (*(long *)PTR_m_instance_1021e12d8 == 0) {
      this = operator_new(0x18);
      CHostDesktop::CHostDesktop(this);
      *(CHostDesktop **)puVar5 = this;
      DAT_102271140 = 1;
    }
    CHostDesktop::calculateScreensLayout();
    iVar1 = *(int *)(local_40 + 0xc);
    uVar2 = *(uint *)local_40;
    uVar11 = (ulong)uVar2;
    iVar3 = *(int *)(local_40 + 8);
    if (uVar2 != 0xffffffff) {
      iVar9 = iVar1;
      iVar4 = iVar3;
      if (uVar2 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100341d86;
        iVar9 = *(int *)(local_40 + 0xc);
        iVar4 = *(int *)(local_40 + 8);
      }
      if (iVar9 != iVar4) {
        lVar15 = (long)iVar4 * 8 + (long)iVar9 * -8;
        pDVar16 = local_40 + (long)iVar9 * 8 + 8;
        do {
          if (*(void **)pDVar16 != (void *)0x0) {
            operator_delete(*(void **)pDVar16);
          }
          pDVar16 = pDVar16 + -8;
          lVar15 = lVar15 + 8;
        } while (lVar15 != 0);
      }
      uVar11 = QListData::dispose(local_40);
    }
LAB_100341d86:
    param_2 = 2;
    uVar12 = (undefined7)(uVar11 >> 8);
    bVar13 = 1;
    if ((1 < iVar8 != (bool)bVar6) || (bVar13 = bVar6 & iVar8 != iVar1 - iVar3, bVar13 != 0))
    goto LAB_100341e4a;
  }
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar14 = 0;
  iVar8 = FUN_100319790(uVar10,0);
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar10 = FUN_10031bc70(uVar14,param_2);
  cVar7 = (char)uVar10;
  if (cVar7 == '\0') {
LAB_100341e19:
    if ((iVar8 == 1) || (cVar7 == '\x01')) {
      uVar10 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar10 = FUN_10031bab0(uVar10);
      if ((char)uVar10 == '\0') {
        bVar13 = 0;
        uVar12 = 0;
        goto LAB_100341e4a;
      }
    }
  }
  else {
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar10 = FUN_100319450(uVar10);
    if (iVar8 == (int)uVar10) goto LAB_100341e19;
  }
  uVar12 = (undefined7)((ulong)uVar10 >> 8);
  bVar13 = 1;
LAB_100341e4a:
  return CONCAT71(uVar12,bVar13 != 0);
}

