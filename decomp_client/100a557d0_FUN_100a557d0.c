
void FUN_100a557d0(undefined8 *param_1)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)*param_1;
  uVar5 = puVar4[1];
  if (0 < (int)uVar5) {
    lVar3 = 0;
    do {
      uVar1 = *(ushort *)((long)puVar4 + lVar3 * 2 + *(long *)(puVar4 + 4));
      if (uVar1 - 9 < 0x18) {
        if ((0x80001fU >> (uVar1 - 9 & 0x1f) & 1) != 0) {
LAB_100a55850:
          if (lVar3 < (int)uVar5) {
            if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
              QString::reallocData((uint)param_1,(bool)((char)uVar5 + '\x01'));
            }
          }
          else {
            QString::expand((uint)param_1);
          }
          puVar4 = (uint *)*param_1;
          *(undefined2 *)((long)puVar4 + lVar3 * 2 + *(long *)(puVar4 + 4)) = 0x20;
          uVar5 = puVar4[1];
        }
      }
      else if ((0x7f < uVar1) &&
              (((uVar1 == 0x85 || (uVar1 == 0xa0)) ||
               (cVar2 = QChar::isSpace_helper((uint)uVar1), cVar2 != '\0')))) goto LAB_100a55850;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar5);
  }
  return;
}

