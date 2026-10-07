
undefined1 FUN_10070efd0(long param_1,pthread_mutex_t *param_2)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_2 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_lock(param_2);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_10070f04e;
    }
  }
  uVar3 = 1;
  if (*(int *)(lVar2 + 0x8bf08) == 0) {
    if (*(int *)(lVar2 + -0xff4) != -1) {
      cVar1 = FUN_10070f450();
      if (cVar1 != '\0') goto LAB_10070f03f;
      *(undefined8 *)(lVar2 + -0x1000) = 0;
      *(undefined4 *)(lVar2 + -0xff4) = 0xffffffff;
    }
    uVar3 = 0;
  }
LAB_10070f03f:
  if (param_2 == (pthread_mutex_t *)0x0) {
    return uVar3;
  }
LAB_10070f04e:
  _pthread_mutex_unlock(param_2);
  return uVar3;
}

