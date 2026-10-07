
undefined8 FUN_1002e2ad0(long param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  int iVar16;
  long lVar17;
  int local_4c;
  int local_3c;
  
  pvVar5 = operator_new(0x5fd,(nothrow_t *)PTR_nothrow_100ba21c8);
  uVar7 = 0;
  if (pvVar5 != (void *)0x0) {
    _memcpy(pvVar5,&DAT_100b38cae,0x5fd);
    puVar10 = &DAT_100b38d33;
    iVar16 = 1;
    puVar14 = &DAT_100b38580;
    lVar17 = 1;
    local_3c = 0;
    local_4c = 0;
    iVar8 = 1;
    do {
      cVar3 = (**(code **)(**(long **)(param_1 + 0x88) + 0x60))
                        (*(long **)(param_1 + 0x88),*(undefined2 *)((long)puVar10 + 5),
                         *(undefined2 *)((long)puVar10 + 7));
      if (cVar3 == '\0') {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[UVC] Unsupported format: %hu x %hu",
                        *(undefined2 *)((long)puVar10 + 5),*(undefined2 *)((long)puVar10 + 7));
        }
        iVar8 = iVar8 - (uint)(lVar17 <= iVar8);
        iVar2 = iVar16;
      }
      else {
        if ((int)lVar17 != iVar16) {
          lVar6 = *(long *)(param_1 + 0x90);
          lVar9 = (long)local_3c * 0x34;
          *(undefined4 *)(lVar6 + 0x30 + lVar9) = *(undefined4 *)(puVar14 + 6);
          *(undefined8 *)(lVar6 + 0x28 + lVar9) = puVar14[5];
          *(undefined8 *)(lVar6 + 0x20 + lVar9) = puVar14[4];
          *(undefined8 *)(lVar6 + 0x18 + lVar9) = puVar14[3];
          *(undefined8 *)(lVar6 + 0x10 + lVar9) = puVar14[2];
          uVar7 = *puVar14;
          *(undefined8 *)(lVar6 + 8 + lVar9) = puVar14[1];
          *(undefined8 *)(lVar6 + lVar9) = uVar7;
          lVar6 = *(long *)(param_1 + 0x90);
          uVar15 = (undefined1)iVar16;
          *(undefined1 *)(lVar6 + 3 + lVar9) = uVar15;
          *(undefined1 *)(lVar6 + 0x1d + lVar9) = uVar15;
          if (iVar16 < 0x24) {
            lVar6 = (long)local_3c * 0x26;
            *(undefined2 *)((long)pvVar5 + lVar6 + 0xa9) = *(undefined2 *)((long)puVar10 + 0x24);
            *(undefined4 *)((long)pvVar5 + lVar6 + 0xa5) = *(undefined4 *)(puVar10 + 4);
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x9d) = puVar10[3];
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x95) = puVar10[2];
            uVar7 = *puVar10;
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x8d) = puVar10[1];
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x85) = uVar7;
            *(undefined1 *)((long)pvVar5 + lVar6 + 0x88) = uVar15;
            local_4c = iVar16;
          }
        }
        iVar2 = iVar16 + 1;
        local_3c = iVar16;
      }
      iVar16 = iVar2;
      lVar17 = lVar17 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 0x26);
      puVar14 = (undefined8 *)((long)puVar14 + 0x34);
    } while (lVar17 != 0x24);
    if (local_3c == 0) {
      operator_delete(pvVar5);
      uVar7 = 0;
    }
    else {
      uVar15 = 1;
      if (iVar8 != 0) {
        uVar15 = (undefined1)iVar8;
      }
      *(undefined1 *)((long)pvVar5 + 0x80) = uVar15;
      if ((local_4c == 0) && (local_4c = 0x23, local_3c < 0x24)) {
        local_4c = local_3c;
      }
      *(char *)((long)pvVar5 + 0x6e) = (char)local_4c;
      *(short *)((long)pvVar5 + 0x60) =
           *(short *)((long)pvVar5 + 0x60) + (short)(0x23 - local_4c) * -0x26;
      uVar4 = (uint)*(ushort *)((long)pvVar5 + 2) + (0x23 - local_4c) * -0x26;
      *(short *)((long)pvVar5 + 2) = (short)uVar4;
      if (local_4c != 0x23) {
        _memcpy((void *)((long)pvVar5 + (long)local_4c * 0x26 + 0x85),PTR_DAT_100ba2628 + 0x5b7,0x46
               );
        uVar4 = (uint)*(ushort *)((long)pvVar5 + 2);
      }
      _memcpy(*(void **)(*(long *)(param_1 + 0x28) + 0x10),pvVar5,(ulong)(uVar4 & 0xffff));
      *(ulong *)(*(long *)(param_1 + 0x28) + 0x18) = (ulong)*(ushort *)((long)pvVar5 + 2);
      uVar4 = FUN_1007da300("devices.uvc.slowdown",1);
      if (1 < uVar4) {
        lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
        bVar1 = *(byte *)(lVar17 + 0x6e);
        uVar13 = (uint)bVar1;
        if (bVar1 != 0) {
          puVar11 = (uint *)(*(long *)(param_1 + 0x90) + 0x30);
          piVar12 = (int *)(lVar17 + 0xa7);
          do {
            puVar11[-0xb] = puVar11[-0xb] * uVar4;
            *(uint *)((long)puVar11 + -0x12) = *(int *)((long)puVar11 + -0x12) * uVar4;
            *(uint *)((long)puVar11 + -0x1a) = *(uint *)((long)puVar11 + -0x1a) / uVar4;
            *puVar11 = *puVar11 / uVar4;
            *(uint *)((long)piVar12 + -0x19) = *(uint *)((long)piVar12 + -0x19) / uVar4;
            *(uint *)((long)piVar12 + -0x15) = *(uint *)((long)piVar12 + -0x15) / uVar4;
            *(uint *)((long)piVar12 + -0xd) = *(int *)((long)piVar12 + -0xd) * uVar4;
            piVar12[-2] = piVar12[-2] * uVar4;
            piVar12[-1] = piVar12[-1] * uVar4;
            *piVar12 = *piVar12 * uVar4;
            puVar11 = puVar11 + 0xd;
            piVar12 = (int *)((long)piVar12 + 0x26);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      operator_delete(pvVar5);
      uVar7 = 1;
    }
  }
  return uVar7;
}

