
undefined1  [16] FUN_100343760(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  
  if (param_1[2] == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (*(int *)(param_1[2] + 4) == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (param_1[3] == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  auVar17 = FUN_100325fd0();
  uVar14 = auVar17._8_8_;
  cVar7 = (**(code **)(*param_1 + 0x60))(param_1,1);
  if (cVar7 != '\0') {
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar9 = FUN_100323e00(lVar11);
    cVar7 = FUN_10031c1c0(uVar9);
    if ((((cVar7 != '\0') && (param_1[5] != 0)) && (*(int *)(param_1[5] + 4) != 0)) &&
       (param_1[6] != 0)) {
      lVar11 = *(long *)(param_1[6] + 0x28);
      iVar1 = *(int *)(lVar11 + 0x1c);
      iVar2 = *(int *)(lVar11 + 0x20);
      iVar3 = *(int *)(lVar11 + 0x14);
      iVar4 = *(int *)(lVar11 + 0x18);
      lVar11 = 0;
      if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
        lVar11 = param_1[3];
      }
      dVar15 = (double)FUN_1003277b0(lVar11);
      dVar16 = (double)((iVar1 + 1) - iVar3) * dVar15;
      if (0.0 <= dVar16) {
        uVar12 = (uint)(dVar16 + DAT_100e110f0);
      }
      else {
        uVar12 = (int)((dVar16 - (double)(int)(DAT_100e110e0 + dVar16)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar16);
      }
      dVar15 = (double)((iVar2 + 1) - iVar4) * dVar15;
      if (0.0 <= dVar15) {
        uVar13 = (uint)(dVar15 + DAT_100e110f0);
      }
      else {
        uVar13 = (int)((dVar15 - (double)(int)(DAT_100e110e0 + dVar15)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar15);
      }
      uVar14 = CONCAT44(auVar17._4_4_ + -1 + uVar13,auVar17._0_4_ + -1 + uVar12);
      auVar5._8_8_ = uVar14;
      auVar5._0_8_ = auVar17._0_8_;
      if (DAT_10230ffd0 < 3) {
        return auVar5;
      }
      pcVar10 = "Guest rect for widget[%d,%d]";
      goto LAB_10034391a;
    }
  }
  if (DAT_10230ffd0 < 3) {
    return auVar17;
  }
  bVar8 = (**(code **)(*param_1 + 0x60))(param_1,1);
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  uVar12 = (uint)bVar8;
  uVar9 = FUN_100323e00(lVar11);
  bVar8 = FUN_10031c1c0(uVar9);
  uVar13 = (uint)bVar8;
  pcVar10 = 
  "Set size from watched widget faultParameters: isEnabled[%d];isDynResAvailableInGuest[%d];m_watchedWidget[%p]"
  ;
LAB_10034391a:
  auVar6._8_8_ = uVar14;
  auVar6._0_8_ = auVar17._0_8_;
  FUN_100df99c0("GUI_DDRL","prl_client_app",3,pcVar10,uVar12,uVar13);
  return auVar6;
}

