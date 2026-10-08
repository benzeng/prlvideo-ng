
void FUN_1006b3740(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QAction::data();
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,&local_30);
  if (lVar5 != 0) {
    uVar4 = FUN_100370280();
    uVar6 = FUN_10018c280(lVar5);
    uVar2 = FUN_100319b00(uVar6);
    lVar7 = FUN_1003704b0(uVar4,&local_30,uVar2);
    if (lVar7 != 0) {
      iVar3 = FUN_10036c900(lVar7);
      if (iVar3 == 2) {
        iVar3 = FUN_10036c900(lVar7);
        if (iVar3 == 2) {
          uVar4 = FUN_10018c280(lVar5);
          FUN_10031b640(uVar4,0);
        }
      }
      else {
        cVar1 = QWidget::isMinimized();
        if (cVar1 != '\0') {
          QWidget::showNormal();
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
          uVar4 = FUN_10018c280(lVar5);
          FUN_10031b640(uVar4,0);
        }
      }
      goto LAB_1006b3836;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get window instance to activate it.");
LAB_1006b3836:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

