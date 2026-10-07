
void FUN_1002ce770(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar7;
  bool bVar8;
  uint *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48 [2];
  undefined4 local_38;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if ((*(uint *)(lVar4 + 0x1020) & 0x21) == 0x21) {
    if (3 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[EHC] Start asynchronous schedule processing (%8.8X)",
                    *(undefined4 *)(lVar4 + 0x1038));
      lVar4 = *(long *)(param_1 + 0x40);
    }
    if ((*(byte *)(lVar4 + 0x1025) & 0x20) == 0) {
      uVar2 = *(uint *)(lVar4 + 0x1024);
      do {
        LOCK();
        uVar7 = *(uint *)(lVar4 + 0x1024);
        bVar8 = uVar2 == uVar7;
        if (bVar8) {
          *(uint *)(lVar4 + 0x1024) = uVar2 | 0x2000;
          uVar7 = uVar2;
        }
        uVar2 = uVar7;
        UNLOCK();
      } while (!bVar8);
      lVar4 = *(long *)(param_1 + 0x40);
    }
    uVar2 = *(uint *)(lVar4 + 0x1038);
    *(undefined4 *)(param_1 + 0x474) = 0;
    if ((uVar2 & 1) == 0) {
      uVar7 = 1;
      while( true ) {
        uVar5 = uVar2 & 0xffffffe0;
        uVar6 = (ulong)uVar5;
        if (uVar5 == 0) break;
        uVar3 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar3 = 0xb0000000;
        }
        if ((uVar3 <= uVar6) ||
           (cVar1 = FUN_1002c78a0((int *)(param_1 + 0x474),uVar5), cVar1 != '\0')) break;
        lVar4 = (long)*(int *)(param_1 + 0x474);
        if (lVar4 < 0x400) {
          *(uint *)(param_1 + 0x478 + lVar4 * 4) = uVar5;
          *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
        }
        local_48[0] = 0;
        local_48[1] = 0;
        local_38 = 0;
        FUN_10008d2d0(local_48,uVar6,0x30);
        if ((*(byte *)(local_48[0] + 5) & 0x80) != 0) {
          lVar4 = *(long *)(param_1 + 0x40);
          if ((*(byte *)(lVar4 + 0x1025) & 0x20) == 0) {
            FUN_10008d3f0(local_48);
            break;
          }
          uVar2 = *(uint *)(lVar4 + 0x1024);
          do {
            LOCK();
            uVar5 = *(uint *)(lVar4 + 0x1024);
            bVar8 = uVar2 == uVar5;
            if (bVar8) {
              *(uint *)(lVar4 + 0x1024) = uVar2 & 0xffffdfff;
              uVar5 = uVar2;
            }
            uVar2 = uVar5;
            UNLOCK();
          } while (!bVar8);
        }
        FUN_1002cd920(param_1,local_48);
        local_68 = (uint *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_10008d2d0(&local_68,uVar6,4);
        uVar2 = *local_68;
        FUN_10008d3f0(&local_68);
        FUN_10008d3f0(local_48);
        if ((99 < uVar7) || (uVar7 = uVar7 + 1, (uVar2 & 1) != 0)) break;
      }
    }
    *(uint *)(*(long *)(param_1 + 0x40) + 0x1038) = uVar2 & 0xffffffe0;
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 1;
  }
  return;
}

