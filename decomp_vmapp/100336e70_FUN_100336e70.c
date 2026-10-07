
uint * FUN_100336e70(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  uint *puVar11;
  undefined1 local_1b0 [380];
  undefined4 local_34;
  
  puVar11 = (uint *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    plVar2 = (long *)(param_1 + 0xbb28);
    iVar10 = 0;
    do {
      if (puVar11 < *(uint **)(param_1 + 0xbbf8)) {
LAB_100337018:
        puVar7 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar7 = puVar11;
        *(undefined4 *)(puVar7 + 1) = 8;
LAB_100337044:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar7,&PTR_vtable_101117a68,0);
      }
      if (*(uint **)(param_1 + 0xbc00) < puVar11 + 2) goto LAB_100337018;
      uVar3 = puVar11[1];
      if (*(uint **)(param_1 + 0xbc00) < (uint *)((long)(int)(uVar3 + 8) + (long)puVar11)) {
        puVar7 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar7 = puVar11;
        *(uint *)(puVar7 + 1) = uVar3 + 8;
        goto LAB_100337044;
      }
      if ((long *)*plVar2 != (long *)0x0) {
        plVar4 = (long *)*plVar2;
        plVar8 = plVar2;
        do {
          while (plVar9 = plVar4, *puVar11 <= *(uint *)(plVar9 + 4)) {
            plVar4 = (long *)*plVar9;
            plVar8 = plVar9;
            if ((long *)*plVar9 == (long *)0x0) goto LAB_100336f43;
          }
          plVar1 = plVar9 + 1;
          plVar4 = (long *)*plVar1;
          plVar9 = plVar8;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_100336f43:
        if (((plVar9 != plVar2) && (*(uint *)(plVar9 + 4) <= *puVar11)) && (plVar9[5] != 0)) {
          FUN_1003625d0(*(undefined8 *)(param_1 + 48000));
          FUN_10033c670(param_1,*puVar11);
        }
      }
      FUN_100351d00(local_1b0);
      iVar5 = FUN_10039f080(puVar11 + 2,puVar11[1] >> 2,local_1b0);
      if (iVar5 == 0) {
        pvVar6 = operator_new(0xf0);
        FUN_100351b60(pvVar6,*puVar11,local_1b0);
        local_34 = *(undefined4 *)((long)pvVar6 + 0x18);
        puVar7 = (undefined8 *)FUN_10033f7c0(param_1 + 0xbb20,&local_34);
        *puVar7 = pvVar6;
      }
      puVar11 = (uint *)((long)(int)puVar11[1] + 8 + (long)puVar11);
      FUN_100351ee0(local_1b0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return puVar11;
}

