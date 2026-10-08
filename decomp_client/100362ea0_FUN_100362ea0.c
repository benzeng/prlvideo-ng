
undefined1 FUN_100362ea0(long param_1,QWidget *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar4 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    pcVar6 = "(!)Error: can\'t get VM instance.";
    uVar7 = 0;
  }
  else {
    cVar1 = FUN_10018ff50(lVar4);
    if (cVar1 == '\0') {
      iVar3 = FUN_10018a9d0(lVar4);
      if (iVar3 != 0x30000004) {
        if (DAT_10230ffd0 < 4) {
          return 0;
        }
        pcVar6 = "Can\'t grab input since the VM is not running.";
        uVar7 = 4;
        goto LAB_100363015;
      }
      cVar1 = FUN_10018dbd0(lVar4,0);
      if (cVar1 == '\0') {
        if (DAT_10230ffd0 < 3) {
          return 0;
        }
        pcVar6 = "Can\'t grab input since the VM has read-only access.";
      }
      else {
        iVar3 = FUN_10018bce0(lVar4);
        if (iVar3 != 1) {
          cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
          if (cVar1 != '\0') {
            return 1;
          }
          lVar4 = QWidget::window();
          if (lVar4 == 0) {
            cVar1 = '\0';
          }
          else {
            QWidget::window();
            cVar1 = QWidget::isMinimized();
          }
          if ((((cVar1 == '\0') && ((*(uint *)(*(long *)(param_2 + 0x28) + 8) & 0x8000) != 0)) &&
              (cVar2 = WidgetUtils::isBlockedByModal(param_2), cVar2 == '\0')) &&
             (cVar2 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),4), cVar2 == '\0')) {
            return 1;
          }
          if (DAT_10230ffd0 < 2) {
            return 0;
          }
          cVar2 = QWidget::isActiveWindow();
          pcVar8 = "NO";
          pcVar6 = "NO";
          if (cVar2 != '\0') {
            pcVar6 = "YES";
          }
          pcVar5 = "NO";
          if ((*(uint *)(*(long *)(param_2 + 0x28) + 8) & 0x8000) != 0) {
            pcVar5 = "YES";
          }
          pcVar9 = "NO";
          if (cVar1 != '\0') {
            pcVar9 = "YES";
          }
          cVar1 = WidgetUtils::isBlockedByModal(param_2);
          pcVar10 = "NO";
          if (cVar1 != '\0') {
            pcVar10 = "YES";
          }
          cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),4);
          if (cVar1 != '\0') {
            pcVar8 = "YES";
          }
          FUN_100df99c0("[HID_CTL]","prl_client_app",2,
                        "Can\'t grab input since some of the VM window parameters are unacceptable:\nactive=%s \nvisible=%s \nminimized=%s \nblocked=%s \nmenu=%s"
                        ,pcVar6,pcVar5,pcVar9,pcVar10,pcVar8);
          return 0;
        }
        if (DAT_10230ffd0 < 3) {
          return 0;
        }
        pcVar6 = "Can\'t grab input since the VM is invalid.";
      }
    }
    else {
      if (DAT_10230ffd0 < 3) {
        return 0;
      }
      pcVar6 = "Can\'t grab input since the VM is on upgrade.";
    }
    uVar7 = 3;
  }
LAB_100363015:
  FUN_100df99c0("[HID_CTL]","prl_client_app",uVar7,pcVar6);
  return 0;
}

