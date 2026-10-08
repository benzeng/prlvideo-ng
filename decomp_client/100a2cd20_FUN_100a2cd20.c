
void FUN_100a2cd20(undefined8 *param_1)

{
  ushort *puVar1;
  long lVar2;
  void *pvVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  puVar1 = (ushort *)*param_1;
  lVar2 = param_1[1];
  uVar8 = (ulong)(lVar2 - (long)puVar1) >> 1;
  local_48 = (undefined1 *)0x0;
  puStack_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  iVar7 = (int)uVar8;
  if (iVar7 != 0) {
    if ((long)(uVar8 << 0x20) < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_48 = operator_new((long)iVar7);
    local_38 = local_48 + iVar7;
    lVar5 = -(long)iVar7;
    puStack_40 = local_48;
    do {
      *puStack_40 = 0;
      puStack_40 = puStack_40 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  if (0 < iVar7) {
    lVar5 = 0;
    if (((ulong)(lVar2 - (long)puVar1) >> 1 & 1) != 0) {
      uVar4 = 0x3f;
      if (*puVar1 < 0x100) {
        uVar4 = (undefined1)*puVar1;
      }
      *local_48 = uVar4;
      lVar5 = 1;
    }
    if (iVar7 != 1) {
      do {
        uVar4 = 0x3f;
        uVar6 = 0x3f;
        if (puVar1[lVar5] < 0x100) {
          uVar6 = (undefined1)puVar1[lVar5];
        }
        local_48[lVar5] = uVar6;
        if (puVar1[lVar5 + 1] < 0x100) {
          uVar4 = (undefined1)puVar1[lVar5 + 1];
        }
        local_48[lVar5 + 1] = uVar4;
        lVar5 = lVar5 + 2;
      } while (iVar7 != (int)lVar5);
    }
  }
  pvVar3 = (void *)*param_1;
  *param_1 = local_48;
  param_1[1] = puStack_40;
  param_1[2] = local_38;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return;
}

