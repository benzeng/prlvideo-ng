
undefined8 FUN_10070cfb0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    FUN_1008e3970("","AbstractFile",0,"!priv");
    return 0;
  }
  if (*(int *)(lVar3 + 0xa4) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
    lVar3 = param_1[2];
  }
  if (*(int *)(lVar3 + 0xa0) == 0) {
    return 0;
  }
  if (*(long *)(lVar3 + 0x10) != 0) goto LAB_10070d0ea;
  _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0xb8));
  lVar3 = param_1[2];
  lVar2 = *(long *)(lVar3 + 0x130);
  if (lVar2 == 0) {
    if (param_2 == 0) {
      _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0xb8));
      return 0;
    }
    *(int *)(lVar3 + 0x128) = *(int *)(lVar3 + 0x128) + 1;
    if (param_2 < 0) {
      _pthread_cond_wait((pthread_cond_t *)(lVar3 + 0xf8),(pthread_mutex_t *)(lVar3 + 0xb8));
    }
    else {
      FUN_1007d8980((pthread_mutex_t *)(lVar3 + 0xb8),(long)param_2);
    }
    lVar3 = param_1[2];
    *(int *)(lVar3 + 0x128) = *(int *)(lVar3 + 0x128) + -1;
    lVar2 = *(long *)(lVar3 + 0x130);
    if (lVar2 != 0) goto LAB_10070d0a0;
  }
  else {
LAB_10070d0a0:
    if (*(long *)(lVar3 + 0x18) == 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    else {
      *(long *)(*(long *)(lVar3 + 0x18) + 0x20) = lVar2;
    }
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x138);
  }
  *(undefined8 *)(lVar3 + 0x138) = 0;
  *(undefined8 *)(lVar3 + 0x130) = 0;
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1[2] + 0xb8));
  lVar3 = param_1[2];
LAB_10070d0ea:
  lVar2 = *(long *)(lVar3 + 0x10);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x20);
    *(long *)(lVar3 + 0x10) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    *(undefined8 *)(lVar2 + 0x20) = 0;
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x18))();
    *(int *)(param_1[2] + 0xa0) = *(int *)(param_1[2] + 0xa0) + -1;
    FUN_10070aed0(lVar2);
    lVar3 = param_1[2];
    lVar2 = *(long *)(lVar3 + 0x10);
  }
  return 1;
}

