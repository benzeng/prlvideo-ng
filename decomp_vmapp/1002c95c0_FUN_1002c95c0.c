
void FUN_1002c95c0(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar7 = (ulong)param_2;
  if (0 < DAT_1011c568c) {
    pcVar6 = "disabled";
    if (param_3 != 0) {
      pcVar6 = "enabled";
    }
    FUN_1008e3970("","USB",0,"[UHC] PORTSC[%u] will be %s",uVar7,pcVar6);
  }
  if (param_2 < 2) {
    lVar5 = *(long *)(param_1 + 0x40);
    if (param_3 == 0) {
      uVar4 = *(uint *)(lVar5 + 0x2034 + uVar7 * 4);
      do {
        puVar1 = (uint *)(lVar5 + 0x2034 + uVar7 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar8 = uVar4 == uVar2;
        if (bVar8) {
          *puVar1 = uVar4 & 0xfffffffb;
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        UNLOCK();
      } while (!bVar8);
    }
    else {
      uVar4 = *(uint *)(lVar5 + 0x2034 + uVar7 * 4);
      do {
        puVar1 = (uint *)(lVar5 + 0x2034 + uVar7 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar8 = uVar4 == uVar2;
        if (bVar8) {
          *puVar1 = uVar4 | 4;
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        UNLOCK();
      } while (!bVar8);
    }
    plVar3 = *(long **)(param_1 + 0x50);
    lVar5 = FUN_100257d80(plVar3);
    uVar4 = *(uint *)(lVar5 + 0x2030);
    do {
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x2030);
      bVar8 = uVar4 == uVar2;
      if (bVar8) {
        *(uint *)(lVar5 + 0x2030) = uVar4 | 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar8);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    FUN_1002c9460(param_1,uVar7,param_3);
  }
  if (DAT_1011c568c < 1) {
    return;
  }
  pcVar6 = "disabled";
  if (param_3 != 0) {
    pcVar6 = "enabled";
  }
  FUN_1008e3970("","USB",0,"[UHC] PORTSC[%u] was %s",uVar7,pcVar6);
  return;
}

