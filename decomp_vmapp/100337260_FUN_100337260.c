
uint * FUN_100337260(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(param_2 + 4);
  uVar4 = *(ushort *)(param_2 + 2);
  if (uVar4 != 0) {
    iVar7 = 0;
    do {
      if (puVar8 < *(uint **)(param_1 + 0xbbf8)) {
LAB_10033732c:
        puVar5 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar5 = puVar8;
        *(undefined4 *)(puVar5 + 1) = 8;
LAB_100337353:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar5,&PTR_vtable_101117a68,0);
      }
      if (*(uint **)(param_1 + 0xbc00) < puVar8 + 2) goto LAB_10033732c;
      uVar2 = puVar8[1];
      iVar1 = uVar2 * 0x10 + 8;
      if (*(uint **)(param_1 + 0xbc00) < (uint *)((long)iVar1 + (long)puVar8)) {
        puVar5 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar5 = puVar8;
        *(int *)(puVar5 + 1) = iVar1;
        goto LAB_100337353;
      }
      uVar3 = *puVar8;
      if (uVar3 < 0xe0) {
        uVar6 = uVar2;
        if (0xe0 < uVar3 + uVar2) {
          uVar6 = 0xe0 - uVar3;
        }
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x80))
                  (*(long **)(param_1 + 0xbbb8),uVar3 << 2,uVar6 << 2);
        uVar4 = *(ushort *)(param_2 + 2);
      }
      puVar8 = (uint *)((long)puVar8 + ((long)(int)(uVar2 * 0x10) | 8U));
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)uVar4);
  }
  return puVar8;
}

