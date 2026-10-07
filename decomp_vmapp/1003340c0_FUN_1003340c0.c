
ulong FUN_1003340c0(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_2 + 2);
  lVar1 = (ulong)uVar2 * 4 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = lVar1 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 2;
    FUN_1003612a0(*(undefined8 *)(param_1 + 48000),2,param_1,(ulong)uVar2,0,param_2 + 4);
    return uVar4;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

