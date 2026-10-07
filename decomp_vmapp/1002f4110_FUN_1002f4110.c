
void FUN_1002f4110(long *param_1)

{
  char cVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x20))();
  lVar2 = 0;
  do {
    if ((long *)param_1[lVar2 + 6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[lVar2 + 6] + 0x48))();
      (**(code **)(*(long *)param_1[lVar2 + 6] + 0x18))();
      param_1[lVar2 + 6] = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 200))();
    (**(code **)(*(long *)param_1[5] + 0x48))();
    cVar1 = FUN_1006d81f0(1);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1[5] + 0x128))((long *)param_1[5],0x20000000);
    }
    (**(code **)(*(long *)param_1[5] + 0x18))();
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
    param_1[3] = 0;
  }
  return;
}

