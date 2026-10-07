
void FUN_10049c810(undefined8 *param_1)

{
  QMutex *this;
  
  *param_1 = &PTR_FUN_10111c8d8;
  this = (QMutex *)param_1[2];
  if (this != (QMutex *)0x0) {
    QMutex::~QMutex(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return;
}

