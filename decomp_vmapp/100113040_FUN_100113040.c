
void FUN_100113040(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_3c;
  int local_38;
  
  uVar8 = param_2[4];
  iVar2 = param_2[5];
  uVar6 = uVar8 * 0x10 + 0x1c;
  puVar3 = _malloc((ulong)uVar6);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1008e3970("","vm",0,"[VMApiPmmLockMemory] Memory allocation failed %u",uVar6);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_100408ff0(*(long *)(param_1 + 0x10) + 0x10b0,0x80000188,&local_68);
    FUN_10002d9d0(&local_68);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
LAB_1001133f4:
    FUN_1000a7d10(uVar9,3);
  }
  else {
    iVar10 = iVar2 * 0x1000;
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar13 = 0;
      uVar12 = 0;
      do {
        if (param_2[6] == 0) {
          lVar4 = *(long *)(param_1 + 0x10);
LAB_100113169:
          lVar11 = *(long *)(param_2 + 2) + (ulong)(uVar12 * iVar10);
          lVar4 = FUN_10008c850(*(undefined8 *)(lVar4 + 0x1940),lVar11,iVar10);
          if (lVar4 == 0) {
            _free(puVar3);
            FUN_1008e3970("","vm",0,"API_PMM_LOCK_PAGE: idx=%u, blck_sz=%u, blck_cnt=%u, gpa=%llu",
                          uVar12,param_2[5],param_2[4],*(undefined8 *)(param_2 + 2));
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            FUN_100408ff0(*(long *)(param_1 + 0x10) + 0x10b0,0x80000188,&local_88);
            FUN_10002d9d0(&local_88);
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            goto LAB_1001133f4;
          }
          *(long *)(puVar3 + (ulong)uVar12 * 4 + 3) = lVar4;
          *(long *)(puVar3 + (ulong)uVar12 * 4 + 5) = lVar11;
          uVar8 = param_2[4];
        }
        else {
          if (param_2[5] != 0) {
            lVar4 = *(long *)(param_1 + 0x10);
            uVar5 = 0;
            do {
              uVar1 = (int)(*(long *)(param_2 + 2) + (ulong)uVar13 >> 0xc) + uVar5;
              if ((*(uint *)(*(long *)(lVar4 + 0x1928) + (ulong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f)
                  & 1) != 0) goto LAB_100113169;
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)param_2[5]);
          }
          *(undefined8 *)(puVar3 + (ulong)uVar12 * 4 + 5) = 0;
          *(undefined8 *)(puVar3 + (ulong)uVar12 * 4 + 3) = 0;
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + iVar10;
      } while (uVar12 < uVar8);
      iVar2 = param_2[5];
      uVar12 = uVar8;
    }
    *puVar3 = *param_2;
    puVar3[1] = uVar12;
    puVar3[2] = iVar2;
    local_3c = 0;
    local_38 = -1;
    local_50 = 0x80f;
    local_48 = 0;
    local_4c = uVar6;
    local_44 = puVar3;
    iVar2 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_50,0x1c,0);
    if (iVar2 != 0 || local_38 != 0) {
      FUN_1008e3970("","vm",0,"[IOCTL_PMM_LOCK_PAGE] failed! %u %x",*param_2);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_100408ff0(*(long *)(param_1 + 0x10) + 0x10b0,0x80000199,&local_a8);
      FUN_10002d9d0(&local_a8);
    }
    uVar8 = param_2[4];
    if (uVar8 != 0) {
      puVar7 = (undefined8 *)(puVar3 + 5);
      uVar6 = 0;
      do {
        if (puVar7[-1] != 0) {
          uVar9 = *puVar7;
          FUN_10008c8b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),uVar9,iVar10);
          FUN_10008c880(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),uVar9,iVar10);
          uVar8 = param_2[4];
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar6 < uVar8);
    }
    _free(puVar3);
  }
  return;
}

