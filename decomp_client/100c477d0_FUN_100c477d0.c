
undefined8 FUN_100c477d0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long *local_70;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = 1;
  local_38 = lVar6;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar7 = (long *)(param_1 + 0x30);
    local_60 = param_1 + 0x38;
    local_58 = param_1 + 0x40;
    local_50 = param_1 + 0x48;
    local_48 = param_1 + 0x50;
    local_40 = param_1 + 0x58;
    lVar4 = FUN_100bf3450((*(int *)(*(long *)(param_1 + 0x30) + 8) +
                           *(int *)(*(long *)(param_1 + 0x38) + 8) +
                           *(int *)(*(long *)(param_1 + 0x40) + 8) +
                           *(int *)(*(long *)(param_1 + 0x48) + 8) +
                           *(int *)(*(long *)(param_1 + 0x50) + 8) +
                          *(int *)(*(long *)(param_1 + 0x58) + 8)) * 8 + 0xa0,"rsa_lib.c",0x13a);
    if (lVar4 == 0) {
      FUN_100c62ee0(4,0x82,0x41,"rsa_lib.c",0x13b);
      uVar3 = 0;
    }
    else {
      pvVar5 = (void *)(lVar4 + 0x13);
      local_70 = &local_60;
      lVar6 = 0;
      while( true ) {
        puVar2 = (undefined8 *)*plVar7;
        *plVar7 = lVar4 + lVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar6) = puVar2[2];
        uVar3 = *puVar2;
        *(undefined8 *)(lVar4 + 8 + lVar6) = puVar2[1];
        *(undefined8 *)(lVar4 + lVar6) = uVar3;
        *(undefined4 *)(lVar4 + 0x14 + lVar6) = 2;
        *(void **)(lVar4 + lVar6) = pvVar5;
        _memcpy(pvVar5,(void *)*puVar2,(long)*(int *)(puVar2 + 1) << 3);
        iVar1 = *(int *)(puVar2 + 1);
        FUN_100c26640(puVar2);
        if (lVar6 == 0x78) break;
        pvVar5 = (void *)((long)pvVar5 + (long)iVar1 * 8);
        plVar7 = (long *)*local_70;
        lVar6 = lVar6 + 0x18;
        local_70 = local_70 + 1;
      }
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xf9;
      *(long *)(param_1 + 0x90) = lVar4;
      lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
      uVar3 = 1;
    }
  }
  if (lVar6 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

