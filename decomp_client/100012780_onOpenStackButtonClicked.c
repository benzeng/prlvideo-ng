
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::onOpenStackButtonClicked(ID param_1,SEL param_2)

{
  long lVar1;
  char cVar2;
  undefined8 in_R9;
  undefined1 local_e9;
  QVariant local_e8;
  Data_conflict local_d8;
  QString local_d0 [2];
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  char *local_20;
  
  setDeviceBarAutoHidden_(param_1,PTR_s_setDeviceBarAutoHidden__102268dd0,'\0');
  QSettings::QSettings((QSettings *)local_d0,(QObject *)0x0);
  local_d8.field7 = QString::fromAscii_helper("Main Window/Status Bar Devices Visibility",0x29);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isStackContainerOpen_102268dd8);
  ::QVariant::QVariant(&local_e8,(int)cVar2);
  QSettings::setValue(local_d0,(QVariant *)&local_d8);
  ::QVariant::~QVariant(&local_e8);
  if (*(int *)local_d8.field15 != -1) {
    if (*(int *)local_d8.field15 != 0) {
      LOCK();
      *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
      local_b9 = *(int *)local_d8.field15 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100012847;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
  }
LAB_100012847:
  if (((*(long *)(param_1 + _vmConsoleWindow) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmConsoleWindow) + 4) != 0)) &&
     (lVar1 = *(long *)(_vmConsoleWindow + 8 + param_1), lVar1 != 0)) {
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isStackContainerOpen_102268dd8);
    local_e9 = cVar2 != '\0';
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_28 = &local_e9;
    local_20 = "bool";
    QMetaObject::invokeMethod
              (lVar1,"deviceBarVisiblilityChanged",1,0,0,in_R9,local_28,"bool",0,0,0,0,0,0,0,0,0,0,0
               ,0,0,0,0,0,0,0);
  }
  QSettings::~QSettings((QSettings *)local_d0);
  return;
}

