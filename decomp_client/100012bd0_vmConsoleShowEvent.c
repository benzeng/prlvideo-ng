
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::vmConsoleShowEvent(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  lVar1 = _vm;
  if (*(long *)(param_1 + _vm) == 0) {
    uVar2 = false;
  }
  else if (*(int *)(*(long *)(param_1 + _vm) + 4) == 0) {
    uVar2 = false;
  }
  else if (*(long *)(_vm + 8 + param_1) == 0) {
    uVar2 = false;
  }
  else {
    lVar4 = FUN_10018d490();
    if (lVar4 == 0) {
      uVar2 = false;
    }
    else {
      lVar4 = *(long *)(param_1 + lVar1);
      uVar5 = 0;
      if ((lVar4 != 0) && (uVar5 = 0, *(int *)(lVar4 + 4) != 0)) {
        uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      uVar5 = FUN_10018d490(uVar5);
      uVar5 = FUN_10016f500(uVar5);
      uVar2 = FUN_10061b4d0(uVar5);
    }
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)
             QString::fromAscii_helper("Main Window/Status Bar Devices Visibility",0x29);
  ::QVariant::QVariant(&local_58,(bool)uVar2);
  QSettings::value((QString *)&local_30,&local_40);
  cVar3 = ::QVariant::toBool();
  ::QVariant::~QVariant(&local_30);
  ::QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100012cda;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100012cda:
  QSettings::~QSettings((QSettings *)&local_40);
  setInitialShowHideButtonOpenState_(param_1,PTR_s_setInitialShowHideButtonOpenStat_102268df0,cVar3)
  ;
  update(param_1,PTR_s_update_102268c78);
  return;
}

