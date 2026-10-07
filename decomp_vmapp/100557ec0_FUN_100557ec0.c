
undefined8 FUN_100557ec0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  cVar5 = FUN_100556a40();
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = *(uint *)(lVar3 + 8);
    if (uVar2 != 0) {
      lVar4 = *(long *)(lVar3 + 0x48);
      uVar7 = 0;
      do {
        if (7 < *(uint *)(lVar3 + 0x24)) {
          uVar9 = *(uint *)(lVar3 + 0x24) >> 3;
          uVar8 = 0;
          do {
            if (*(char *)((ulong)(uVar9 * uVar7) + lVar4 + uVar8) != '\0') goto LAB_100557f37;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        puVar1 = (uint *)(*(long *)(param_1 + 0x78) + (ulong)(uVar7 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_100557f37:
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar2);
    }
    QThread::start(param_1 + 0x30,7);
    uVar6 = 1;
  }
  return uVar6;
}

