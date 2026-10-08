
void FUN_100cd05d0(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar14 = param_2 & 0xf;
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    FUN_100df99c0("","hid",param_2,"-----------------KEY ACTION DUMP [START]-------------------");
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    if ((ulong)(long)*(int *)(param_1 + 0x10) < 3) {
      pcVar4 = (&PTR_s_ACTION_DEV_EMPTY_102259d50)[*(int *)(param_1 + 0x10)];
    }
    else {
      pcVar4 = "???";
    }
    FUN_100df99c0("","hid",param_2,"Type                           %s",pcVar4);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    QString::toLatin1();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","hid",param_2,"Name                           %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_100cd0704;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100cd0704:
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar10 = (ulong)*(int *)(param_1 + 0x20);
    if (uVar10 < 8) {
      pcVar4 = (&PTR_s_ACTION_EMPTY_102259d70)[uVar10];
    }
    else {
      pcVar4 = "???";
    }
    FUN_100df99c0("","hid",param_2,"Action                         0x%x (%s)",uVar10,pcVar4);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar1 = *(uint *)(param_1 + 0x14);
    pcVar4 = "GRP";
    if ((uVar1 & 0x40000000) == 0) {
      pcVar4 = "";
    }
    pcVar11 = " LALT";
    if ((uVar1 & 0x10) == 0) {
      pcVar11 = "";
    }
    pcVar12 = " RALT";
    if ((uVar1 & 0x20) == 0) {
      pcVar12 = "";
    }
    pcVar13 = " LCTRL";
    if ((uVar1 & 1) == 0) {
      pcVar13 = "";
    }
    pcVar8 = " RCTRL";
    if ((uVar1 & 2) == 0) {
      pcVar8 = "";
    }
    pcVar5 = " LSHIFT";
    if ((uVar1 & 4) == 0) {
      pcVar5 = "";
    }
    pcVar7 = " RSHIFT";
    if ((uVar1 & 8) == 0) {
      pcVar7 = "";
    }
    pcVar9 = " LWIN";
    if ((uVar1 & 0x40) == 0) {
      pcVar9 = "";
    }
    pcVar15 = " RWIN";
    if ((uVar1 & 0x80) == 0) {
      pcVar15 = "";
    }
    pcVar16 = " MENU";
    if ((uVar1 & 0x100) == 0) {
      pcVar16 = "";
    }
    FUN_100df99c0("","hid",param_2,"Modifier                       0x%x (%s%s%s%s%s%s%s%s%s%s)",
                  uVar1,pcVar4,pcVar11,pcVar12,pcVar13,pcVar8,pcVar5,pcVar7,pcVar9,pcVar15,pcVar16);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = FUN_100cdf380(uVar2);
    FUN_100df99c0("","hid",param_2,"KeyCode                        0x%x (%s)",uVar2,uVar6);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 < 0x10) {
      pcVar4 = "PMB_NOBUTTON";
      switch(iVar3) {
      case 0:
        break;
      case 1:
        pcVar4 = "PMB_LEFT_BUTTON";
        break;
      case 2:
        pcVar4 = "PMB_RIGHT_BUTTON";
        break;
      default:
switchD_100cd08d2_caseD_3:
        pcVar4 = "???";
        break;
      case 4:
        pcVar4 = "PMB_MIDDLE_BUTTON";
        break;
      case 8:
        pcVar4 = "PMB_XBUTTON1";
      }
    }
    else if (iVar3 < 0x40) {
      if (iVar3 == 0x10) {
        pcVar4 = "PMB_XBUTTON2";
      }
      else {
        if (iVar3 != 0x20) goto switchD_100cd08d2_caseD_3;
        pcVar4 = "PMB_XBUTTON3";
      }
    }
    else if (iVar3 == 0x40) {
      pcVar4 = "PMB_XBUTTON4";
    }
    else {
      if (iVar3 != 0x80) goto switchD_100cd08d2_caseD_3;
      pcVar4 = "PMB_XBUTTON5";
    }
    FUN_100df99c0("","hid",param_2,"MouseButton                    0x%x (%s)",iVar3,pcVar4);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar1 = *(uint *)(param_1 + 0x24);
    pcVar4 = "GRP";
    if ((uVar1 & 0x40000000) == 0) {
      pcVar4 = "";
    }
    pcVar11 = " LALT";
    if ((uVar1 & 0x10) == 0) {
      pcVar11 = "";
    }
    pcVar12 = " RALT";
    if ((uVar1 & 0x20) == 0) {
      pcVar12 = "";
    }
    pcVar13 = " LCTRL";
    if ((uVar1 & 1) == 0) {
      pcVar13 = "";
    }
    pcVar8 = " RCTRL";
    if ((uVar1 & 2) == 0) {
      pcVar8 = "";
    }
    pcVar5 = " LSHIFT";
    if ((uVar1 & 4) == 0) {
      pcVar5 = "";
    }
    pcVar7 = " RSHIFT";
    if ((uVar1 & 8) == 0) {
      pcVar7 = "";
    }
    pcVar9 = " LWIN";
    if ((uVar1 & 0x40) == 0) {
      pcVar9 = "";
    }
    pcVar15 = " RWIN";
    if ((uVar1 & 0x80) == 0) {
      pcVar15 = "";
    }
    pcVar16 = " MENU";
    if ((uVar1 & 0x100) == 0) {
      pcVar16 = "";
    }
    FUN_100df99c0("","hid",param_2,"Remapped modifiers             0x%x  (%s%s%s%s%s%s%s%s%s%s)",
                  uVar1,pcVar4,pcVar11,pcVar12,pcVar13,pcVar8,pcVar5,pcVar7,pcVar9,pcVar15,pcVar16);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = FUN_100cdf380(uVar2);
    FUN_100df99c0("","hid",param_2,"Remapped KeyCode               0x%x (%s)",uVar2,uVar6);
  }
  if ((uVar14 != 0) && (DAT_10230ffd0 < (int)uVar14)) goto LAB_100cd0b3e;
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < 0x10) {
    pcVar4 = "PMB_NOBUTTON";
    switch(iVar3) {
    case 0:
      break;
    case 1:
      pcVar4 = "PMB_LEFT_BUTTON";
      break;
    case 2:
      pcVar4 = "PMB_RIGHT_BUTTON";
      break;
    default:
switchD_100cd0ac5_caseD_3:
      pcVar4 = "???";
      break;
    case 4:
      pcVar4 = "PMB_MIDDLE_BUTTON";
      break;
    case 8:
      pcVar4 = "PMB_XBUTTON1";
    }
  }
  else if (iVar3 < 0x40) {
    if (iVar3 == 0x10) {
      pcVar4 = "PMB_XBUTTON2";
    }
    else {
      if (iVar3 != 0x20) goto switchD_100cd0ac5_caseD_3;
      pcVar4 = "PMB_XBUTTON3";
    }
  }
  else if (iVar3 == 0x40) {
    pcVar4 = "PMB_XBUTTON4";
  }
  else {
    if (iVar3 != 0x80) goto switchD_100cd0ac5_caseD_3;
    pcVar4 = "PMB_XBUTTON5";
  }
  FUN_100df99c0("","hid",param_2,"Remapped Mouse Button          0x%x (%s)",iVar3,pcVar4);
