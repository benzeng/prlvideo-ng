
undefined8 FUN_1002cc5c0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  uint local_34;
  
  uVar3 = *(uint *)(param_1[8] + 0x202c);
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[EHC] Activity %08x",uVar3);
  }
  if ((uVar3 & 0x20) != 0) {
    lVar4 = param_1[8];
    uVar5 = *(uint *)(lVar4 + 0x202c);
    do {
      puVar1 = (uint *)(lVar4 + 0x202c);
      LOCK();
      uVar2 = *puVar1;
      bVar8 = uVar5 == uVar2;
      if (bVar8) {
        *puVar1 = uVar5 & 0xffffffdf;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      UNLOCK();
    } while (!bVar8);
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[EHC] Bus Reset");
    }
  }
  local_34 = uVar3 & 0x40;
  if ((uVar3 & 0x40) != 0) {
    lVar4 = param_1[8];
    uVar5 = *(uint *)(lVar4 + 0x202c);
    do {
      puVar1 = (uint *)(lVar4 + 0x202c);
      LOCK();
      uVar2 = *puVar1;
      bVar8 = uVar5 == uVar2;
      if (bVar8) {
        *puVar1 = uVar5 & 0xffffffbf;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      UNLOCK();
    } while (!bVar8);
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[EHC] Selective suspend/resume");
    }
  }
  if ((int)param_1[0xb] != 0) {
    uVar7 = 0;
    do {
      uVar6 = (ulong)((int)uVar7 + 2);
      lVar4 = param_1[8];
      if (((uVar3 & 0x20) == 0) && (uVar5 = *(uint *)(lVar4 + 0x2034 + uVar6 * 4), (uVar5 & 1) == 0)
         ) {
        if ((uVar5 & 2) == 0) {
          if ((local_34 != 0) && (0 < DAT_1011c568c)) {
            FUN_1008e3970("","USB",0,"[EHC] PORTSC[%d] = %08x",uVar7 & 0xffffffff,
                          *(undefined4 *)(lVar4 + 0x1064 + uVar7 * 4));
          }
        }
        else {
          uVar5 = *(uint *)(lVar4 + 0x2034 + uVar6 * 4);
          do {
            puVar1 = (uint *)(lVar4 + 0x2034 + uVar6 * 4);
            LOCK();
            uVar2 = *puVar1;
            bVar8 = uVar5 == uVar2;
            if (bVar8) {
              *puVar1 = uVar5 & 0xfffffffd;
              uVar2 = uVar5;
            }
            uVar5 = uVar2;
            UNLOCK();
          } while (!bVar8);
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[EHC] PORTSC[%d] Disable",uVar7 & 0xffffffff);
          }
        }
      }
      else {
        uVar5 = *(uint *)(lVar4 + 0x2034 + uVar6 * 4);
        do {
          puVar1 = (uint *)(lVar4 + 0x2034 + uVar6 * 4);
          LOCK();
          uVar2 = *puVar1;
          bVar8 = uVar5 == uVar2;
          if (bVar8) {
            *puVar1 = uVar5 & 0xfffffffe;
            uVar2 = uVar5;
          }
          uVar5 = uVar2;
          UNLOCK();
        } while (!bVar8);
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[EHC] PORTSC[%d] Reset",uVar7 & 0xffffffff);
        }
        (**(code **)(*param_1 + 0x58))(param_1,uVar7 & 0xffffffff);
      }
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 < *(uint *)(param_1 + 0xb));
  }
  *(long *)(param_1[0x295] + 0xf0) = *(long *)(param_1[0x295] + 0xf0) + 1;
  return 0;
}

