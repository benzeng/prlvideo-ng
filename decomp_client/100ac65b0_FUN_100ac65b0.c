
void FUN_100ac65b0(long param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar1 != '\0') {
    if (param_2 == 2) {
      QTimer::stop();
      return;
    }
    if ((param_2 == 1) &&
       ((*(char *)(*(long *)(param_1 + 0xa30) + 0x10) != '\0' ||
        (*(char *)(param_1 + 0xaa6) != '\0')))) {
      QTimer::start();
      return;
    }
  }
  return;
}

