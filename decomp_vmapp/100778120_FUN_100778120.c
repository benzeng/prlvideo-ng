
uint FUN_100778120(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = QIODevice::isOpen();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    QFileDevice::flush();
    iVar2 = QFileDevice::handle();
    _fcntl(iVar2,0x33,0);
    iVar2 = QFileDevice::handle();
    uVar3 = _fsync(iVar2);
    uVar3 = uVar3 >> 0x1f;
  }
  return uVar3;
}

