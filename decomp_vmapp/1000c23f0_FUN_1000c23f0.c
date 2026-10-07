
undefined8 FUN_1000c23f0(long param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  QString local_48;
  undefined1 local_39;
  QHostAddress local_38 [8];
  QTcpServer local_30 [16];
  
  if (DAT_100befdb0 == *(int *)(param_1 + 0x34)) {
    puVar7 = &DAT_100befdb0;
  }
  else {
    if (DAT_100befdd0 != *(int *)(param_1 + 0x34)) {
      return 0;
    }
    puVar7 = &DAT_100befdd0;
  }
  QTcpServer::QTcpServer(local_30,(QObject *)0x0);
  QHostAddress::QHostAddress(local_38,4);
  cVar1 = QTcpServer::listen(local_30,(ushort)local_38);
  QHostAddress::~QHostAddress(local_38);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = QTcpServer::serverPort();
  }
  QTcpServer::close();
  QTcpServer::~QTcpServer(local_30);
  if (uVar2 == 0) {
    uVar6 = puVar7[4];
  }
  else {
    uVar6 = (uint)uVar2;
  }
  uVar3 = FUN_1007da300(*(undefined8 *)(puVar7 + 2),uVar6);
  *(undefined2 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar7 + 6);
  iVar4 = FUN_1007da300("vm.debug.anyhost",0);
  *(uint *)(param_1 + 0x44) = (uint)(iVar4 == 0);
  pcVar5 = (char *)FUN_1007da5e0("vm.debug.osabi","Darwin");
  if (pcVar5 != (char *)0x0) {
    _strlen(pcVar5);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
  QString::operator=((QString *)(param_1 + 0x48),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 1;
      }
      local_39 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 1;
}

