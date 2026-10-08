
undefined1  [16] FUN_100344460(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  QWidget *pQVar11;
  char *pcVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_ffffffffffffff88;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_1[2] == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (*(int *)(param_1[2] + 4) == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (param_1[3] == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  uVar9 = FUN_100152280();
  lVar10 = 0;
  if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar10 = param_1[3];
  }
  FUN_100323d90(&local_40,lVar10);
  lVar10 = FUN_1001548f0(uVar9,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10034450c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10034450c:
  if (lVar10 == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  lVar10 = 0;
  if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar10 = param_1[3];
  }
  auVar19 = FUN_100325fd0(lVar10);
  cVar4 = (**(code **)(*param_1 + 0x60))(param_1,1);
  if (cVar4 != '\0') {
    lVar10 = 0;
    if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar10 = param_1[3];
    }
    uVar9 = FUN_100323e00(lVar10);
    cVar4 = FUN_10031c1c0(uVar9);
    if ((((cVar4 != '\0') && (param_1[5] != 0)) && (*(int *)(param_1[5] + 4) != 0)) &&
       (param_1[6] != 0)) {
      pQVar11 = (QWidget *)QApplication::desktop();
      lVar10 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e4e0);
      if ((lVar10 == 0) || (uVar6 = FUN_1003798d0(lVar10), uVar7 = uVar6, uVar6 == 0xffffffff)) {
        uVar7 = QDesktopWidget::screenNumber(pQVar11);
        uVar6 = 0xffffffff;
      }
      if (2 < DAT_10230ffd0) {
        lVar14 = 0;
        if ((param_1[2] != 0) && (lVar14 = 0, *(int *)(param_1[2] + 4) != 0)) {
          lVar14 = param_1[3];
        }
        uVar8 = FUN_100323e20(lVar14);
        lVar14 = lVar10;
        FUN_100df99c0("GUI_DDRL","prl_client_app",3,
                      "Host screen for guest display [%d] is [%d] (stored screen for console widget %p is [%d])."
                      ,uVar8,uVar7,lVar10,uVar6);
        uVar8 = (undefined4)((ulong)lVar14 >> 0x20);
      }
      uVar9 = QDesktopWidget::screenGeometry((int)pQVar11);
      lVar10 = *(long *)(lVar10 + 0x28);
      iVar13 = *(int *)(lVar10 + 0x1c);
      iVar15 = *(int *)(lVar10 + 0x20);
      iVar1 = *(int *)(lVar10 + 0x14);
      iVar2 = *(int *)(lVar10 + 0x18);
      lVar10 = 0;
      if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
        lVar10 = param_1[3];
      }
      dVar17 = (double)FUN_1003277b0(lVar10);
      dVar18 = (double)((iVar13 + 1) - iVar1) * dVar17;
      if (0.0 <= dVar18) {
        iVar13 = (int)(dVar18 + DAT_100e110f0);
      }
      else {
        iVar13 = (int)((dVar18 - (double)(int)(DAT_100e110e0 + dVar18)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar18);
      }
      dVar17 = (double)((iVar15 + 1) - iVar2) * dVar17;
      if (0.0 <= dVar17) {
        iVar15 = (int)(dVar17 + DAT_100e110f0);
      }
      else {
        iVar15 = (int)((dVar17 - (double)(int)(DAT_100e110e0 + dVar17)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar17);
      }
      uVar16 = CONCAT44((int)((ulong)uVar9 >> 0x20) + -1 + iVar15,(int)uVar9 + -1 + iVar13);
      auVar3._8_8_ = uVar16;
      auVar3._0_8_ = uVar9;
      auVar19._8_8_ = uVar16;
      auVar19._0_8_ = uVar9;
      if (DAT_10230ffd0 < 3) {
        return auVar3;
      }
      lVar10 = 0;
      if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
        lVar10 = param_1[3];
      }
      uVar6 = FUN_100323e20(lVar10);
      lVar10 = CONCAT44(uVar8,iVar13);
      pcVar12 = "Guest display [%d] rect for host screen [%d] is %dx%d at (%d, %d)";
      goto LAB_100344766;
    }
  }
  if (DAT_10230ffd0 < 3) {
    return auVar19;
  }
  bVar5 = (**(code **)(*param_1 + 0x60))(param_1,1);
  lVar10 = 0;
  if ((param_1[2] != 0) && (lVar10 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar10 = param_1[3];
  }
  uVar6 = (uint)bVar5;
  uVar9 = FUN_100323e00(lVar10);
  bVar5 = FUN_10031c1c0(uVar9);
  uVar7 = (uint)bVar5;
  lVar10 = 0;
  if ((param_1[5] != 0) && (lVar10 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar10 = param_1[6];
  }
  pcVar12 = 
  "Set size from watched widget faultParameters: isEnabled[%d];isDynResAvailableInGuest[%d];m_watchedWidget[%p]"
  ;
LAB_100344766:
  FUN_100df99c0("GUI_DDRL","prl_client_app",3,pcVar12,uVar6,uVar7,lVar10);
  return auVar19;
}

