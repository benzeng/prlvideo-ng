
void FUN_100336b80(long param_1,ulong param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  uVar2 = *(ushort *)(param_2 + 2);
  uVar6 = (ulong)uVar2 * 8;
  iVar4 = (int)uVar6;
  uVar8 = iVar4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) || (*(ulong *)(param_1 + 0xbc00) < uVar8 + param_2))
  {
    puVar5 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar5 = param_2;
    *(uint *)(puVar5 + 1) = uVar8;
  }
  else {
    if ((*(ulong *)(param_1 + 0xbbf8) <= param_2 + 4) &&
       ((uVar6 | 4) + param_2 <= *(ulong *)(param_1 + 0xbc00))) {
      if (uVar2 != 0) {
        lVar7 = 0;
        do {
          uVar8 = *(uint *)(param_2 + 4 + lVar7 * 8);
          uVar6 = (ulong)uVar8;
          if (uVar6 < 0x10) {
            uVar3 = *(undefined4 *)(param_2 + 8 + lVar7 * 8);
            cVar1 = *(char *)(param_1 + 0x2c + uVar6 * 0x14);
            iVar4 = *(int *)(param_1 + 0x30 + uVar6 * 0x14);
            *(undefined4 *)(param_1 + 0x30 + uVar6 * 0x14) = 0;
            *(undefined4 *)(param_1 + 0x20 + uVar6 * 0x14) = 0;
            *(undefined4 *)(param_1 + 0x24 + uVar6 * 0x14) = uVar3;
            *(undefined1 *)(param_1 + 0x2c + uVar6 * 0x14) = 1;
            if ((iVar4 != 0) || (cVar1 == '\0')) {
              *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)uVar8 & 0x1f);
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < (long)(ulong)uVar2);
      }
      return;
    }
    puVar5 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar5 = param_2 + 4;
    *(int *)(puVar5 + 1) = iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar5,&PTR_vtable_101117a68,0);
}

