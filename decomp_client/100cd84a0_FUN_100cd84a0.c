
bool FUN_100cd84a0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  
  if (param_2 == 0) {
    return false;
  }
  iVar2 = _CGEventGetType(param_2);
  uVar4 = _CGEventGetIntegerValueField(param_2,9);
  uVar5 = _CGEventGetFlags(param_2);
  iVar3 = _CGEventGetIntegerValueField(param_2,0x29);
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x500) + 0x10);
  lVar7 = 0;
  if (lVar1 == 0) {
LAB_100cd855d:
    lVar16 = 0;
  }
  else {
    do {
      while (lVar16 = lVar1, iVar13 = *(int *)(lVar16 + 0x18), iVar13 < iVar3) {
        lVar1 = *(long *)(lVar16 + 0x10);
        if (*(long *)(lVar16 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_100cd855d;
          iVar13 = *(int *)(lVar7 + 0x18);
          lVar16 = lVar7;
          goto LAB_100cd8559;
        }
      }
      lVar1 = *(long *)(lVar16 + 8);
      lVar7 = lVar16;
    } while (*(long *)(lVar16 + 8) != 0);
LAB_100cd8559:
    if (iVar3 < iVar13) goto LAB_100cd855d;
  }
  if (iVar2 == 5) {
    return false;
  }
  uVar17 = uVar5 & 0x100000;
  bVar12 = (byte)(uVar17 >> 0x14);
  bVar10 = bVar12 ^ 1;
  if (iVar2 != 0xc) {
    FUN_100cd8310(param_1,bVar10 == 0);
    return false;
  }
  if (2 < DAT_10230ffd0) {
    pcVar8 = "no";
    pcVar14 = "no";
    if ((uVar5 & 0x80000000) == 0) {
      pcVar14 = "yes";
    }
    pcVar15 = "no";
    if ((uVar4 & 0xfffe) == 0x36) {
      pcVar15 = "yes";
    }
    pcVar9 = "no";
    if (bVar10 == 0) {
      pcVar9 = "yes";
    }
    if (lVar16 != 0) {
      pcVar8 = "yes";
    }
    FUN_100df99c0("","hid",3,
                  "[CMDFLT] Preprocess modifier flags change event, localEvent: %s cmdRealLocalEvent: %s cmdPressed: %s allowedSrc: %s"
                  ,pcVar14,pcVar15,pcVar9,pcVar8);
  }
  bVar18 = lVar16 == 0;
  bVar19 = (uVar4 & 0xfffe) != 0x36;
  if (4 < *(uint *)(param_1 + 0x10)) goto LAB_100cd89bd;
  bVar11 = (byte)(uVar5 >> 0x18) >> 7 ^ 1;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Current state: Passthrough.");
    }
    if (bVar10 != 0) goto LAB_100cd89bd;
    if ((bVar11 != 0) && (bVar19 && bVar18)) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      goto LAB_100cd89bd;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Store CMD press event");
    }
    uVar6 = _CGEventCreateCopy(param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(uint *)(param_1 + 0x10) = (bVar19 && bVar18) + 1 + (uint)(bVar19 && bVar18);
    break;
  case 1:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Current state: WaitLocalCmdRelease");
    }
    if (uVar17 == 0 && (!bVar19 || !bVar18)) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",3,"[CMDFLT] Store CMD release event");
      }
      uVar6 = _CGEventCreateCopy(param_2);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = 4;
      goto LAB_100cd89bd;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,
                    "[CMDFLT] Unexpected event in WaitLocalCmdRelease. Reset state to Passthrough!")
      ;
    }
    bVar18 = (uVar5 & 0x80000000) == 0 && bVar10 == 0;
    goto LAB_100cd895e;
  case 2:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Current state: WaitRemoteCmdPress");
    }
    if ((bVar11 != 0) || (bVar10 != 0)) {
      if (2 < DAT_10230ffd0) {
        pcVar8 = "[CMDFLT] Unexpected event in WaitRemoteCmdPress. Reset state to Passthrough!";
        goto LAB_100cd88fe;
      }
      goto LAB_100cd890a;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Store CMD press event");
    }
    uVar6 = _CGEventCreateCopy(param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined4 *)(param_1 + 0x10) = 3;
    break;
  case 3:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[MODFLT] Update in WaitRemoteCmdRelease state.");
    }
    if ((bVar11 == 0) && (uVar17 == 0)) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",3,"[CMDFLT] Store CMD release event");
      }
      uVar6 = _CGEventCreateCopy(param_2);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = 4;
      goto LAB_100cd89bd;
    }
    if (uVar17 == 0 && (uVar5 & 0x80000000) == 0) {
      bVar12 = 1;
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",3,
                      "[MODFLT] Eat Local CMD release event while in WaitRemoteCmdRelease state.");
      }
      goto LAB_100cd89bd;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,
                    "[MODFLT] Unexpected event in WaitRemoteCmdRelease. Reset state to Passthrough!"
                   );
    }
    bVar18 = bVar10 == 0 && bVar11 == 0;
LAB_100cd895e:
    FUN_100cd8310(param_1,bVar18);
    bVar12 = 0;
    goto LAB_100cd89bd;
  case 4:
    if (2 < DAT_10230ffd0) {
      pcVar8 = "[CMDFLT] Update in WaitInputSwitch state. Reset state to Passthrough!";
LAB_100cd88fe:
      FUN_100df99c0("","hid",3,pcVar8);
    }
LAB_100cd890a:
    bVar12 = 0;
    FUN_100cd8310(param_1,0);
    goto LAB_100cd89bd;
  }
  uVar6 = FUN_100ddd8f0();
  *(undefined8 *)(param_1 + 0x58) = uVar6;
LAB_100cd89bd:
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",3,"[CMDFLT] New state is: %d",*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x10) == 4) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Start switch input source timer");
    }
    QTimer::start();
    bVar12 = 1;
  }
  return bVar12 != 0;
}

