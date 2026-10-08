
undefined1 * FUN_100bd7440(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ushort *puVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  undefined8 uVar14;
  long local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  
  if ((param_1[0x71] == 0x300) && (*(int *)(*(long *)(param_1 + 0x20) + 0x4a4) == 0)) {
    return param_2;
  }
  local_38 = param_2 + 2;
  if (param_3 <= local_38) {
    return (undefined1 *)0x0;
  }
  if (*(char **)(param_1 + 0x78) != (char *)0x0) {
    lVar12 = (long)param_3 - (long)local_38;
    if (lVar12 < 9) {
      return (undefined1 *)0x0;
    }
    sVar7 = _strlen(*(char **)(param_1 + 0x78));
    if (lVar12 - 9U < sVar7) {
      return (undefined1 *)0x0;
    }
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = (char)(sVar7 + 5 >> 8);
    param_2[5] = (char)(sVar7 + 5);
    param_2[6] = (char)(sVar7 + 3 >> 8);
    param_2[7] = (char)(sVar7 + 3);
    param_2[8] = 0;
    param_2[9] = (char)(sVar7 >> 8);
    param_2[10] = (char)sVar7;
    _memcpy(param_2 + 0xb,*(void **)(param_1 + 0x78),sVar7);
    local_38 = param_2 + sVar7 + 0xb;
  }
  if (param_1[0xa9] == 0) {
LAB_100bd75b2:
    puVar10 = local_38;
    if (*(char **)(param_1 + 0xb2) != (char *)0x0) {
      sVar7 = _strlen(*(char **)(param_1 + 0xb2));
      iVar4 = (int)sVar7;
      if ((0xff < iVar4) || (iVar4 == 0)) {
        uVar14 = 0x1be;
        goto LAB_100bd7710;
      }
      sVar13 = (size_t)iVar4;
      if ((long)(param_3 + (-5 - (long)puVar10)) < (long)sVar13) {
        return (undefined1 *)0x0;
      }
      *puVar10 = 0;
      local_38[1] = 0xc;
      local_38[2] = (char)((uint)(iVar4 + 1) >> 8);
      local_38[3] = (char)(iVar4 + 1);
      puVar10 = local_38 + 5;
      local_38[4] = (char)sVar7;
      local_38 = puVar10;
      _memcpy(puVar10,*(void **)(param_1 + 0xb2),sVar13);
      local_38 = local_38 + sVar13;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      if ((long)param_3 - (long)local_38 < 5) {
        return (undefined1 *)0x0;
      }
      if (((long)param_3 - (long)local_38) - 5U < *(ulong *)(param_1 + 0x86)) {
        return (undefined1 *)0x0;
      }
      if (0xff < *(ulong *)(param_1 + 0x86)) {
        uVar14 = 0x1e0;
        goto LAB_100bd7710;
      }
      *local_38 = 0;
      local_38[1] = 0xb;
      local_38[2] = (char)((uint)(param_1[0x86] + 1) >> 8);
      local_38[3] = (char)param_1[0x86] + '\x01';
      puVar10 = local_38 + 5;
      local_38[4] = (char)param_1[0x86];
      local_38 = puVar10;
      _memcpy(puVar10,*(void **)(param_1 + 0x88),*(size_t *)(param_1 + 0x86));
      local_38 = local_38 + *(long *)(param_1 + 0x86);
    }
    if (*(long *)(param_1 + 0x8c) != 0) {
      if ((long)param_3 - (long)local_38 < 6) {
        return (undefined1 *)0x0;
      }
      if (((long)param_3 - (long)local_38) - 6U < *(ulong *)(param_1 + 0x8a)) {
        return (undefined1 *)0x0;
      }
      if (0xfffc < *(ulong *)(param_1 + 0x8a)) {
        uVar14 = 0x1f6;
        goto LAB_100bd7710;
      }
      *local_38 = 0;
      local_38[1] = 10;
      local_38[2] = (char)((uint)(param_1[0x8a] + 2) >> 8);
      local_38[3] = (char)param_1[0x8a] + '\x02';
      local_38[4] = *(undefined1 *)((long)param_1 + 0x229);
      local_38[5] = (char)param_1[0x8a];
      local_38 = local_38 + 6;
      _memcpy(local_38,*(void **)(param_1 + 0x8c),*(size_t *)(param_1 + 0x8a));
      local_38 = local_38 + *(long *)(param_1 + 0x8a);
    }
    uVar8 = FUN_100be4680(param_1,0x20,0);
    if ((uVar8 & 0x4000) == 0) {
      lVar12 = *(long *)(param_1 + 0x4c);
      if (param_1[0xf] == 0) {
        if (lVar12 == 0) goto LAB_100bd7942;
        if (*(long *)(lVar12 + 0x140) == 0) goto LAB_100bd78d0;
        uVar6 = *(uint *)(lVar12 + 0x148);
LAB_100bd7939:
        if (uVar6 == 0) goto LAB_100bd7942;
        bVar2 = false;
      }
      else {
        if (lVar12 != 0) {
LAB_100bd78d0:
          puVar1 = *(ushort **)(param_1 + 0x92);
          if ((puVar1 != (ushort *)0x0) && (*(long *)(puVar1 + 4) != 0)) {
            uVar8 = (ulong)*puVar1;
            uVar6 = (uint)*puVar1;
            pvVar9 = (void *)FUN_100bf3540(uVar8,"t1_lib.c",0x20b);
            *(void **)(*(long *)(param_1 + 0x4c) + 0x140) = pvVar9;
            if (pvVar9 == (void *)0x0) {
              return (undefined1 *)0x0;
            }
            _memcpy(pvVar9,*(void **)(*(long *)(param_1 + 0x92) + 8),uVar8);
            *(ulong *)(*(long *)(param_1 + 0x4c) + 0x148) = uVar8;
            goto LAB_100bd7939;
          }
        }
LAB_100bd7942:
        uVar6 = 0;
        bVar2 = true;
        if ((*(long *)(param_1 + 0x92) != 0) && (*(long *)(*(long *)(param_1 + 0x92) + 8) == 0))
        goto LAB_100bd79c8;
      }
      sVar7 = (size_t)(int)uVar6;
      if ((long)(param_3 + (-4 - (long)local_38)) < (long)sVar7) {
        return (undefined1 *)0x0;
      }
      *local_38 = 0;
      local_38[1] = 0x23;
      local_38[2] = (char)(uVar6 >> 8);
      local_38[3] = (char)uVar6;
      local_38 = local_38 + 4;
      if (!bVar2) {
        _memcpy(local_38,*(void **)(*(long *)(param_1 + 0x4c) + 0x140),sVar7);
        local_38 = local_38 + sVar7;
      }
    }
LAB_100bd79c8:
    if ((0x302 < param_1[0x71]) && ((param_1[0x71] & 0xffffff00U) == 0x300)) {
      if ((ulong)((long)param_3 - (long)local_38) < 0x24) {
        return (undefined1 *)0x0;
      }
      *local_38 = 0;
      local_38[1] = 0xd;
      local_38[2] = 0;
      local_38[3] = 0x20;
      local_38[4] = 0;
      local_38[5] = 0x1e;
      *(undefined2 *)(local_38 + 0x22) = DAT_102302fac;
      *(undefined4 *)(local_38 + 0x1e) = DAT_102302fa8;
      *(undefined8 *)(local_38 + 0x16) = DAT_102302fa0;
      *(undefined8 *)(local_38 + 0xe) = DAT_102302f98;
      *(undefined8 *)(local_38 + 6) = DAT_102302f90;
      local_38 = local_38 + 0x24;
    }
    if ((param_1[0x7b] == 1) && (*param_1 != 0xfeff)) {
      iVar4 = FUN_100c60800(*(undefined8 *)(param_1 + 0x7e));
      local_50 = 0;
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          uVar14 = FUN_100c60820(*(undefined8 *)(param_1 + 0x7e),iVar4);
          iVar5 = FUN_100cb47c0(uVar14,0);
          if (iVar5 < 1) {
            return (undefined1 *)0x0;
          }
          local_50 = local_50 + 2 + (long)iVar5;
          iVar4 = iVar4 + 1;
          iVar5 = FUN_100c60800(*(undefined8 *)(param_1 + 0x7e));
        } while (iVar4 < iVar5);
      }
      lVar12 = 0;
      if (*(long *)(param_1 + 0x80) != 0) {
        iVar4 = FUN_100c86440(*(long *)(param_1 + 0x80),0);
        if (iVar4 < 0) {
          return (undefined1 *)0x0;
        }
        lVar12 = (long)iVar4;
      }
      if ((long)(param_3 + ((-7 - lVar12) - (long)local_38)) < local_50) {
        return (undefined1 *)0x0;
      }
      *local_38 = 0;
      local_38[1] = 5;
      iVar4 = 0;
      if (0xfff0 < lVar12 + local_50) {
        return (undefined1 *)0x0;
      }
      lVar11 = lVar12 + local_50 + 5;
      local_38[2] = (char)((ulong)lVar11 >> 8);
      local_38[3] = (char)lVar11;
      local_38[4] = 1;
      local_38[5] = (char)((ulong)local_50 >> 8);
      local_38[6] = (char)local_50;
      local_38 = local_38 + 7;
      iVar5 = FUN_100c60800(*(undefined8 *)(param_1 + 0x7e));
      if (0 < iVar5) {
        do {
          puVar10 = local_38;
          uVar14 = FUN_100c60820(*(undefined8 *)(param_1 + 0x7e),iVar4);
          local_38 = local_38 + 2;
          uVar3 = FUN_100cb47c0(uVar14,&local_38);
          *puVar10 = (char)((ushort)uVar3 >> 8);
          puVar10[1] = (char)uVar3;
          iVar4 = iVar4 + 1;
          iVar5 = FUN_100c60800(*(undefined8 *)(param_1 + 0x7e));
        } while (iVar4 < iVar5);
      }
      *local_38 = (char)((ulong)lVar12 >> 8);
      local_38[1] = (char)lVar12;
      local_38 = local_38 + 2;
      if (0 < lVar12) {
        FUN_100c86440(*(undefined8 *)(param_1 + 0x80),&local_38);
      }
    }
    if ((long)param_3 - (long)local_38 < 5) {
      return (undefined1 *)0x0;
    }
    *local_38 = 0;
    local_38[1] = 0xf;
    local_38[2] = 0;
    local_38[3] = 1;
    puVar10 = local_38 + 5;
    local_38[4] = (*(byte *)(param_1 + 0xa6) >> 2 & 1) + 1;
    if ((*(long *)(*(long *)(param_1 + 0x5c) + 0x2c8) != 0) &&
       (*(int *)(*(long *)(param_1 + 0x20) + 0x310) == 0)) {
      if ((long)param_3 - (long)puVar10 < 4) {
        return (undefined1 *)0x0;
      }
      *puVar10 = 0x33;
      local_38[6] = 0x74;
      local_38[7] = 0;
      local_38[8] = 0;
      puVar10 = local_38 + 9;
    }
    local_38 = puVar10;
    if ((**(int **)(param_1 + 2) == 0xfeff) && (lVar12 = FUN_100be2650(param_1), lVar12 != 0)) {
      FUN_100be26a0(param_1,0,&local_40,0);
      if ((long)(param_3 + (-4 - (long)local_38)) < (long)local_40) {
        return (undefined1 *)0x0;
      }
      *local_38 = 0;
      local_38[1] = 0xe;
      local_38[2] = local_40._1_1_;
      local_38[3] = (undefined1)local_40;
      local_38 = local_38 + 4;
      iVar4 = FUN_100be26a0(param_1,local_38,&local_40,local_40);
      if (iVar4 != 0) {
        uVar14 = 0x296;
        goto LAB_100bd7710;
      }
      local_38 = local_38 + local_40;
    }
    if ((*(byte *)(param_1 + 0x6a) & 0x10) != 0) {
      uVar6 = (int)local_38 - *(int *)(*(long *)(param_1 + 0x14) + 8);
      if (param_1[0x12] == 0x1210) {
        uVar6 = uVar6 - 5;
      }
      if ((uVar6 & 0xffffff00) == 0x100) {
        iVar5 = 0x1fc - uVar6;
        *local_38 = 0;
        local_38[1] = 0x15;
        iVar4 = 0;
        if (3 < (int)(0x200 - uVar6)) {
          iVar4 = iVar5;
        }
        local_38[2] = (char)((uint)iVar4 >> 8);
        if ((int)(0x200 - uVar6) < 4) {
          iVar5 = 0;
        }
        local_38[3] = (char)iVar5;
        local_38 = local_38 + 4;
        ___bzero(local_38,(long)iVar4);
        local_38 = local_38 + iVar4;
      }
    }
    puVar10 = local_38 + (0xfffffffe - (long)param_2);
    if ((int)puVar10 != 0) {
      *param_2 = (char)((ulong)puVar10 >> 8);
      param_2[1] = (char)puVar10;
      param_2 = local_38;
    }
  }
  else {
    iVar4 = FUN_100bf2080(param_1,0,&local_3c,0);
    if (iVar4 == 0) {
      uVar14 = 0x1a6;
    }
    else {
      if ((long)(param_3 + (-4 - (long)local_38)) < (long)local_3c) {
        return (undefined1 *)0x0;
      }
      *local_38 = 0xff;
      local_38[1] = 1;
      local_38[2] = local_3c._1_1_;
      local_38[3] = (undefined1)local_3c;
      local_38 = local_38 + 4;
      iVar4 = FUN_100bf2080(param_1,local_38,&local_3c);
      if (iVar4 != 0) {
        local_38 = local_38 + local_3c;
        goto LAB_100bd75b2;
      }
      uVar14 = 0x1b1;
    }
LAB_100bd7710:
    FUN_100c62ee0(0x14,0x115,0x44,"t1_lib.c",uVar14);
    param_2 = (undefined1 *)0x0;
  }
  return param_2;
}

