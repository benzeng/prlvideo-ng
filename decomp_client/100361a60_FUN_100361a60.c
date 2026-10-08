
void FUN_100361a60(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar13;
  QCursor local_50 [24];
  char local_38;
  
  uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  lVar7 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
  if (lVar7 == 0) {
    uVar13 = 1;
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != m_pData->getVm()","VmDesktop/HIDController/CMouseTypeSwitcher.cpp",0xa2,
                  "updateMouseType");
  }
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  bVar1 = FUN_10035ea70(*(undefined8 *)(param_1 + 0x18));
  uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getMouseSync();
  bVar2 = MouseSync::isEnabled();
  uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getSmartMouse();
  bVar3 = SmartMouse::isEnabled();
  cVar4 = FUN_10035dcf0(*(undefined8 *)(param_1 + 0x18),2);
  bVar5 = FUN_10035dcf0(*(undefined8 *)(param_1 + 0x18),0x40);
  if (3 < DAT_10230ffd0) {
    if (bVar3 == 0) {
      pcVar9 = "Off";
      if (bVar2 != 0) {
        pcVar9 = "On";
      }
    }
    else {
      pcVar9 = "Auto";
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,
                  "Absolute mouse switch flags:\nAvailable in guest: %d\nVTD: %d\nUSB mouse connected to VM: %d\nValue in config:%s"
                  ,bVar1,cVar4,bVar5,pcVar9);
    uVar13 = (undefined4)((ulong)pcVar9 >> 0x20);
  }
  if ((cVar4 == '\0' && (bVar1 & bVar2) == 1) && ((bVar5 & bVar3) == 0)) {
    if (*(int *)(param_1 + 0x10) == 1) {
      bVar1 = FUN_10035ea80(*(undefined8 *)(param_1 + 0x18));
    }
    else {
      bVar1 = 0;
    }
    FUN_10035fbe0(local_50,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
    QCursor::~QCursor(local_50);
    bVar2 = FUN_10035ea90(*(undefined8 *)(param_1 + 0x18));
    uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
    iVar6 = FUN_10018f860(uVar8);
    bVar11 = true;
    if (iVar6 != 8) {
      uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
      iVar6 = FUN_10018f860(uVar8);
      if (iVar6 != 9) {
        uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 0x18));
        iVar6 = FUN_10018f860(uVar8);
        bVar11 = iVar6 == 7;
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x80) & 1) == 0) {
      bVar12 = false;
    }
    else {
      uVar8 = FUN_10035da10();
      iVar6 = FUN_10018f860(uVar8);
      bVar12 = iVar6 == 8;
    }
    bVar5 = (bVar2 ^ 1) & local_38 != '\0' & bVar3 & bVar1 & bVar11;
    if (3 < DAT_10230ffd0) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",4,
                    "Relative mouse auto switch flags:\nCursor empty: %d\nCoherence running: %d\nSet in config: %d\nGuest support: %d\nMaybe drag: %d\nSliding mouse active: %d"
                    ,local_38,bVar2,bVar3,CONCAT44(uVar13,(uint)bVar11),bVar12,bVar1);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if ((bVar12 & bVar5) == 1) {
      FUN_10035db20(uVar8,0x80,1);
    }
    else if (bVar5 == 0) {
      if (local_38 == '\0') {
        FUN_10035db20(uVar8,0x100,0);
        uVar10 = 1;
      }
      else {
        cVar4 = FUN_10035dcf0();
        if (cVar4 == '\0') {
          uVar10 = 1;
        }
      }
    }
    else {
      FUN_10035db20(uVar8,0x100,1);
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
    FUN_10035db20(*(undefined8 *)(param_1 + 0x18),0x100,0);
  }
  FUN_1003617b0(param_1,uVar10);
  return;
}

