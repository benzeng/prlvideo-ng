
void FUN_1004a1e80(long *param_1)

{
  if (param_1[2] != 0) {
    _CFRelease();
  }
  if (param_1[1] != 0) {
    _HUnlock();
    _DisposeHandle(param_1[1]);
  }
  if (*param_1 != 0) {
    _ReleaseIconRef();
    return;
  }
  return;
}

