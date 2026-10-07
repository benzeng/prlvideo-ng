
ulong FUN_100334900(long param_1,ulong param_2)

{
  ushort uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar2 = *(int *)(param_1 + 0xbb64) * (uint)uVar1 * 2 + 4;
  if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
     (uVar4 = (long)iVar2 + param_2, uVar4 <= *(ulong *)(param_1 + 0xbc00))) {
    *(undefined4 *)(param_1 + 0xbb74) = 2;
    FUN_1003613a0(*(undefined8 *)(param_1 + 48000),2,param_1,uVar1,param_2 + 7 & 0xfffffffffffffffc)
    ;
    return uVar4 + 3 & 0xfffffffffffffffc;
  }
  puVar3 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar3 = param_2;
  *(int *)(puVar3 + 1) = iVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
}

