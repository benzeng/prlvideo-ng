
ulong FUN_100337430(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 0xc + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar6 = lVar1 + param_2, uVar6 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      puVar4 = (undefined4 *)(param_2 + 4);
      iVar5 = 0;
      do {
        uVar2 = *puVar4;
        *(undefined4 *)(param_1 + 0xbb74) = uVar2;
        FUN_100361330(*(undefined8 *)(param_1 + 48000),uVar2,param_1,puVar4[2],puVar4[1]);
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    return uVar6;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

