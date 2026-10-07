
undefined8 FUN_1002d3ed0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC] Activity  EVT = %08x  STS = %08x",
                  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x24c4),
                  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x24c8));
  }
  lVar7 = *(long *)(param_1 + 0x40);
  uVar5 = 0;
  if (*(int *)(lVar7 + 0x24c4) != 0) {
    uVar5 = 0;
    do {
      uVar4 = *(uint *)(lVar7 + 0x24c8);
      do {
        LOCK();
        uVar6 = *(uint *)(lVar7 + 0x24c8);
        bVar9 = uVar4 == uVar6;
        if (bVar9) {
          *(uint *)(lVar7 + 0x24c8) = uVar4 | 1;
          uVar6 = uVar4;
        }
        uVar4 = uVar6;
        UNLOCK();
      } while (!bVar9);
      lVar7 = *(long *)(param_1 + 0x40);
      uVar4 = *(uint *)(lVar7 + 0x24c4);
      if ((uVar4 & 8) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x24c4);
        do {
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x24c4);
          bVar9 = uVar4 == uVar6;
          if (bVar9) {
            *(uint *)(lVar7 + 0x24c4) = uVar4 & 0xfffffff7;
            uVar6 = uVar4;
          }
          uVar4 = uVar6;
          UNLOCK();
        } while (!bVar9);
        if (1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[XHC] Update CR DP. CRCR = %08x%08x",
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x9c),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x98));
        }
        lVar7 = *(long *)(param_1 + 0x40);
        uVar8 = *(ulong *)(lVar7 + 0x98);
        *(ulong *)(param_1 + 0x1610) = uVar8 & 0xffffffffffffffc0;
        *(byte *)(param_1 + 0x1620) = *(byte *)(param_1 + 0x1620) & 0xfe | (byte)uVar8 & 1;
        uVar4 = *(uint *)(lVar7 + 0x24c4);
      }
      if ((uVar4 & 0x40) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x24c4);
        do {
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x24c4);
          bVar9 = uVar4 == uVar6;
          if (bVar9) {
            *(uint *)(lVar7 + 0x24c4) = uVar4 & 0xffffffbf;
            uVar6 = uVar4;
          }
          uVar4 = uVar6;
          UNLOCK();
        } while (!bVar9);
        FUN_1002d2890(param_1,0,0,1);
        FUN_1002d2890(param_1,1,0,1);
        FUN_1002d2890(param_1,2,0,1);
        FUN_1002d2890(param_1,3,0,1);
        FUN_1002d2890(param_1,4,0,1);
        FUN_1002d2890(param_1,5,0,1);
        FUN_1002d2890(param_1,6,0,1);
        FUN_1002d2890(param_1,7,0,1);
        lVar7 = *(long *)(param_1 + 0x40);
        uVar4 = *(uint *)(lVar7 + 0x24c4);
      }
      if ((uVar4 & 0x80) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x24c4);
        do {
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x24c4);
          bVar9 = uVar4 == uVar6;
          if (bVar9) {
            *(uint *)(lVar7 + 0x24c4) = uVar4 & 0xffffff7f;
            uVar6 = uVar4;
          }
          uVar4 = uVar6;
          UNLOCK();
        } while (!bVar9);
        uVar8 = 0;
        do {
          lVar7 = *(long *)(param_1 + 0x40);
          while (uVar4 = *(uint *)(lVar7 + 0x24cc + uVar8 * 4), uVar4 != 0) {
            uVar6 = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            if (uVar4 == 0) {
              uVar6 = 0xffffffff;
            }
            if (uVar6 == 0xffffffff) break;
            uVar4 = *(uint *)(lVar7 + 0x24cc + uVar8 * 4);
            do {
              puVar1 = (uint *)(lVar7 + 0x24cc + uVar8 * 4);
              LOCK();
              uVar3 = *puVar1;
              bVar9 = uVar4 == uVar3;
              if (bVar9) {
                *puVar1 = ~(1 << ((byte)uVar6 & 0x1f)) & uVar4;
                uVar3 = uVar4;
              }
              uVar4 = uVar3;
              UNLOCK();
            } while (!bVar9);
            FUN_1002d38e0(param_1,uVar8 & 0xff,uVar6 & 0xff);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x21);
        lVar7 = *(long *)(param_1 + 0x40);
        uVar4 = *(uint *)(lVar7 + 0x24c4);
      }
      if ((uVar4 & 0x100) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x24c4);
        do {
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x24c4);
          bVar9 = uVar4 == uVar6;
          if (bVar9) {
            *(uint *)(lVar7 + 0x24c4) = uVar4 & 0xfffffeff;
            uVar6 = uVar4;
          }
          uVar4 = uVar6;
          UNLOCK();
        } while (!bVar9);
        *(undefined8 *)(param_1 + 0x1478) = 0;
        lVar7 = *(long *)(param_1 + 0x40);
        if ((*(uint *)(lVar7 + 0x80) & 0x401) == 0x401) {
          uVar5 = FUN_1007d87f0();
          *(undefined8 *)(param_1 + 0x1478) = uVar5;
          lVar7 = *(long *)(param_1 + 0x40);
          uVar5 = 1;
        }
      }
      uVar4 = *(uint *)(lVar7 + 0x24c4);
      if ((uVar4 & 2) != 0) {
        *(undefined4 *)(param_1 + 0x14c8) = 1;
      }
      if ((uVar4 & 4) != 0) {
        *(undefined4 *)(param_1 + 0x14c8) = 0;
      }
      uVar4 = *(uint *)(lVar7 + 0x24c4);
      do {
        LOCK();
        uVar6 = *(uint *)(lVar7 + 0x24c4);
        bVar9 = uVar4 == uVar6;
        if (bVar9) {
          *(uint *)(lVar7 + 0x24c4) = uVar4 & 0x1c8;
          uVar6 = uVar4;
        }
        uVar4 = uVar6;
        UNLOCK();
      } while (!bVar9);
      lVar7 = *(long *)(param_1 + 0x40);
      uVar4 = *(uint *)(lVar7 + 0x24c8);
      do {
        puVar1 = (uint *)(lVar7 + 0x24c8);
        LOCK();
        uVar6 = *puVar1;
        bVar9 = uVar4 == uVar6;
        if (bVar9) {
          *puVar1 = uVar4 & 0xfffffffe;
          uVar6 = uVar4;
        }
        uVar4 = uVar6;
        UNLOCK();
      } while (!bVar9);
      lVar7 = *(long *)(param_1 + 0x40);
    } while (*(int *)(lVar7 + 0x24c4) != 0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x14a8) + 0xf0);
  *plVar2 = *plVar2 + 1;
  return uVar5;
}

