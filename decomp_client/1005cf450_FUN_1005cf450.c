
void FUN_1005cf450(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f4280;
  *(QObject **)(param_1 + 0x10) = param_2;
  QMenu::QMenu((QMenu *)(param_1 + 0x20),(QWidget *)0x0);
  QActionGroup::QActionGroup((QActionGroup *)(param_1 + 0x50),param_1 + 0x20);
  QMenu::QMenu((QMenu *)(param_1 + 0x60),(QWidget *)0x0);
  QActionGroup::QActionGroup((QActionGroup *)(param_1 + 0x90),param_1 + 0x60);
  FUN_1005cf530(param_1);
  FUN_1005cfb10(param_1);
  return;
}

