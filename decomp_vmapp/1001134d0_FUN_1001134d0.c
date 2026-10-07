
void FUN_1001134d0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint *local_44;
  undefined4 local_3c;
  int local_38;
  
  uVar10 = (ulong)param_2;
  lVar2 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1158),0x84,0);
  uVar12 = *(uint *)(lVar2 + 0x2098 + uVar10 * 0x3024);
  uVar13 = (ulong)uVar12;
  uVar6 = uVar12 * 8 + 0x10;
  puVar3 = _malloc((ulong)uVar6);
  if (puVar3 == (uint *)0x0) {
    FUN_1008e3970("","vm",0,"[VMApiPmmHandleUnlockRequest] Memory allocation failed %u",uVar6);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_100408ff0(*(long *)(param_1 + 0x10) + 0x10b0,0x80000188,&local_68);
    FUN_10002d9d0(&local_68);
    FUN_1000a7d10(*(undefined8 *)(param_1 + 0x10),3);
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = uVar12;
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        uVar7 = (ulong)*(uint *)(uVar10 * 0x3024 + 0x20a4 + lVar2 + uVar11 * 4) << 0xc;
        uVar9 = uVar7 & 0xfffffe00000;
        lVar4 = FUN_10008c850(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),uVar9,0x200000);
        if (lVar4 == 0) {
          _free(puVar3);
          FUN_1008e3970("","vm",0,"API_PMM_UNLOCK_PAGE: invalid swap_addr 0x%llX, len %u",uVar9,
                        0x200000);
          uVar5 = ___cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar5,&PTR_vtable_10110d2c0,0);
        }
        *(ulong *)(puVar3 + uVar11 * 2 + 2) = lVar4 + (uVar7 & 0x1ff000);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
    local_3c = 0;
    local_38 = -1;
    local_50 = 0x810;
    local_48 = 0;
    local_4c = uVar6;
    local_44 = puVar3;
    iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_50,0x1c);
    if (iVar1 != 0 || local_38 != 0) {
      FUN_1008e3970("","vm",0,"IOCTL_PMM_UNLOCK_PAGE failed! %x");
    }
    if (uVar12 != 0) {
      puVar8 = (uint *)(uVar10 * 0x3024 + 0x20a4 + lVar2);
      do {
        FUN_10008c880(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),
                      ((ulong)*puVar8 & 0xfffffe00) << 0xc,0x200000);
        puVar8 = puVar8 + 1;
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulong)uVar12;
      } while (uVar12 != 0);
    }
    _free(puVar3);
  }
  return;
}

