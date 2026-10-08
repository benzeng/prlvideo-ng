
int FUN_100cb9d10(long param_1,undefined8 param_2)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  FUN_100c65850(local_a8);
  iVar2 = FUN_100cb7fc0(param_1);
  puVar5 = (uint *)0x0;
  if (-1 < iVar2) {
    uVar4 = FUN_100bf6fe0(0x33);
    puVar5 = (uint *)FUN_100cb8090(param_1,uVar4,0xfffffffd,4);
    if (puVar5 != (uint *)0x0) goto LAB_100cb9d7d;
    uVar4 = 0x72;
    uVar6 = 0x311;
    goto LAB_100cb9eb1;
  }
LAB_100cb9d7d:
  iVar2 = FUN_100cb7800(local_a8,param_2,*(undefined8 *)(param_1 + 0x10));
  iVar3 = -1;
  if (iVar2 == 0) goto LAB_100cb9ebc;
  if (puVar5 == (uint *)0x0) {
    iVar3 = FUN_100c6cf30(local_a8,*(undefined8 *)(*(undefined4 **)(param_1 + 0x28) + 2),
                          **(undefined4 **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40));
    if (0 < iVar3) goto LAB_100cb9ebc;
    uVar4 = 0x334;
LAB_100cb9e6d:
    FUN_100c62ee0(0x2e,0x9a,0x9e,"cms_sd.c",uVar4);
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_100c65bc0(local_a8,local_78,&local_ac);
    if (iVar2 < 1) {
      uVar4 = 0x93;
      uVar6 = 800;
    }
    else {
      if (local_ac == *puVar5) {
        iVar2 = _memcmp(local_78,*(void **)(puVar5 + 2),(ulong)local_ac);
        iVar3 = 1;
        if (iVar2 == 0) goto LAB_100cb9ebc;
        uVar4 = 0x32b;
        goto LAB_100cb9e6d;
      }
      uVar4 = 0x78;
      uVar6 = 0x325;
    }
LAB_100cb9eb1:
    FUN_100c62ee0(0x2e,0x9a,uVar4,"cms_sd.c",uVar6);
    iVar3 = -1;
  }
LAB_100cb9ebc:
  FUN_100c65c50(local_a8);
  if (lVar1 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

