
void FUN_1004e18c0(long param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  iVar3 = qHash(param_2,0);
  uVar8 = param_1 + 0x38;
  if ((uVar8 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar8 = uVar8 | 1;
  }
  puVar5 = *(uint **)(param_1 + 0x40);
  puVar7 = (undefined8 *)(param_1 + 0x40);
  if (1 < *puVar5) {
    FUN_1004ebd10(puVar7);
    puVar5 = (uint *)*puVar7;
  }
  if (*(long *)(puVar5 + 4) == 0) {
    puVar6 = puVar5 + 2;
  }
  else {
    puVar6 = *(uint **)(puVar5 + 8);
  }
  while( true ) {
    if (1 < *puVar5) {
      FUN_1004ebd10(puVar7);
      puVar5 = (uint *)*puVar7;
    }
    if (puVar6 == puVar5 + 2) break;
    if ((*(int *)(*(long *)(puVar6 + 8) + 0x40) == iVar3) &&
       (cVar2 = operator==((QString *)(*(long *)(puVar6 + 8) + 0x30),param_2), cVar2 != '\0')) {
      lVar1 = *(long *)(puVar6 + 8);
      if ((*(uint *)(lVar1 + 0x38) & 0x60) == 0) {
        if (param_3 == (QString *)0x0) {
          *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) | 0x20;
        }
        else {
          QString::operator=((QString *)(lVar1 + 0x30),param_3);
          uVar4 = qHash((QString *)(lVar1 + 0x30),0);
          *(undefined4 *)(lVar1 + 0x40) = uVar4;
        }
      }
    }
    puVar6 = (uint *)QMapNodeBase::nextNode();
    puVar5 = (uint *)*puVar7;
  }
  if ((uVar8 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

