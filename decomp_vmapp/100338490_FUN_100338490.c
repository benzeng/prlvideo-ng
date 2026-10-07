
undefined4 * FUN_100338490(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    uVar4 = 0;
    do {
      uVar1 = puVar3[1];
      if ((puVar3 < *(undefined4 **)(param_1 + 0xbbf8)) ||
         (*(ulong *)(param_1 + 0xbc00) < (ulong)((long)(int)(uVar1 + 8) + (long)puVar3))) {
        puVar2 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar2 = puVar3;
        *(uint *)(puVar2 + 1) = uVar1 + 8;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
      }
      FUN_10033c0b0(param_1,*puVar3,puVar3 + 2,uVar1 >> 2);
      puVar3 = (undefined4 *)((long)(int)uVar1 + 8 + (long)puVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 2));
  }
  return puVar3;
}

