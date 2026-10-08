
void FUN_100b5e3f0(QObject *param_1)

{
  int iVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10223f810;
  if (param_1[0x30] != (QObject)0x0) {
    _sigaction(*(int *)(param_1 + 0x18),(sigaction *)(param_1 + 0x38),(sigaction *)0x0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = _close(*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      FUN_100df99c0("","UnixSignalHandler",0,"Error on close socket");
    }
    iVar1 = _close(*(int *)(param_1 + 0x20));
    if (iVar1 != 0) {
      FUN_100df99c0("","UnixSignalHandler",0,"Error on close socket");
    }
  }
  QObject::~QObject(param_1);
  return;
}

