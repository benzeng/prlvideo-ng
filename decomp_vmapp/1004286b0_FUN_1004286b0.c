
bool FUN_1004286b0(long param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined1 local_a8 [16];
  long local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  int local_38;
  
  lVar6 = param_1 + 8;
  cVar3 = FUN_1004222d0(lVar6);
  if (cVar3 == '\0') {
    bVar4 = 0;
  }
  else {
    local_90 = *(int *)(param_1 + 0x10);
    local_40 = 0;
    local_48 = (undefined1  [8])0x0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_38 = 1;
    local_98 = lVar6;
    local_70 = lVar6;
    local_68 = local_90;
    cVar3 = FUN_100422630(&local_70,0x20);
    if (cVar3 == '\0') {
      bVar2 = true;
      bVar4 = 0;
    }
    else {
      lVar6 = 7;
      if ((*(int *)(param_1 + 0x2c) == 0) && (lVar6 = 6, *(int *)(param_1 + 0x20) != 0)) {
        lVar6 = 7;
      }
      local_78 = CONCAT44(2,(undefined4)local_78);
      cVar3 = FUN_100422630(&local_98,lVar6 * 0xc);
      if (cVar3 == '\0') {
        bVar2 = true;
        bVar4 = 0;
      }
      else {
        local_58 = 0xa793504d444d;
        _time((time_t *)(local_48 + 4));
        local_50 = CONCAT44(local_90,(int)lVar6);
        plVar7 = &DAT_100bc08b8;
        iVar9 = 0;
        lVar8 = 1;
        bVar2 = false;
        do {
          pcVar5 = (code *)plVar7[-1];
          if ((int)lVar8 == 7) {
            pcVar5 = *(code **)(pcVar5 + *(long *)(*plVar7 + param_1) + -1);
          }
          bVar4 = (*pcVar5)((long *)(*plVar7 + param_1),local_a8);
          if (bVar4 == 0) break;
          FUN_100422730(local_98,local_90 + iVar9,local_a8,0xc);
          bVar1 = lVar8 < lVar6;
          plVar7 = plVar7 + 2;
          lVar8 = lVar8 + 1;
          iVar9 = iVar9 + 0xc;
        } while ((bVar1 & bVar4) != 0);
      }
    }
    if (local_78._4_4_ != 2) {
      FUN_100422730(local_98,local_90,&local_80,0xc);
    }
    if (local_38 != 2) {
      FUN_100422730(local_70,local_68,&local_58,0x20);
    }
    if (bVar2) {
      return false;
    }
  }
  return bVar4 != 0;
}

