
void FUN_1002d3e40(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar6 = 0;
  do {
    lVar3 = *(long *)(param_1 + 0x40);
    while (uVar4 = *(uint *)(lVar3 + 0x24cc + uVar6 * 4), uVar4 != 0) {
      uVar5 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar4 == 0) {
        uVar5 = 0xffffffff;
      }
      if (uVar5 == 0xffffffff) break;
      uVar4 = *(uint *)(lVar3 + 0x24cc + uVar6 * 4);
      do {
        puVar1 = (uint *)(lVar3 + 0x24cc + uVar6 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar7 = uVar4 == uVar2;
        if (bVar7) {
          *puVar1 = ~(1 << ((byte)uVar5 & 0x1f)) & uVar4;
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        UNLOCK();
      } while (!bVar7);
      FUN_1002d38e0(param_1,uVar6 & 0xff,uVar5 & 0xff);
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x21) {
      return;
    }
  } while( true );
}

