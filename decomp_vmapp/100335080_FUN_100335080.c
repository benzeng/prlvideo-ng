
undefined4 * FUN_100335080(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    iVar5 = 0;
    do {
      if (puVar4 < *(undefined4 **)(param_1 + 0xbbf8)) {
LAB_100335181:
        puVar3 = (ulong *)___cxa_allocate_exception(0x10);
        *puVar3 = (ulong)puVar4;
        *(undefined4 *)(puVar3 + 1) = 8;
LAB_1003351ab:
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,&PTR_vtable_101117a68,0);
      }
      puVar1 = puVar4 + 2;
      if (*(undefined4 **)(param_1 + 0xbc00) < puVar1) goto LAB_100335181;
      iVar2 = puVar4[1];
      if (iVar2 == 2) {
        if ((puVar1 < *(undefined4 **)(param_1 + 0xbbf8)) ||
           (*(undefined4 **)(param_1 + 0xbc00) < puVar4 + 0x1c)) {
          puVar3 = (ulong *)___cxa_allocate_exception(0x10);
          *puVar3 = (ulong)puVar1;
          *(undefined4 *)(puVar3 + 1) = 0x68;
          goto LAB_1003351ab;
        }
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x40))
                  (*(long **)(param_1 + 0xbbb8),*puVar4,puVar1);
      }
      else if (iVar2 == 1) {
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x38))(*(long **)(param_1 + 0xbbb8),*puVar4,0);
      }
      else if (iVar2 == 0) {
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x38))(*(long **)(param_1 + 0xbbb8),*puVar4,1);
      }
      if (puVar4[1] == 2) {
        puVar4 = puVar4 + 0x1a;
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return puVar4;
}

