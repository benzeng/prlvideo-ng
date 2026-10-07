
void FUN_1002d2520(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  ulong local_48 [3];
  
  cVar5 = FUN_1002ef8e0(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x40));
  if (cVar5 != '\0') {
    lVar4 = *(long *)(param_1 + 0x40);
    uVar9 = (ulong)(param_2 + 0x11);
    uVar8 = *(uint *)(lVar4 + 0x480 + (ulong)param_2 * 0x10);
    if (0 < DAT_1011c568c) {
      pcVar7 = "disabled";
      if (param_3 != 0) {
        pcVar7 = "enabled";
      }
      FUN_1008e3970("","USB",0,"[XHC] PORTSC[%u]=%08x will be %s",param_2,uVar8,pcVar7);
    }
    puVar1 = (uint *)(lVar4 + 0x480 + (ulong)param_2 * 0x10);
    uVar8 = uVar8 & 0x8e00c000;
    if (param_3 == 0) {
      uVar6 = *(uint *)(lVar4 + 0x2034 + uVar9 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar9 * 4);
        LOCK();
        uVar3 = *puVar2;
        bVar10 = uVar6 == uVar3;
        if (bVar10) {
          *puVar2 = uVar6 & 0xfffffffb;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
        UNLOCK();
      } while (!bVar10);
      *puVar1 = uVar8 | 0x202a0;
    }
    else {
      uVar6 = *(uint *)(lVar4 + 0x2034 + uVar9 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar9 * 4);
        LOCK();
        uVar3 = *puVar2;
        bVar10 = uVar6 == uVar3;
        if (bVar10) {
          *puVar2 = uVar6 | 4;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
        UNLOCK();
      } while (!bVar10);
      *puVar1 = uVar8 | 0x21203;
      uVar8 = *(uint *)(lVar4 + 0x2034 + uVar9 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar9 * 4);
        LOCK();
        uVar6 = *puVar2;
        bVar10 = uVar8 == uVar6;
        if (bVar10) {
          *puVar2 = uVar8 & 0xfffffffe;
          uVar6 = uVar8;
        }
        uVar8 = uVar6;
        UNLOCK();
      } while (!bVar10);
    }
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x84) & 1) == 0) {
      local_48[1] = 0x880001000000;
      local_48[0] = (ulong)(param_2 * 0x1000000 + 0x1000000);
      FUN_1002d20c0(param_1,0,local_48,1,2);
    }
    if (1 < DAT_1011c568c) {
      pcVar7 = "disabled";
      if (param_3 != 0) {
        pcVar7 = "enabled";
      }
      FUN_1008e3970("","USB",0,"[XHC] PORTSC[%u]=%08x was %s",param_2,*puVar1,pcVar7);
    }
  }
  return;
}

