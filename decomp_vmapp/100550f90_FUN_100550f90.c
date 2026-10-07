
bool FUN_100550f90(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  ushort *local_40;
  ushort *local_38;
  ushort *local_30;
  int local_28;
  char cStack_24;
  undefined3 uStack_23;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 == (void *)0x0) {
    uVar9 = (ulong)*(byte *)(param_1 + 0x10);
    pvVar5 = operator_new__(uVar9 * 8 + 8,(nothrow_t *)PTR_nothrow_100ba21c8);
    *(void **)(param_1 + 0x20) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return false;
    }
  }
  else {
    uVar9 = (ulong)*(byte *)(param_1 + 0x10);
  }
  ___bzero(pvVar5,uVar9 * 8 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  local_40 = *(ushort **)(param_1 + 0x18);
  local_28 = *(int *)(param_1 + 0xc);
  local_30 = (ushort *)((long)local_40 + (ulong)*(uint *)(param_1 + 8));
  _cStack_24 = CONCAT31(uStack_23,1);
  if ((ulong)*(uint *)(param_1 + 8) == 0) {
    bVar10 = false;
  }
  else {
    local_38 = local_40;
    cVar4 = FUN_100551730(&local_40);
    if (cVar4 == '\0') {
      bVar10 = false;
    }
    else {
      do {
        uVar1 = *local_38;
        if (uVar1 == 0) {
          uVar6 = *(int *)(local_38 + 2) - 1;
          if (*(byte *)(param_1 + 0x10) < uVar6) {
            uVar6 = (uint)*(byte *)(param_1 + 0x10);
          }
          lVar8 = (long)(int)uVar6;
          lVar2 = *(long *)(param_1 + 0x20);
          lVar3 = *(long *)(lVar2 + lVar8 * 8);
          uVar7 = 0;
          if (lVar3 != 0) {
            *(ushort **)(lVar3 + 8) = local_38;
            uVar7 = *(undefined8 *)(lVar2 + lVar8 * 8);
          }
          *(undefined8 *)(local_38 + 8) = uVar7;
          local_38[4] = 0;
          local_38[5] = 0;
          local_38[6] = 0;
          local_38[7] = 0;
          *(ushort **)(lVar2 + lVar8 * 8) = local_38;
          if (*(int *)(param_1 + 0x28) < (int)uVar6) {
            *(uint *)(param_1 + 0x28) = uVar6;
          }
        }
        if (cStack_24 == '\0') {
          return false;
        }
        if (local_30 <= local_38) goto LAB_1005510f9;
        if (uVar1 == 0) {
          uVar6 = local_28 * *(int *)(local_38 + 2);
        }
        else {
          uVar6 = -local_28 & uVar1 + 3 + local_28;
        }
        local_38 = (ushort *)((long)local_38 + (ulong)uVar6);
        if (local_30 <= local_38) goto LAB_1005510f5;
        cVar4 = FUN_100551730(&local_40);
      } while (cVar4 != '\0');
LAB_1005510f5:
      if (cStack_24 == '\0') {
        bVar10 = false;
      }
      else {
LAB_1005510f9:
        bVar10 = local_30 <= local_38;
      }
    }
  }
  return bVar10;
}

