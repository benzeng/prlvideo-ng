
void FUN_1005cfec0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f4280;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  QActionGroup::~QActionGroup((QActionGroup *)(param_1 + 0x90));
  QMenu::~QMenu((QMenu *)(param_1 + 0x60));
  QActionGroup::~QActionGroup((QActionGroup *)(param_1 + 0x50));
  QMenu::~QMenu((QMenu *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

