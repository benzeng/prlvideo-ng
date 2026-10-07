
void FUN_10050abf0(undefined8 *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_100bc4420;
  LOCK();
  uVar1 = param_1[0x1d];
  param_1[0x1d] = 1;
  UNLOCK();
  if (1 < uVar1) {
    _CFRunLoopSourceSignal(param_1[0x1c]);
    _CFRunLoopWakeUp(uVar1);
    _CFRelease(uVar1);
  }
  std::thread::join();
  std::thread::~thread((thread *)(param_1 + 0x21));
  if (param_1[0x1c] != 0) {
    _CFRelease();
  }
  pvVar2 = (void *)param_1[0x19];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x1a];
    if (pvVar3 != pvVar2) {
      param_1[0x1a] =
           (void *)(~((ulong)((long)pvVar3 + (-0x310 - (long)pvVar2)) / 0x310) * 0x310 +
                   (long)pvVar3);
    }
    operator_delete(pvVar2);
  }
  FUN_10050c3b0(param_1 + 0x13,param_1[0x14]);
  FUN_10050c470(param_1 + 0x10,param_1[0x11]);
  std::condition_variable::~condition_variable((condition_variable *)(param_1 + 9));
  std::mutex::~mutex((mutex *)(param_1 + 1));
  return;
}

