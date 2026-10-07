
undefined8 FUN_1002d3120(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  uint uVar12;
  
  uVar2 = *(uint *)(param_4 + 0x104);
  uVar3 = *(uint *)(param_2 + 1);
  uVar8 = 0;
  do {
    lVar5 = param_3[3];
    if (lVar5 == 0) {
      lVar5 = FUN_1002c8da0(0);
      if (lVar5 == 0) {
        *(undefined1 *)((long)param_3 + 0x17) = 4;
        return 0;
      }
      *(undefined4 *)(lVar5 + 0x448) = *(undefined4 *)(*(long *)(param_4 + 0xc0) + 0x1c);
      *(int *)(lVar5 + 0x450) = param_5;
      *(uint *)(lVar5 + 0x44c) = (uint)*(byte *)(param_4 + 0xca);
      *(long *)(lVar5 + 0x458) = param_4;
      *(uint *)(lVar5 + 0x460) = *(byte *)(param_4 + 0xcb) & 3;
      *(uint *)(lVar5 + 0x444) = uVar8;
      param_3[3] = lVar5;
    }
    lVar4 = *param_3;
    uVar12 = *(uint *)(lVar5 + 0x430);
    if ((lVar4 != -1) && (uVar12 < 0x84)) {
      *(uint *)(lVar5 + 0x430) = uVar12 + 1;
      *(long *)(lVar5 + 0x10 + (ulong)uVar12 * 8) = lVar4;
    }
    uVar9 = (uVar3 & 0x1ffff) - uVar8;
    uVar12 = *(uint *)(lVar5 + 0x43c);
    iVar7 = *(uint *)(lVar5 + 0x438) - *(uint *)(lVar5 + 0x438) % uVar2;
    uVar10 = iVar7 - uVar12;
    if (uVar9 < uVar10) {
      uVar10 = uVar9;
    }
    sVar11 = (size_t)uVar10;
    if (param_5 != 0x69) {
      pvVar1 = (void *)(lVar5 + 0x4d8 + (ulong)uVar12);
      if ((*(byte *)((long)param_2 + 0xc) & 0x40) == 0) {
        if ((uVar10 != 0) && ((ulong)uVar8 + *param_2 != 0)) {
          FUN_10008cba0(DAT_1011c3688,pvVar1,(ulong)uVar8 + *param_2,sVar11);
          uVar12 = *(uint *)(lVar5 + 0x43c);
        }
      }
      else {
        if (7 < uVar10) {
          sVar11 = 8;
        }
        _memcpy(pvVar1,param_2 + uVar8,sVar11);
      }
    }
    *(uint *)(lVar5 + 0x43c) = uVar12 + uVar10;
    uVar8 = uVar8 + uVar10;
    if (((*(int *)(lVar5 + 0x430) == 0x84) || (uVar12 + uVar10 == iVar7)) ||
       ((uVar10 == uVar9 && ((*(uint *)((long)param_2 + 0xc) & 0x10) == 0)))) {
      param_3[3] = 0;
      FUN_1002c8590(param_1,lVar5);
    }
  } while (uVar8 < (uVar3 & 0x1ffff));
  if (((*(byte *)((long)param_2 + 0xc) & 0x10) != 0) ||
     (uVar6 = 0x8000, *(int *)(lVar5 + 0x464) == 0)) {
    uVar6 = 0x4800;
  }
  return uVar6;
}

