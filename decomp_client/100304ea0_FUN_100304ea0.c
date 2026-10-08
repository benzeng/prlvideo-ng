
QWidget * FUN_100304ea0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QWidget *pQVar7;
  QWidget *pQVar8;
  CTaskGenericId *pCVar9;
  char *pcVar10;
  CTaskGenericId local_70 [24];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_2);
  if (lVar5 == 0) {
    if (param_3 == '\0') {
      return (QWidget *)0x0;
    }
    pQVar7 = (QWidget *)QApplication::activeWindow();
    goto LAB_10030515e;
  }
  uVar4 = FUN_10018c280(lVar5);
  lVar6 = FUN_100319960(uVar4);
  if (lVar6 != 0) {
    iVar3 = FUN_100325aa0(lVar6);
    if (iVar3 == 3) {
      return (QWidget *)0x0;
    }
    pQVar7 = (QWidget *)FUN_100323e30(lVar6,0);
    if ((pQVar7 != (QWidget *)0x0) && (cVar2 = FUN_1003798a0(pQVar7), cVar2 != '\0')) {
      return pQVar7;
    }
  }
  uVar4 = FUN_100370280();
  uVar1 = DAT_100e152b8;
  cVar2 = FUN_100370b80(uVar4,param_2,DAT_100e152b8);
  if (cVar2 == '\0') {
    if (param_3 == '\0') {
      FUN_100060bb0();
      uVar4 = QMetaObject::className();
      pQVar7 = (QWidget *)FUN_100060e80(uVar4,lVar5);
      if (pQVar7 == (QWidget *)0x0) {
        return (QWidget *)0x0;
      }
      lVar5 = (*(code *)**(undefined8 **)pQVar7)(pQVar7);
      if ((lVar5 == 0) || (DAT_10230ffd0 < 3)) goto LAB_1003052cb;
      (*(code *)**(undefined8 **)pQVar7)(pQVar7);
      uVar4 = QMetaObject::className();
      pcVar10 = "Possible parent is [%s]";
    }
    else {
      FUN_1001d50a0();
LAB_10030526c:
      pQVar7 = (QWidget *)QApplication::activeWindow();
      if (pQVar7 == (QWidget *)0x0) {
        return (QWidget *)0x0;
      }
      lVar5 = (*(code *)**(undefined8 **)pQVar7)(pQVar7);
      if ((lVar5 == 0) || (DAT_10230ffd0 < 3)) goto LAB_1003052cb;
      (*(code *)**(undefined8 **)pQVar7)(pQVar7);
      uVar4 = QMetaObject::className();
      pcVar10 = "Possible parent is a current active window [%s]";
    }
    FUN_100df99c0("[PARENT_SEARCH]","prl_client_app",3,pcVar10,uVar4);
    goto LAB_1003052cb;
  }
  uVar4 = FUN_100370280();
  pQVar7 = (QWidget *)FUN_1003704b0(uVar4,param_2,uVar1);
  if (pQVar7 == (QWidget *)0x0) {
    if (param_3 == '\0') goto LAB_10030515e;
    goto LAB_10030526c;
  }
  if (1 < DAT_10230ffd0) {
    FUN_10018d830(&local_48,lVar5);
    QString::toUtf8();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("[PARENT_SEARCH]","prl_client_app",2,
                  "Possible parent is a console window of \"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100305010;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100305010:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100305043;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100305043:
  uVar4 = FUN_10018c280(lVar5);
  cVar2 = FUN_10031bab0(uVar4);
  if (cVar2 == '\0') {
LAB_1003051f3:
    pCVar9 = (CTaskGenericId *)CTaskManager::instance();
    FUN_100191030(local_70,param_2);
    lVar5 = CTaskManager::getTaskById(pCVar9);
    CTaskGenericId::~CTaskGenericId(local_70);
    if ((lVar5 != 0) && (cVar2 = CSearchParentHelper::canBeParent(pQVar7), cVar2 == '\0')) {
      if (*(long *)(lVar5 + 0x28) == 0) {
        return (QWidget *)0x0;
      }
      if (*(int *)(*(long *)(lVar5 + 0x28) + 4) == 0) {
        return (QWidget *)0x0;
      }
      pQVar7 = *(QWidget **)(lVar5 + 0x30);
    }
  }
  else {
    uVar4 = FUN_10018c280(lVar5);
    pQVar8 = (QWidget *)FUN_10031bac0(uVar4);
    if (pQVar8 == (QWidget *)0x0) goto LAB_1003051f3;
    pQVar7 = pQVar8;
    if (DAT_10230ffd0 < 3) goto LAB_10030515e;
    FUN_10018d830(&local_58,lVar5);
    QString::toUtf8();
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("[PARENT_SEARCH]","prl_client_app",3,
                  "Possible parent is silent start dialog for a \"%s\"",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10030511b;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10030511b:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10030515e;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_10030515e:
  if (pQVar7 == (QWidget *)0x0) {
    return (QWidget *)0x0;
  }
LAB_1003052cb:
  cVar2 = CSearchParentHelper::canBeParent(pQVar7);
  if (cVar2 == '\0') {
    return (QWidget *)0x0;
  }
  return pQVar7;
}

