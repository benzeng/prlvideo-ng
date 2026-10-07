
ulong FUN_100334840(long param_1,ulong param_2)

{
  ushort uVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar4 = (uVar1 + 2) * *(int *)(param_1 + 0xbb64) + 8;
  if (*(ulong *)(param_1 + 0xbbf8) <= param_2) {
    uVar3 = (long)iVar4 + param_2;
    if (uVar3 <= *(ulong *)(param_1 + 0xbc00)) {
      if (param_2 + 8 <= *(ulong *)(param_1 + 0xbc00)) {
        *(undefined4 *)(param_1 + 0xbb74) = 6;
        FUN_1003613a0(*(undefined8 *)(param_1 + 48000),6,param_1,uVar1,
                      param_2 + 0xb & 0xfffffffffffffffc);
        return uVar3 + 3 & 0xfffffffffffffffc;
      }
      puVar2 = (ulong *)___cxa_allocate_exception(0x10);
      *puVar2 = param_2;
      *(undefined4 *)(puVar2 + 1) = 8;
      goto LAB_1003348ec;
    }
  }
  puVar2 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar2 = param_2;
  *(int *)(puVar2 + 1) = iVar4;
LAB_1003348ec:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

