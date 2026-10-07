
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_100767790(long param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  size_t sVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  uint uVar14;
  uint local_60;
  ulong local_48 [3];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar7 = 0;
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
  }
  else {
    local_48[2] = *(undefined8 *)(param_1 + 0x20);
    sVar9 = (size_t)*(uint *)(param_2 + 1);
    if (8 < sVar9) {
      sVar9 = 8;
    }
    puVar2 = local_48 + 2;
    _memcpy((void *)*param_2,puVar2,sVar9);
    lVar12 = *param_2;
    *param_2 = (long)(lVar12 + sVar9);
    uVar3 = (int)param_2[1] - (int)sVar9;
    *(uint *)(param_2 + 1) = uVar3;
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    sVar10 = (size_t)uVar3;
    if (8 < sVar10) {
      sVar10 = 8;
    }
    _memcpy((void *)(lVar12 + sVar9),puVar2,sVar10);
    lVar12 = *param_2;
    *param_2 = (long)(lVar12 + sVar10);
    uVar3 = (int)param_2[1] - (int)sVar10;
    *(uint *)(param_2 + 1) = uVar3;
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    sVar9 = (size_t)uVar3;
    if (8 < sVar9) {
      sVar9 = 8;
      uVar3 = 8;
    }
    _memcpy((void *)(lVar12 + sVar10),puVar2,sVar9);
    pvVar13 = (void *)(sVar9 + *param_2);
    *param_2 = (long)pvVar13;
    uVar3 = (int)param_2[1] - uVar3;
    *(uint *)(param_2 + 1) = uVar3;
    lVar12 = *(long *)(param_1 + 0x10);
    uVar5 = *(ulong *)(lVar12 + 0x10);
    uVar14 = *(uint *)(param_1 + 0x1c);
    local_60 = 0;
    uVar6 = (ulong)*(uint *)(lVar12 + 8) % (ulong)uVar14;
    iVar4 = (int)uVar6;
    while( true ) {
      lVar11 = uVar6 * 0x10;
      uVar1 = *(ulong *)(lVar12 + 0x30 + lVar11) & 0xffffffffffff;
      if (uVar1 != 0) {
        sVar9 = (size_t)uVar3;
        if (8 < uVar3) {
          sVar9 = 8;
        }
        _memcpy(pvVar13,(void *)(lVar12 + 0x30 + lVar11),sVar9);
        lVar12 = *param_2;
        *param_2 = (long)(lVar12 + sVar9);
        uVar3 = *(uint *)(param_2 + 1);
        *(int *)(param_2 + 1) = (int)(uVar3 - sVar9);
        sVar10 = uVar3 - sVar9 & 0xffffffff;
        if (8 < sVar10) {
          sVar10 = 8;
        }
        _memcpy((void *)(lVar12 + sVar9),(void *)(*(long *)(param_1 + 0x10) + 0x38 + lVar11),sVar10)
        ;
        pvVar13 = (void *)(sVar10 + *param_2);
        *param_2 = (long)pvVar13;
        uVar3 = (int)param_2[1] - (int)sVar10;
        *(uint *)(param_2 + 1) = uVar3;
        local_60 = local_60 + 1;
        uVar14 = *(uint *)(param_1 + 0x1c);
        uVar5 = uVar1 << 8;
      }
      uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar14;
      if ((int)uVar6 == iVar4) break;
      lVar12 = *(long *)(param_1 + 0x10);
    }
    if (local_60 == uVar14) {
      local_48[0] = uVar5 >> 8 & 0xffffffffffff | 0xff00000000000000;
      local_48[1] = 0xff;
      sVar9 = (size_t)uVar3;
      if (8 < uVar3) {
        sVar9 = 8;
      }
      _memcpy(pvVar13,local_48,sVar9);
      lVar12 = *param_2;
      *param_2 = (long)(lVar12 + sVar9);
      uVar3 = *(uint *)(param_2 + 1);
      iVar4 = (int)(uVar3 - sVar9);
      *(int *)(param_2 + 1) = iVar4;
      uVar5 = uVar3 - sVar9 & 0xffffffff;
      sVar10 = 8;
      if (uVar5 < 9) {
        sVar10 = uVar5;
      }
      iVar8 = 8;
      if (uVar5 < 9) {
        iVar8 = iVar4;
      }
      _memcpy((void *)(lVar12 + sVar9),local_48 + 1,sVar10);
      *param_2 = *param_2 + sVar10;
      *(int *)(param_2 + 1) = (int)param_2[1] - iVar8;
      FUN_1008e3970("","etrace",0,"WARNING: eTrace buffer overlow detected!");
      uVar3 = *(uint *)(param_2 + 1);
      pvVar13 = (void *)*param_2;
    }
    local_48[2] = 0;
    sVar9 = (size_t)uVar3;
    if (8 < uVar3) {
      sVar9 = 8;
    }
    puVar2 = local_48 + 2;
    _memcpy(pvVar13,puVar2,sVar9);
    lVar12 = *param_2;
    *param_2 = (long)(lVar12 + sVar9);
    uVar3 = *(uint *)(param_2 + 1);
    *(int *)(param_2 + 1) = (int)(uVar3 - sVar9);
    sVar10 = uVar3 - sVar9 & 0xffffffff;
    if (8 < sVar10) {
      sVar10 = 8;
    }
    _memcpy((void *)(lVar12 + sVar9),puVar2,sVar10);
    lVar12 = *param_2;
    *param_2 = (long)(lVar12 + sVar10);
    uVar3 = *(uint *)(param_2 + 1);
    iVar4 = (int)(uVar3 - sVar10);
    *(int *)(param_2 + 1) = iVar4;
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar5 = uVar3 - sVar10 & 0xffffffff;
    sVar9 = 8;
    if (uVar5 < 9) {
      sVar9 = uVar5;
    }
    iVar8 = 8;
    if (uVar5 < 9) {
      iVar8 = iVar4;
    }
    _memcpy((void *)(lVar12 + sVar10),puVar2,sVar9);
    *param_2 = *param_2 + sVar9;
    *(int *)(param_2 + 1) = (int)param_2[1] - iVar8;
    uVar7 = 1;
  }
  return uVar7;
}

