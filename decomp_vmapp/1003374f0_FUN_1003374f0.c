
ulong FUN_1003374f0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2) * 0x18 | 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar6 = uVar3 + param_2, uVar6 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      puVar4 = (undefined4 *)(param_2 + 4);
      iVar5 = 0;
      do {
        uVar1 = *puVar4;
        *(undefined4 *)(param_1 + 0xbb74) = uVar1;
        FUN_100361230(*(undefined8 *)(param_1 + 48000),uVar1,param_1,puVar4[5],puVar4[2],puVar4[1],
                      puVar4[4]);
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 6;
      } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    return uVar6;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

