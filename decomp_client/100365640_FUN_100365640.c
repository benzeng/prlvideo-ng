
undefined1 FUN_100365640(long *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  QVariant local_78;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  if ((DAT_102312250 != '\0') || (iVar4 = ___cxa_guard_acquire(&DAT_102312250), iVar4 == 0))
  goto LAB_100365724;
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("debugEvents",0xb);
  QVariant::QVariant(&local_68,0);
  QSettings::value((QString *)&local_40,&local_50);
  iVar4 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100365709;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100365709:
  QSettings::~QSettings((QSettings *)&local_50);
  DAT_102312248 = iVar4;
  ___cxa_guard_release(&DAT_102312250);
LAB_100365724:
  uVar1 = *(ushort *)(param_3 + 0x10);
  uVar3 = 0;
  if (uVar1 < 0xc2) {
    uVar5 = (uint)uVar1;
    if (uVar1 < 8) {
      switch(uVar1) {
      case 2:
      case 4:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          pcVar6 = "double click";
          if (uVar5 == 2) {
            pcVar6 = "press";
          }
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process mouse %s",pcVar6);
        }
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
        break;
      case 3:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process mouse release");
        }
        FUN_10035db20(param_1[1],0x10,0);
        uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
        break;
      case 5:
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process mouse move");
        }
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
      }
    }
    else if (uVar5 == 0x10 || uVar1 < 0x10) {
      switch(uVar5 - 8) {
      case 0:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process focus in");
        }
        uVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
        pcVar6 = (char *)FUN_10035da40(param_1[1]);
        puVar2 = PTR_s_DynProp_GabKeyboardOnFocusIn_102270ea8;
        QVariant::QVariant(&local_78,false);
        QObject::setProperty(pcVar6,(QVariant *)puVar2);
        QVariant::~QVariant(&local_78);
        break;
      case 1:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process focus out");
        }
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
        break;
      case 2:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process mouse enter");
        }
        uVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
        break;
      case 3:
        if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                        "Process mouse leave");
        }
        uVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      }
    }
    else if (uVar5 == 0x32 || uVar1 < 0x32) {
      if (uVar1 < 0x1f) {
        switch(uVar5 - 0x11) {
        case 0:
          if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
            FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                          "Process show event");
          }
          uVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
          break;
        case 1:
          if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
            FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                          "Process hide event");
          }
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3);
          break;
        case 7:
          if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
            FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                          "Process window activate");
          }
          uVar3 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
          break;
        case 8:
          if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
            FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                          "Process window deactivate");
          }
          uVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
        }
      }
      else if (uVar5 == 0x1f) {
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process mouse wheel");
        }
        uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
      }
    }
    else if (uVar5 == 0x33) {
      if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
        FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                      "Process shortcut override");
      }
      uVar3 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
    }
    else if (uVar5 == 0x67) {
      if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
        FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                      "Process window blocked");
      }
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3);
    }
    else if (uVar1 == 0x68) {
      if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
        FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,
                      "Process window unblocked");
      }
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
    }
  }
  else if (uVar1 - 0xc2 < 3) {
    if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,"Process touch");
    }
    uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3);
  }
  else if (uVar1 == 0xc6) {
    if ((DAT_102312248 != 0) || (3 < DAT_10230ffd0)) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",(ulong)(DAT_102312248 == 0) << 2,"Process gesture")
      ;
    }
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
  }
  return uVar3;
}

