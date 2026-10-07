
ulong FUN_100334030(long param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar3 = lVar1 + param_2, uVar3 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 1;
    FUN_1003611c0(*(undefined8 *)(param_1 + 48000),1,param_1,*(undefined2 *)(param_2 + 4),
                  *(undefined2 *)(param_2 + 6));
    return uVar3;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(int *)(puVar2 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

