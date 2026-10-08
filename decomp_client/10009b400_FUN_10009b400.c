
void FUN_10009b400(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(param_1 + 0x20),param_2);
  if ((cVar1 != '\0') && (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10))) {
    QTimer::start();
    return;
  }
  return;
}

