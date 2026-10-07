
void FUN_100040e10(long param_1,undefined4 param_2,void *param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar6;
  ulong uVar5;
  
  uVar6 = param_4 + 0xc;
  uVar4 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) - uVar4 < uVar6) {
    uVar4 = uVar6 + *(int *)(param_1 + 0x14) * 2;
    pvVar2 = _realloc(*(void **)(param_1 + 8),(ulong)uVar4);
    if (pvVar2 == (void *)0x0) {
      uVar3 = ___cxa_allocate_exception(0x60);
      FUN_100516ad0(uVar3,"../../Sources/Tools/Legacy/Libraries/xdt/xdt/bit_box/bit_box.h",0x9e,
                    PTR_s_BAD_REALLOC_100bc47b0,DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
    }
    *(uint *)(param_1 + 0x14) = uVar4;
    *(void **)(param_1 + 8) = pvVar2;
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  else {
    pvVar2 = *(void **)(param_1 + 8);
  }
  uVar5 = (ulong)uVar4;
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  *(int *)((long)pvVar2 + uVar5) = iVar1;
  *(undefined4 *)((long)pvVar2 + uVar5 + 4) = param_2;
  *(uint *)((long)pvVar2 + uVar5 + 8) = param_4;
  _memcpy((void *)((long)pvVar2 + uVar5 + 0xc),param_3,(ulong)param_4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar6;
  return;
}

