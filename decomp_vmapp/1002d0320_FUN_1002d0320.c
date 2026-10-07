
void FUN_1002d0320(long *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  uVar9 = (ulong)param_2;
  cVar5 = FUN_1002ef8e0(*(undefined8 *)(param_1[10] + 0x40));
  if (cVar5 != '\0') {
    lVar4 = param_1[8];
    uVar8 = (ulong)(param_2 + 2);
    if (0 < DAT_1011c568c) {
      pcVar7 = "disabled";
      if (param_3 != 0) {
        pcVar7 = "enabled";
      }
      FUN_1008e3970("","USB",0,"[EHC] PORTSC[%u]=%08x will be %s",param_2,
                    *(undefined4 *)(lVar4 + 0x1064 + uVar9 * 4),pcVar7);
    }
    if (param_3 == 0) {
      uVar6 = *(uint *)(lVar4 + 0x2034 + uVar8 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar8 * 4);
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
      uVar6 = *(uint *)(lVar4 + 0x1064 + uVar9 * 4) & 0xffffff3a;
      *(uint *)(lVar4 + 0x1064 + uVar9 * 4) = uVar6;
    }
    else {
      pbVar1 = (byte *)(lVar4 + 0x1065 + uVar9 * 4);
      *pbVar1 = *pbVar1 & 0xf3;
      uVar6 = *(uint *)(lVar4 + 0x2034 + uVar8 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar8 * 4);
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
      pbVar1 = (byte *)(lVar4 + 0x1064 + uVar9 * 4);
      *pbVar1 = *pbVar1 | 1;
      uVar6 = *(uint *)(lVar4 + 0x2034 + uVar8 * 4);
      do {
        puVar2 = (uint *)(lVar4 + 0x2034 + uVar8 * 4);
        LOCK();
        uVar3 = *puVar2;
        bVar10 = uVar6 == uVar3;
        if (bVar10) {
          *puVar2 = uVar6 & 0xfffffffe;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
        UNLOCK();
      } while (!bVar10);
      uVar6 = *(uint *)(lVar4 + 0x1064 + uVar9 * 4);
    }
    *(uint *)(lVar4 + 0x1064 + uVar9 * 4) = uVar6 | 2;
    (**(code **)(*param_1 + 0x40))(param_1,0x10);
    if (0 < DAT_1011c568c) {
      pcVar7 = "disabled";
      if (param_3 != 0) {
        pcVar7 = "enabled";
      }
      FUN_1008e3970("","USB",0,"[EHC] PORTSC[%u]=%08x was %s",uVar9,
                    *(undefined4 *)(lVar4 + 0x1064 + uVar9 * 4),pcVar7);
    }
  }
  return;
}

