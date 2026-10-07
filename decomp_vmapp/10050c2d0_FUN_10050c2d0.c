
undefined8 FUN_10050c2d0(long *param_1)

{
  undefined8 *puVar1;
  pthread_key_t *ppVar2;
  __thread_struct *this;
  __thread_struct *this_00;
  long lVar3;
  bool bVar4;
  
  ppVar2 = (pthread_key_t *)std::__thread_local_data();
  this = operator_new(8);
  std::__thread_struct::__thread_struct(this);
  this_00 = _pthread_getspecific(*ppVar2);
  _pthread_setspecific(*ppVar2,this);
  if (this_00 != (__thread_struct *)0x0) {
    std::__thread_struct::~__thread_struct(this_00);
    operator_delete(this_00);
  }
  puVar1 = (undefined8 *)*param_1;
  lVar3 = _CFRunLoopGetCurrent();
  _CFRetain(lVar3);
  LOCK();
  bVar4 = puVar1[1] == 0;
  if (bVar4) {
    puVar1[1] = lVar3;
  }
  UNLOCK();
  if (bVar4) {
    _CFRunLoopAddSource(lVar3,*puVar1,*(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0);
    _CFRunLoopRun();
    _CFRunLoopSourceInvalidate(*puVar1);
    (*(code *)puVar1[4])(puVar1[2]);
  }
  else {
    _CFRelease(lVar3);
  }
  operator_delete(param_1);
  return 0;
}

