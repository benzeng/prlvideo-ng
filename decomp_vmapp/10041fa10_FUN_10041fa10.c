
ulong FUN_10041fa10(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  
  puVar8 = (uint *)*param_1;
  uVar3 = puVar8[1];
  if ((*puVar8 < 2) && (*(long *)(puVar8 + 4) == 0x18)) {
    lVar9 = *(long *)(puVar8 + 4) + (long)puVar8;
LAB_10041fa5b:
    if (*(long *)(puVar8 + 4) == 0x18) goto LAB_10041fa78;
  }
  else {
    QByteArray::reallocData(param_1,uVar3 + 1,puVar8[2] >> 0x1f);
    puVar8 = (uint *)*param_1;
    lVar9 = *(long *)(puVar8 + 4) + (long)puVar8;
    if (*puVar8 < 2) goto LAB_10041fa5b;
  }
  QByteArray::reallocData(param_1,puVar8[1] + 1,puVar8[2] >> 0x1f);
  puVar8 = (uint *)*param_1;
LAB_10041fa78:
  uVar7 = 0;
  if (0 < (int)uVar3) {
    lVar4 = *(long *)(puVar8 + 4);
    uVar7 = 0;
    do {
      cVar1 = *(char *)(lVar9 + uVar7 * 2);
      if ((cVar1 == '\0') || (cVar2 = *(char *)(lVar9 + 1 + uVar7 * 2), cVar2 == '\0')) break;
      bVar5 = cVar1 - 0x30;
      if (9 < bVar5) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          bVar5 = cVar1 + 0xa9;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          bVar5 = cVar1 - 0x37;
        }
        else {
          bVar5 = 0xff;
        }
      }
      bVar6 = cVar2 - 0x30;
      if (9 < bVar6) {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          bVar6 = cVar2 + 0xa9;
        }
        else if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar6 = cVar2 - 0x37;
        }
        else {
          bVar6 = 0xff;
        }
      }
      *(byte *)((long)puVar8 + uVar7 + lVar4) = bVar6 + bVar5 * '\x10';
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar3);
  }
  QByteArray::resize((int)param_1);
  return uVar7 & 0xffffffff;
}

