
void FUN_100298eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bb18c0;
  param_1[1] = &PTR_metaObject_100bb19c0;
  param_1[0xd] = &PTR_FUN_100bb1a38;
  FUN_100257ee0();
  QMutex::~QMutex((QMutex *)(param_1 + 0x22));
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  FUN_100257ad0(param_1);
  return;
}

