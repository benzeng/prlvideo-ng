
undefined1  [16] FUN_1004dd170(long *param_1)

{
  long lVar1;
  QListWidgetItem *pQVar2;
  QPoint *pQVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = FUN_1004dae30();
  uVar5 = 0xffffffffffffffff;
  lVar4 = 0;
  if (lVar1 != 0) {
    pQVar2 = (QListWidgetItem *)(**(code **)(*param_1 + 0x228))(param_1);
    auVar6 = QListWidget::visualItemRect(pQVar2);
    lVar4 = 0;
    if (0 < auVar6._12_4_) {
      (**(code **)(*param_1 + 0x228))(param_1);
      lVar1 = QAbstractScrollArea::viewport();
      lVar4 = 0;
      if (auVar6._4_4_ <
          (*(int *)(*(long *)(lVar1 + 0x28) + 0x20) + 1) - *(int *)(*(long *)(lVar1 + 0x28) + 0x18))
      {
        (**(code **)(*param_1 + 0x228))(param_1);
        QFrame::frameWidth();
        (**(code **)(*param_1 + 0x228))(param_1);
        QFrame::frameWidth();
        pQVar3 = (QPoint *)(**(code **)(*param_1 + 0x228))(param_1);
        QWidget::mapToGlobal(pQVar3);
        pQVar3 = (QPoint *)QWidget::window();
        lVar4 = QWidget::mapFromGlobal(pQVar3);
        uVar5 = (auVar6._8_8_ - (auVar6._0_8_ & 0xffffffff00000000) & 0xffffffff00000000) + lVar4 &
                0xffffffff00000000 | (ulong)(uint)((auVar6._8_4_ - auVar6._0_4_) + (int)lVar4);
      }
    }
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}

