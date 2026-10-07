
undefined4 FUN_1002d9a50(long param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_9a0 [2];
  ushort local_99e;
  byte local_99b;
  undefined1 local_990 [17];
  byte local_97f;
  undefined1 local_978 [2368];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] CheckoutConfigDescriptor, cfg 0x%X",
                  *(long *)(param_1 + 8) + 0x838,param_2);
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  iVar1 = FUN_1002d6070(*(undefined8 *)(param_1 + 8),0x80,6,0x100,0,local_990,0x12);
  uVar4 = 1;
  uVar9 = 1;
  if ((iVar1 != 0) || (uVar9 = (uint)local_97f, local_97f != 0)) {
    do {
      iVar1 = FUN_1002d6070(*(undefined8 *)(param_1 + 8),0x80,6,uVar4 - 1 & 0xffff | 0x200,0,
                            local_9a0,9);
      uVar7 = 0xffffffff;
      if ((iVar1 == 0) && (uVar7 = uVar4 - 1, local_99b != param_2)) {
        uVar7 = 0xffffffff;
      }
    } while ((uVar7 == 0xffffffff) && (bVar10 = uVar4 < uVar9, uVar4 = uVar4 + 1, bVar10));
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (uVar7 != 0xffffffff) {
      pvVar2 = _malloc((ulong)local_99e);
      *(void **)(param_1 + 0x18) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        uVar5 = 0;
        if (DAT_1011c568c < 0) goto LAB_1002d9d00;
        puVar6 = (undefined1 *)(*(long *)(param_1 + 8) + 0x838);
        pcVar3 = "[%s] Can\'t allocate memory for descriptor";
        uVar5 = 0;
      }
      else {
        iVar1 = FUN_1002d6070(*(undefined8 *)(param_1 + 8),0x80,6,uVar7 + 0x200 & 0xffff,0,pvVar2,
                              local_99e);
        if (iVar1 != 0) {
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[%s] Can\'t get configuration descriptor %08X",
                          *(long *)(param_1 + 8) + 0x838,*(undefined4 *)(param_1 + 0x20));
          }
          _free(*(void **)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x18) = 0;
          uVar5 = 0;
          goto LAB_1002d9d00;
        }
        uVar5 = 1;
        if (DAT_1011c568c < 2) goto LAB_1002d9d00;
        puVar6 = local_978;
        FUN_1002da020(puVar6,0x940,*(long *)(param_1 + 0x18),
                      *(undefined2 *)(*(long *)(param_1 + 0x18) + 2));
        pcVar3 = "%s";
      }
      FUN_1008e3970("","USB",0,pcVar3,puVar6);
      goto LAB_1002d9d00;
    }
  }
  uVar5 = 0;
  if (-1 < DAT_1011c568c) {
    uVar5 = 0;
    FUN_1008e3970("","USB",0,"[%s] Can\'t get configuration number %d ",
                  *(long *)(param_1 + 8) + 0x838,param_2);
  }
LAB_1002d9d00:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

