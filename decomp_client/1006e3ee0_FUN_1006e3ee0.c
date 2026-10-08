
void FUN_1006e3ee0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  QAction *pQVar6;
  QKeySequence *this;
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  undefined1 local_39;
  QKeySequence local_38 [8];
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Populating Keyboard menu.");
  }
  lVar4 = *param_3;
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) == 0)) || (param_3[1] == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! context.isNull()","MenuManager/CMenuBuilder.cpp",0x1bf,"populateMenuKeyboard");
    lVar4 = *param_3;
    if (lVar4 == 0) {
      return;
    }
  }
  if (*(int *)(lVar4 + 4) == 0) {
    return;
  }
  if (param_3[1] == 0) {
    return;
  }
  uVar3 = FUN_100152280();
  QObject::property((char *)&local_58);
  QVariant::toString();
  QObject::property((char *)&local_70);
  QVariant::toString();
  lVar4 = FUN_100154930(uVar3,&local_48,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_39 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006e4062;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006e4062:
  QVariant::~QVariant(&local_70);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_39 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006e409b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e409b:
  QVariant::~QVariant(&local_58);
  if (lVar4 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"VM is invalid");
  }
  else {
    if (DAT_102310970 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_1006b2390(pvVar5);
      DAT_102274b20 = 1;
      DAT_102310970 = pvVar5;
    }
    FUN_1006b2500(local_78,DAT_102310970);
    FUN_10056ec80(&local_98,local_78);
    local_90 = (undefined8 *)(local_98 + 0x10 + (long)*(int *)(local_98 + 8) * 8);
    local_88 = (undefined8 *)(local_98 + 0x10 + (long)*(int *)(local_98 + 0xc) * 8);
    if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
      do {
        local_80 = 1;
        pcVar1 = (char *)*local_90;
        if (*pcVar1 != '\0') {
          pQVar6 = (QAction *)QAction::menu();
          pvVar5 = operator_new(0x28);
          this = (QKeySequence *)(pcVar1 + 8);
          FUN_1006b2d70(pvVar5,lVar4,this);
          QWidget::addAction(pQVar6);
          QKeySequence::QKeySequence(local_38,0x19000007,0,0,0);
          cVar2 = QKeySequence::operator==(this,local_38);
          QKeySequence::~QKeySequence(local_38);
          if (cVar2 != '\0') {
            QAction::menu();
            QMenu::addSeparator();
          }
        }
        local_90 = local_90 + 1;
      } while (local_90 != local_88);
    }
    local_80 = 1;
    FUN_10056e3a0(&local_98);
    QAction::menu();
    QMenu::addSeparator();
    pQVar6 = (QAction *)QAction::menu();
    uVar3 = FUN_1006915d0();
    lVar4 = 0;
    if ((*param_3 != 0) && (lVar4 = 0, *(int *)(*param_3 + 4) != 0)) {
      lVar4 = param_3[1];
    }
    FUN_100691620(uVar3,0x65,lVar4);
    QWidget::addAction(pQVar6);
    FUN_10056e3a0(local_78);
  }
  return;
}

