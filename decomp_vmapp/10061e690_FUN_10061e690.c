
void FUN_10061e690(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)*param_1;
  uVar5 = puVar4[1];
  if (0 < (int)uVar5) {
    lVar2 = 0;
    do {
      uVar3 = 0;
      if (lVar2 < (int)puVar4[1]) {
        uVar3 = (uint)*(ushort *)((long)puVar4 + lVar2 * 2 + *(long *)(puVar4 + 4));
      }
      cVar1 = QChar::isPrint(uVar3);
      if (((cVar1 == '\0') &&
          (((int)puVar4[1] <= lVar2 ||
           (*(short *)((long)puVar4 + lVar2 * 2 + *(long *)(puVar4 + 4)) != 10)))) &&
         (((int)puVar4[1] <= lVar2 ||
          (*(short *)((long)puVar4 + lVar2 * 2 + *(long *)(puVar4 + 4)) != 0xd)))) {
        if (lVar2 < (int)uVar5) {
          if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
            QString::reallocData((uint)param_1,(bool)((char)uVar5 + '\x01'));
          }
        }
        else {
          QString::expand((uint)param_1);
        }
        puVar4 = (uint *)*param_1;
        *(undefined2 *)((long)puVar4 + lVar2 * 2 + *(long *)(puVar4 + 4)) = 0x3f;
        uVar5 = puVar4[1];
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uVar5);
  }
  return;
}

