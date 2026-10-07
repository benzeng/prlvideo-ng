
undefined4 * FUN_100337370(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = *(ushort *)((long)param_2 + 2);
  if ((*(undefined4 **)(param_1 + 0xbbf8) <= param_2) &&
     (param_2 + (ulong)uVar1 * 3 + 1 <= *(undefined4 **)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 6;
    if (uVar1 != 0) {
      iVar4 = 0;
      puVar2 = param_2;
      do {
        FUN_100361330(*(undefined8 *)(param_1 + 48000),6,param_1,puVar2[3],puVar2[1]);
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 3;
      } while (iVar4 < (int)(uint)*(ushort *)((long)param_2 + 2));
    }
    return param_2 + (ulong)uVar1 * 3 + 1;
  }
  puVar3 = (undefined8 *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(uint *)(puVar3 + 1) = (uint)uVar1 * 0xc + 4;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

