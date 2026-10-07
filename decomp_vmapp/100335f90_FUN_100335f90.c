
/* WARNING: Removing unreachable block (ram,0x0001003362ab) */
/* WARNING: Removing unreachable block (ram,0x0001003362b7) */
/* WARNING: Removing unreachable block (ram,0x0001003362cf) */

uint * FUN_100335f90(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined1 local_90 [32];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  uint local_34;
  
  puVar14 = (uint *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    plVar1 = (long *)(param_1 + 0xbb40);
    puVar8 = (undefined8 *)(param_1 + 0xbb38);
    iVar9 = 0;
    do {
      if (puVar14 < *(uint **)(param_1 + 0xbbf8)) {
LAB_100336361:
        puVar8 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar8 = puVar14;
        *(undefined4 *)(puVar8 + 1) = 0xc;
LAB_1003363c6:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar8,&PTR_vtable_101117a68,0);
      }
      if (*(uint **)(param_1 + 0xbc00) < puVar14 + 3) goto LAB_100336361;
      uVar2 = puVar14[1];
      uVar3 = puVar14[2];
      iVar13 = uVar3 + 0xc + uVar2;
      if (*(uint **)(param_1 + 0xbc00) < (uint *)((long)iVar13 + (long)puVar14)) {
        puVar8 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar8 = puVar14;
        *(int *)(puVar8 + 1) = iVar13;
        goto LAB_1003363c6;
      }
      if ((long *)*plVar1 != (long *)0x0) {
        plVar12 = (long *)*plVar1;
        plVar10 = plVar1;
        do {
          while (plVar11 = plVar12, *puVar14 <= *(uint *)(plVar11 + 4)) {
            plVar12 = (long *)*plVar11;
            plVar10 = plVar11;
            if ((long *)*plVar11 == (long *)0x0) goto LAB_100336063;
          }
          plVar5 = plVar11 + 1;
          plVar12 = (long *)*plVar5;
          plVar11 = plVar10;
        } while ((long *)*plVar5 != (long *)0x0);
LAB_100336063:
        if (((plVar11 != plVar1) && (*(uint *)(plVar11 + 4) <= *puVar14)) && (plVar11[5] != 0)) {
          FUN_100362670(*(undefined8 *)(param_1 + 48000));
          if (*(long **)(param_1 + 0xbb40) != (long *)0x0) {
            plVar12 = *(long **)(param_1 + 0xbb40);
            plVar10 = plVar1;
            do {
              while (plVar11 = plVar12, *puVar14 <= *(uint *)(plVar11 + 4)) {
                plVar12 = (long *)*plVar11;
                plVar10 = plVar11;
                if ((long *)*plVar11 == (long *)0x0) goto LAB_1003360f1;
              }
              plVar5 = plVar11 + 1;
              plVar11 = plVar10;
              plVar12 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
LAB_1003360f1:
            if ((plVar11 != plVar1) && (*(uint *)(plVar11 + 4) <= *puVar14)) {
              puVar7 = (undefined8 *)plVar11[5];
              if (puVar7 != (undefined8 *)0x0) {
                pvVar6 = (void *)*puVar7;
                if (pvVar6 != (void *)0x0) {
                  pvVar4 = (void *)puVar7[1];
                  if (pvVar4 != pvVar6) {
                    puVar7[1] = (~((long)pvVar4 + (-8 - (long)pvVar6)) & 0xfffffffffffffff8U) +
                                (long)pvVar4;
                  }
                  operator_delete(pvVar6);
                }
                operator_delete(puVar7);
              }
              plVar12 = plVar11;
              plVar10 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) {
                do {
                  plVar5 = (long *)plVar12[2];
                  bVar15 = (long *)*plVar5 != plVar12;
                  plVar12 = plVar5;
                } while (bVar15);
              }
              else {
                do {
                  plVar5 = plVar10;
                  plVar10 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
              if ((long *)*puVar8 == plVar11) {
                *puVar8 = plVar5;
              }
              *(long *)(param_1 + 0xbb48) = *(long *)(param_1 + 0xbb48) + -1;
              FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbb40),plVar11);
              operator_delete(plVar11);
            }
          }
        }
      }
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      local_70 = &local_68;
      local_60 = 0;
      local_68 = 0;
      FUN_100391130(local_90);
      iVar13 = FUN_100391180(local_90,puVar14 + 3,puVar14[1],&local_58,&local_70);
      if (iVar13 == 0) {
        local_34 = *puVar14;
        pvVar6 = operator_new(0x18);
        FUN_10033fbb0(pvVar6,&local_58);
        puVar7 = (undefined8 *)FUN_10033fab0(puVar8,&local_34);
        *puVar7 = pvVar6;
      }
      if (puVar14[2] != 0) {
        FUN_10033c310();
        FUN_10033c0b0(param_1,*puVar14,0,0);
      }
      FUN_100391170(local_90);
      FUN_10033fc80(&local_70,local_68);
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
      puVar14 = (uint *)((long)(int)(uVar3 + uVar2) + 0xc + (long)puVar14);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return puVar14;
}

