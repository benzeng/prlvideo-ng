
void * FUN_100ba0970(long param_1)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  sVar3 = _strlen((char *)(param_1 + 0x18));
  sVar4 = _strlen((char *)(param_1 + 0x58));
  uVar1 = sVar3 + 4 + sVar4;
  if (uVar1 < 0x80) {
    puVar5 = local_b8;
  }
  else {
    puVar5 = _malloc(uVar1);
    if (puVar5 == (undefined1 *)0x0) {
      pvVar6 = (void *)0x0;
      FUN_100ba0740(param_1,"No enough memory");
      goto LAB_100ba0a78;
    }
  }
  pvVar6 = (void *)0x0;
  iVar2 = ___snprintf_chk(puVar5,uVar1,0,0xffffffffffffffff,"%s:%s",(char *)(param_1 + 0x18),
                          (char *)(param_1 + 0x58));
  if (iVar2 != 0) {
    pvVar6 = _malloc(uVar1 * 2);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
      FUN_100ba0740(param_1,"No enough memory");
    }
    else {
      ___bzero(pvVar6,uVar1 * 2);
      FUN_100ba6730(puVar5,iVar2,pvVar6,0);
    }
  }
  if (puVar5 != local_b8) {
    _free(puVar5);
  }
LAB_100ba0a78:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

