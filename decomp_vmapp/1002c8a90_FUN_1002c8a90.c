
void FUN_1002c8a90(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  
  *(long *)(param_1[0x298] + 0xf0) = *(long *)(param_1[0x298] + 0xf0) + 1;
  if ((int)param_1[0x292] == 3) {
    if ((param_2 < 0x22) && ((param_3 & 0x70) < 0x10)) {
      lVar5 = param_1[8];
      uVar3 = *(uint *)(lVar5 + 0x24cc + (ulong)param_2 * 4);
      do {
        puVar1 = (uint *)(lVar5 + 0x24cc + (ulong)param_2 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *puVar1 = 1 << ((param_3 == 0) +
                          ((byte)(param_3 >> 7) & 1 | (char)param_3 * '\x02' & 0x1eU) & 0x1f) |
                    uVar3;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
      lVar5 = param_1[8];
      uVar3 = *(uint *)(lVar5 + 0x24c4);
      do {
        puVar1 = (uint *)(lVar5 + 0x24c4);
        LOCK();
        uVar2 = *puVar1;
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *puVar1 = uVar3 | 0x80;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if ((uVar3 & 0x81) != 0x81) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x70))();
        lVar5 = FUN_100257d80(plVar4);
        uVar3 = *(uint *)(lVar5 + 0x2030);
        do {
          LOCK();
          uVar2 = *(uint *)(lVar5 + 0x2030);
          bVar6 = uVar3 == uVar2;
          if (bVar6) {
            *(uint *)(lVar5 + 0x2030) = uVar3 | 4;
            uVar2 = uVar3;
          }
          uVar3 = uVar2;
          UNLOCK();
        } while (!bVar6);
        goto LAB_1002c8bb7;
      }
    }
    else if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC] Incorrect target -> skiped (addr:%d ep:%02x)");
      return;
    }
  }
  else {
    lVar5 = param_1[8];
    uVar3 = *(uint *)(lVar5 + 0x202c);
    do {
      puVar1 = (uint *)(lVar5 + 0x202c);
      LOCK();
      uVar2 = *puVar1;
      bVar6 = uVar3 == uVar2;
      if (bVar6) {
        *puVar1 = uVar3 | 4;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
      UNLOCK();
    } while (!bVar6);
    if ((uVar3 & 4) == 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x70))();
      lVar5 = FUN_100257d80(plVar4);
      uVar3 = *(uint *)(lVar5 + 0x2030);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x2030);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(lVar5 + 0x2030) = uVar3 | 8;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
LAB_1002c8bb7:
                    /* WARNING: Could not recover jumptable at 0x0001002c8bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}

