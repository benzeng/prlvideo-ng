
void FUN_1004edeb0(ulong param_1,long *param_2)

{
  string *this;
  ulong uVar1;
  long *local_28;
  
  uVar1 = param_1;
  local_28 = param_2;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForWrite();
    uVar1 = param_1 | 1;
  }
  FUN_1004ef980(param_1 + 8,&local_28);
  if ((uVar1 & 1) != 0) {
    uVar1 = 0;
    QReadWriteLock::unlock();
  }
  if (*param_2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(*param_2 + 0x18));
    this = (string *)*param_2;
    *param_2 = 0;
    if (this != (string *)0x0) {
      std::string::~string(this);
      operator_delete(this);
    }
  }
  if ((uVar1 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

