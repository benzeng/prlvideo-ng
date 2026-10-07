
int FUN_1008dd4d0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint local_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [72];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_10088a650(local_a8);
  iVar2 = FUN_1008db780(param_1);
  puVar5 = (uint *)0x0;
  if (-1 < iVar2) {
    uVar4 = FUN_100821870(0x33);
    puVar5 = (uint *)FUN_1008db850(param_1,uVar4,0xfffffffd,4);
    if (puVar5 != (uint *)0x0) goto LAB_1008dd53d;
    uVar4 = 0x72;
    uVar6 = 0x311;
    goto LAB_1008dd671;
  }
LAB_1008dd53d:
  iVar2 = FUN_1008dafc0(local_a8,param_2,*(undefined8 *)(param_1 + 0x10));
  iVar3 = -1;
  if (iVar2 == 0) goto LAB_1008dd67c;
  if (puVar5 == (uint *)0x0) {
    iVar3 = FUN_100891b50(local_a8,*(undefined8 *)(*(undefined4 **)(param_1 + 0x28) + 2),
                          **(undefined4 **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40));
    if (0 < iVar3) goto LAB_1008dd67c;
    uVar4 = 0x334;
LAB_1008dd62d:
    FUN_100887ce0(0x2e,0x9a,0x9e,"cms_sd.c",uVar4);
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_10088a9c0(local_a8,local_78,&local_ac);
    if (iVar2 < 1) {
      uVar4 = 0x93;
      uVar6 = 800;
    }
    else {
      if (local_ac == *puVar5) {
        iVar2 = _memcmp(local_78,*(void **)(puVar5 + 2),(ulong)local_ac);
        iVar3 = 1;
        if (iVar2 == 0) goto LAB_1008dd67c;
        uVar4 = 0x32b;
        goto LAB_1008dd62d;
      }
      uVar4 = 0x78;
      uVar6 = 0x325;
    }
LAB_1008dd671:
    FUN_100887ce0(0x2e,0x9a,uVar4,"cms_sd.c",uVar6);
    iVar3 = -1;
  }
LAB_1008dd67c:
  FUN_10088aa50(local_a8);
  if (lVar1 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