LAB_100cd0b3e:
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    FUN_100df99c0("","hid",param_2,"Callback                       %p",
                  *(undefined8 *)(param_1 + 0x28));
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    FUN_100df99c0("","hid",param_2,"CallbackParameter              %p",
                  *(undefined8 *)(param_1 + 0x30));
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar1 = *(uint *)(param_1 + 0x40);
    pcVar4 = "GRP";
    if ((uVar1 & 0x40000000) == 0) {
      pcVar4 = "";
    }
    pcVar11 = " LALT";
    if ((uVar1 & 0x10) == 0) {
      pcVar11 = "";
    }
    pcVar12 = " RALT";
    if ((uVar1 & 0x20) == 0) {
      pcVar12 = "";
    }
    pcVar13 = " LCTRL";
    if ((uVar1 & 1) == 0) {
      pcVar13 = "";
    }
    pcVar8 = " RCTRL";
    if ((uVar1 & 2) == 0) {
      pcVar8 = "";
    }
    pcVar5 = " LSHIFT";
    if ((uVar1 & 4) == 0) {
      pcVar5 = "";
    }
    pcVar7 = " RSHIFT";
    if ((uVar1 & 8) == 0) {
      pcVar7 = "";
    }
    pcVar9 = " LWIN";
    if ((uVar1 & 0x40) == 0) {
      pcVar9 = "";
    }
    pcVar15 = " RWIN";
    if ((uVar1 & 0x80) == 0) {
      pcVar15 = "";
    }
    pcVar16 = " MENU";
    if ((uVar1 & 0x100) == 0) {
      pcVar16 = "";
    }
    FUN_100df99c0("","hid",param_2,"Internal modifiers             0x%x (%s%s%s%s%s%s%s%s%s%s)",
                  uVar1,pcVar4,pcVar11,pcVar12,pcVar13,pcVar8,pcVar5,pcVar7,pcVar9,pcVar15,pcVar16);
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    uVar6 = FUN_100cdf380(uVar2);
    FUN_100df99c0("","hid",param_2,"Internal KeyCode               0x%x (%s)",uVar2,uVar6);
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        pcVar4 = "no";
      }
      else {
        pcVar4 = "yes";
      }
      FUN_100df99c0("","hid",param_2,"Remapped seq pressed           %s",pcVar4);
    }
    if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        pcVar4 = "no";
      }
      else {
        pcVar4 = "yes";
      }
      FUN_100df99c0("","hid",param_2,"Just acted                     %s",pcVar4);
    }
  }
  if ((uVar14 == 0) || ((int)uVar14 <= DAT_10230ffd0)) {
    FUN_100df99c0("","hid",param_2,"-----------------KEY ACTION DUMP [COMPLETE]----------------");
  }
  return;
}

