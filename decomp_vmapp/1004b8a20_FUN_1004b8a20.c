
void FUN_1004b8a20(long param_1,long param_2,long param_3,long param_4,long *param_5,
                  undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((*(char *)(param_2 + 0x20) != '\0') &&
     ((((*(uint *)(param_4 + 0x10) ^ *(uint *)(param_2 + 0x48)) & 0x20) != 0 ||
      ((*param_5 != 0) != (*(long *)(param_2 + 0x70) != 0))))) {
    *(undefined1 *)(param_2 + 0x21) = 1;
  }
  uVar8 = *(uint *)(param_4 + 0x10) >> 5 & 1;
  if (((*(uint *)(param_2 + 0x48) >> 5 & 1) != uVar8) && (uVar8 == 0)) {
    FUN_1004bf6a0(param_1 + 0x1030,param_4 + 0x20);
    if (*(void **)(param_2 + 0x70) != (void *)0x0) {
      _free(*(void **)(param_2 + 0x70));
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined4 *)(param_2 + 0x78) = 0;
      *(undefined1 *)(param_2 + 0x7c) = 0;
    }
  }
  uVar8 = *(uint *)(param_4 + 0x10);
  *(uint *)(param_2 + 0x48) = uVar8 & 0x20 | *(uint *)(param_2 + 0x48) & 0xffffffdf;
  if (((uVar8 & 0x20) != 0) && (*param_5 != 0)) {
    if ((*(uint *)(param_5 + 2) & 8) == 0) {
      lVar9 = *(long *)(param_2 + 0x70);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0xfffffffd | *(uint *)(param_5 + 2) & 2;
        *(undefined1 *)(*(long *)(param_2 + 0x70) + 0xf) = *(undefined1 *)((long)param_5 + 0x17);
        *(undefined1 *)(param_2 + 0x7c) = 1;
        FUN_1004be6c0();
      }
    }
    else {
      lVar9 = FUN_1002a6120(*param_5,1,0);
      if (lVar9 == 0) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Bitmap data is NULL in paged request");
        }
      }
      else {
        iVar6 = *(int *)(lVar9 + 8);
        uVar8 = iVar6 + 0x3ffU >> 10;
        pvVar7 = *(void **)(param_2 + 0x70);
        if (uVar8 != *(int *)(param_2 + 0x78) + 0x3ffU >> 10) {
          _free(pvVar7);
          uVar8 = uVar8 << 10;
          pvVar7 = _malloc((ulong)uVar8);
          *(void **)(param_2 + 0x70) = pvVar7;
          if (pvVar7 == (void *)0x0) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                          "Failed to allocate memory for window bitmap (%d bytes)",(ulong)uVar8);
            *(undefined4 *)(param_2 + 0x78) = 0;
            *(undefined1 *)(param_2 + 0x7c) = 0;
            goto LAB_1004b8c4a;
          }
          *(uint *)(param_2 + 0x78) = uVar8;
          iVar6 = *(int *)(lVar9 + 8);
        }
        FUN_1002a5990(lVar9,0,pvVar7,iVar6);
        plVar3 = *(long **)(param_2 + 0x70);
        plVar3[3] = param_5[4];
        plVar3[2] = param_5[3];
        lVar9 = param_5[1];
        plVar3[1] = param_5[2];
        *plVar3 = lVar9;
        *(undefined1 *)(param_2 + 0x7c) = 1;
        if (*(char *)(param_2 + 0x20) == '\0') {
          FUN_1004be520(*(undefined8 *)(param_2 + 0x70));
        }
      }
    }
  }
LAB_1004b8c4a:
  uVar5 = *(uint *)(param_4 + 0x10) & 0x40;
  uVar8 = *(uint *)(param_2 + 0x48);
  *(uint *)(param_2 + 0x48) = uVar8 & 0xffffffbf | uVar5;
  uVar2 = *(uint *)(param_4 + 0x10);
  *(uint *)(param_2 + 0x48) = uVar2 & 1 | uVar8 & 0xffffffbe | uVar5;
  if ((uVar2 & 1) == 0) {
    piVar1 = (int *)(param_2 + 0x58);
    iVar6 = _memcmp(piVar1,(undefined8 *)(param_4 + 0x20),0x10);
    if (iVar6 != 0) {
      local_40 = *(undefined8 *)piVar1;
      local_38 = *(undefined8 *)(param_2 + 0x60);
      uVar4 = *(undefined8 *)(param_4 + 0x20);
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)piVar1 = uVar4;
      if ((*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) == 0) ||
         (*(char *)(param_1 + 0x1050) != '\0')) {
        FUN_1004bf6a0(param_1 + 0x1030,&local_40);
        FUN_1004bf6a0(param_1 + 0x1030,piVar1);
      }
      if (((((int)local_40 == *piVar1) && (local_40._4_4_ == *(int *)(param_2 + 0x5c))) ||
          ((int)local_38 - (int)local_40 != *(int *)(param_2 + 0x60) - *piVar1)) ||
         (local_38._4_4_ - local_40._4_4_ != *(int *)(param_2 + 100) - *(int *)(param_2 + 0x5c))) {
        *(undefined4 *)(param_2 + 0x28) = 2;
        *(undefined4 *)(param_2 + 0x2c) = param_6;
        if (*(char *)(param_2 + 0x20) != '\0') {
          *(undefined1 *)(param_2 + 0x21) = 1;
        }
      }
    }
    if ((*(byte *)(param_3 + 4) & 2) != 0) {
      uVar8 = *(uint *)(param_3 + 8);
      if ((ulong)uVar8 == 0) {
        _free(*(void **)(param_2 + 0x68));
        *(undefined8 *)(param_2 + 0x68) = 0;
      }
      else {
        lVar9 = (ulong)uVar8 * 0x10 + 0xff;
        pvVar7 = *(void **)(param_2 + 0x68);
        if ((int)((ulong)lVar9 >> 8) != (int)((ulong)*(uint *)(param_2 + 0x4c) * 0x10 + 0xff >> 8))
        {
          _free(pvVar7);
          uVar10 = (ulong)((uint)lVar9 & 0xffffff00);
          pvVar7 = _malloc(uVar10);
          *(void **)(param_2 + 0x68) = pvVar7;
          if (pvVar7 == (void *)0x0) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                          "Failed to allocate memory for window shape (%d bytes)",uVar10);
            *(undefined4 *)(param_2 + 0x4c) = 0;
            return;
          }
          uVar8 = *(uint *)(param_3 + 8);
        }
        _memcpy(pvVar7,(void *)(param_4 + 0x30),(ulong)uVar8 << 4);
      }
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_3 + 8);
    }
  }
  return;
}

