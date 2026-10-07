
ulong FUN_100334150(long param_1,ulong param_2)

{
  ushort uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar4 = (uint)uVar1 * 8 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar3 = uVar4 + param_2, uVar3 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 4;
    FUN_1003612a0(*(undefined8 *)(param_1 + 48000),4,param_1,uVar1,0,param_2 + 4);
    return uVar3;
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar4;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

