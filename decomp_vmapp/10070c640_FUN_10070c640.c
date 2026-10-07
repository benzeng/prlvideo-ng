
void FUN_10070c640(long param_1,long *param_2,long param_3,uint param_4,undefined4 param_5)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  undefined8 uVar9;
  size_t sVar10;
  int iVar11;
  uint uVar12;
  long local_4048 [2];
  void *local_4038;
  size_t local_4030 [2047];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *param_2;
  bVar1 = false;
  if (lVar3 == 0) {
    sVar10 = 0;
    iVar11 = 0;
  }
  else {
    sVar10 = 0;
    iVar11 = 0;
    do {
      if (((*(uint *)(lVar3 + 8) & 0x4000) != 0) && (DAT_1011ccc18 != (code *)0x0)) {
        (*DAT_1011ccc18)(1,0x32,lVar3 << 8 | 1);
      }
      uVar12 = *(uint *)(lVar3 + 0x54);
      if ((ulong)uVar12 != 0) {
        puVar4 = (uint *)(lVar3 + 0x60);
        uVar5 = 0;
        do {
          if (iVar11 < 1) {
            sVar8 = *(size_t *)(puVar4 + -2);
LAB_10070c734:
            if ((*(uint *)(lVar3 + 8) & 0x2000) != 0) {
              bVar1 = true;
            }
            local_4030[(long)iVar11 * 2 + -1] = sVar8;
            uVar7 = (ulong)*puVar4;
            local_4030[(long)iVar11 * 2] = uVar7;
            iVar11 = iVar11 + 1;
          }
          else {
            lVar6 = (long)(iVar11 + -1);
            sVar8 = *(size_t *)(puVar4 + -2);
            if (local_4030[lVar6 * 2 + -1] + local_4030[lVar6 * 2] != sVar8) goto LAB_10070c734;
            uVar7 = (ulong)*puVar4;
            local_4030[lVar6 * 2] = local_4030[lVar6 * 2] + uVar7;
          }
          sVar10 = sVar10 + uVar7;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 4;
        } while (uVar5 < uVar12);
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  local_4048[0] = 0;
  local_4048[1] = 0;
  if ((1 < iVar11) || (bVar1)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar9 = FUN_1007d87f0();
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    pvVar2 = *(void **)(param_1 + 0x28);
    if (pvVar2 == (void *)0x0) {
LAB_10070c7d3:
      *(size_t *)(param_1 + 0x30) = sVar10;
      pvVar2 = _valloc(sVar10);
      *(void **)(param_1 + 0x28) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        FUN_1008e3970("","AbstractFile",0,"Failed to allocate buffer of size %lld",sVar10);
        for (lVar3 = *param_2; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 8;
          *(undefined4 *)(lVar3 + 0x28) = 0xc;
        }
        goto LAB_10070c961;
      }
    }
    else if (*(long *)(param_1 + 0x30) < (long)sVar10) {
      _free(pvVar2);
      goto LAB_10070c7d3;
    }
    if (((param_4 & 1) != 0) && (lVar3 = *param_2, lVar3 != 0)) {
      uVar12 = 0;
      do {
        FUN_10070b220((ulong)uVar12 + (long)pvVar2,lVar3 + 0x50,0,*(undefined4 *)(lVar3 + 0x50));
        uVar12 = uVar12 + *(int *)(lVar3 + 0x50);
        lVar3 = *(long *)(lVar3 + 0x20);
      } while (lVar3 != 0);
    }
    iVar11 = 1;
    local_4038 = pvVar2;
    local_4030[0] = sVar10;
  }
  else {
    pvVar2 = (void *)0x0;
  }
  uVar12 = param_4 & 1;
  param_3 = param_3 * *(long *)(*(long *)(param_1 + 0x10) + 0x278);
  if (uVar12 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = 2;
  }
  (**(code **)(**(long **)(*param_2 + 0x40) + 0x28))
            (*(long **)(*param_2 + 0x40),uVar9,uVar12 != 0,param_3,sVar10 & 0xffffffff);
  FUN_10070d2e0(param_5,param_3,&local_4038,iVar11,param_4,*param_2,sVar10,local_4048,param_1 + 0x18
               );
  if (((uVar12 == 0) && (pvVar2 != (void *)0x0)) && (local_4048[0] != 0)) {
    uVar12 = 0;
    lVar3 = local_4048[0];
    do {
      if ((*(byte *)(lVar3 + 8) & 0xfc) == 0) {
        FUN_10070b090(lVar3 + 0x50,(ulong)uVar12 + (long)pvVar2,0,*(undefined4 *)(lVar3 + 0x50));
      }
      uVar12 = uVar12 + *(int *)(lVar3 + 0x50);
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1007d87f0(), 4999999 < (ulong)(lVar3 - *(long *)(param_1 + 0x20)))) {
    _free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  param_2 = local_4048;
LAB_10070c961:
  FUN_10070c530(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

