
int * FUN_100371aa0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  param_1[3] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined **)(param_1 + 0xc) = PTR_shared_null_1021e1288;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  QApplication::desktop();
  iVar3 = QDesktopWidget::primaryScreen();
  param_1[9] = iVar3;
  param_1[10] = -1;
  iVar2 = DAT_100e15208;
  iVar3 = DAT_100e15204;
  *(ulong *)(param_1 + 0xe) = CONCAT44(DAT_100e15208,DAT_100e15204);
  if (param_3 == 1) {
    local_40 = 100;
    local_3c = 100;
    local_48 = 0x1900000019;
    pcVar4 = (char *)QMetaObject::className();
    uVar5 = WidgetUtils::getFreeWindowPosition
                      (pcVar4,(QPoint *)&local_40,(QPoint *)&local_48,(QWidget *)0x0);
    iVar1 = (int)((ulong)uVar5 >> 0x20);
    *param_1 = (int)uVar5;
    param_1[1] = iVar1;
    param_1[2] = (int)uVar5 + -1 + iVar3;
    param_1[3] = iVar1 + -1 + iVar2;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = iVar3 + -1;
    param_1[7] = iVar2 + -1;
  }
  else if (param_3 == 4) {
    local_50 = 10;
    local_4c = 0x28;
    local_58 = 0x1900000019;
    pcVar4 = (char *)QMetaObject::className();
    uVar5 = WidgetUtils::getFreeWindowPosition
                      (pcVar4,(QPoint *)&local_50,(QPoint *)&local_58,(QWidget *)0x0);
    iVar1 = DAT_100e15210;
    iVar2 = DAT_100e1520c;
    iVar7 = (int)uVar5 + -1 + DAT_100e1520c;
    iVar3 = (int)((ulong)uVar5 >> 0x20);
    iVar6 = iVar3 + -1 + DAT_100e15210;
    *param_1 = (int)uVar5;
    param_1[1] = iVar3;
    param_1[2] = iVar7;
    param_1[3] = iVar6;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = iVar2 + -1;
    param_1[7] = iVar1 + -1;
  }
  return param_1;
}

