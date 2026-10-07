
void FUN_1006cd640(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    if (0 < *param_1) {
      lVar2 = 0;
      while( true ) {
        if (*(long *)((long)pvVar1 + lVar2 * 8) != 0) {
          _CFRelease();
        }
        if (*(long *)(param_1[2] + lVar2 * 8) != 0) {
          _CFRelease();
        }
        lVar2 = lVar2 + 1;
        if (*param_1 <= lVar2) break;
        pvVar1 = (void *)param_1[1];
      }
      pvVar1 = (void *)param_1[1];
    }
    _free(pvVar1);
  }
  param_1[1] = 0;
  *param_1 = 0;
  lVar2 = _CFDictionaryGetCount(param_2);
  *param_1 = lVar2;
  pvVar1 = _malloc(lVar2 << 4);
  param_1[1] = (long)pvVar1;
  if (pvVar1 == (void *)0x0) {
    *param_1 = 0;
  }
  else {
    param_1[2] = (long)((long)pvVar1 + lVar2 * 8);
    _CFDictionaryGetKeysAndValues(param_2,pvVar1);
    lVar2 = 0;
    if (0 < *param_1) {
      do {
        if (*(long *)(param_1[1] + lVar2 * 8) != 0) {
          _CFRetain();
        }
        if (*(long *)(param_1[2] + lVar2 * 8) != 0) {
          _CFRetain();
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < *param_1);
    }
  }
  return;
}

