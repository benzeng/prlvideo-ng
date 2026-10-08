
void FUN_1000f1be0(QObject *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ee6f0;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = _CFRunLoopGetCurrent();
    _LSSharedFileListRemoveObserver
              (lVar1,uVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950,FUN_1000eff20,param_1
              );
  }
  FUN_1000f1b80(param_1 + 0x38);
  FUN_100039a80(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFRelease();
  }
  QObject::~QObject(param_1);
  return;
}

