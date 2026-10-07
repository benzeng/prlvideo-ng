
uint * FUN_100336960(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  puVar5 = (uint *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    puVar2 = *(uint **)(param_1 + 0xbbf8);
    iVar6 = 0;
    do {
      if ((puVar5 < puVar2) || (*(uint **)(param_1 + 0xbc00) < puVar5 + 2)) {
        puVar3 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar3 = puVar5;
        *(undefined4 *)(puVar3 + 1) = 8;
LAB_100336a5f:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
      }
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
      if (uVar7 < 0x100) {
        uVar4 = uVar1;
        if (0x100 < uVar7 + uVar1) {
          uVar4 = 0x100 - uVar7;
        }
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x68))
                  (*(long **)(param_1 + 0xbbb8),uVar7 << 2,uVar4 << 2);
        puVar2 = *(uint **)(param_1 + 0xbbf8);
      }
      uVar7 = uVar1 << 4 | 8;
      if ((puVar5 < puVar2) ||
         (*(ulong *)(param_1 + 0xbc00) < (ulong)((long)(int)uVar7 + (long)puVar5))) {
        puVar3 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar3 = puVar5;
        *(uint *)(puVar3 + 1) = uVar7;
        goto LAB_100336a5f;
      }
      puVar5 = (uint *)((long)puVar5 + ((long)(int)(uVar1 << 4) | 8U));
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return puVar5;
}

