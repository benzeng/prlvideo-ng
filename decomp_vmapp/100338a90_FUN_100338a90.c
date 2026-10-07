
uint * FUN_100338a90(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(param_2 + 4);
  uVar3 = *(ushort *)(param_2 + 2);
  if (uVar3 != 0) {
    iVar7 = 0;
    do {
      if (puVar8 < *(uint **)(param_1 + 0xbbf8)) {
LAB_100338b4d:
        puVar4 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar4 = puVar8;
        *(undefined4 *)(puVar4 + 1) = 8;
LAB_100338b73:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
      }
      if (*(uint **)(param_1 + 0xbc00) < puVar8 + 2) goto LAB_100338b4d;
      uVar1 = puVar8[1];
      iVar6 = uVar1 * 4 + 8;
      if (*(uint **)(param_1 + 0xbc00) < (uint *)((long)iVar6 + (long)puVar8)) {
        puVar4 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar4 = puVar8;
        *(int *)(puVar4 + 1) = iVar6;
        goto LAB_100338b73;
      }
      uVar2 = *puVar8;
      if (uVar2 < 0x10) {
        uVar5 = uVar1;
        if (0x10 < uVar2 + uVar1) {
          uVar5 = 0x10 - uVar2;
        }
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x78))
                  (*(long **)(param_1 + 0xbbb8),uVar2,uVar5);
        uVar3 = *(ushort *)(param_2 + 2);
      }
      puVar8 = (uint *)((long)(int)(uVar1 * 4) + 8 + (long)puVar8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)uVar3);
  }
  return puVar8;
}

