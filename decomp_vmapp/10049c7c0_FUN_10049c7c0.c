
void FUN_10049c7c0(undefined8 *param_1)

{
  QMutex *this;
  
  *param_1 = &PTR_FUN_10111c8d8;
  this = (QMutex *)param_1[2];
  if (this != (QMutex *)0x0) {
    QMutex::~QMutex(this);
    operator_delete(this);
    return;
  }
  return;
}

