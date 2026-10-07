
ulong FUN_100335000(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 2) * 0x44;
  lVar1 = lVar2 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = lVar1 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    if (*(ushort *)(param_2 + 2) != 0) {
      (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x30))
                (*(long **)(param_1 + 0xbbb8),lVar2 + -0x40 + param_2);
    }
    return uVar4;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

