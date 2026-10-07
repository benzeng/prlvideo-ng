
void FUN_100711e70(ulong param_1)

{
  char cVar1;
  
  _CFRunLoopStop(*(undefined8 *)(param_1 + 0x20));
  do {
    QCoreApplication::processEvents(0);
    cVar1 = QThread::wait(param_1);
  } while (cVar1 == '\0');
  return;
}

