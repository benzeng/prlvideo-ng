
bool FUN_100558930(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_100556a40();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    QThread::start(param_1 + 0x30,7);
  }
  return cVar1 != '\0';
}

