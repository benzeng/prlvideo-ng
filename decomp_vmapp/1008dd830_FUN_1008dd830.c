
bool FUN_1008dd830(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint local_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10088a650(local_a8);
  lVar1 = *(long *)(param_1 + 8);
  iVar2 = FUN_1008dafc0(local_a8,param_2,*(undefined8 *)(lVar1 + 8));
  bVar5 = false;
  if (iVar2 != 0) {
    iVar2 = FUN_10088a9c0(local_a8,local_78,&local_ac);
    if (0 < iVar2) {
      if (param_3 == 0) {
        iVar2 = FUN_1008afb30(*(undefined8 *)(lVar1 + 0x18),local_78,local_ac);
        bVar5 = iVar2 != 0;
      }
      else {
        if (local_ac == **(uint **)(lVar1 + 0x18)) {
          iVar2 = _memcmp(local_78,*(void **)(*(uint **)(lVar1 + 0x18) + 2),(ulong)local_ac);
          bVar5 = true;
          if (iVar2 == 0) goto LAB_1008dd92d;
          uVar3 = 0x9e;
          uVar4 = 0x83;
        }
        else {
          uVar3 = 0x79;
          uVar4 = 0x7d;
        }
        FUN_100887ce0(0x2e,0x75,uVar3,"cms_dd.c",uVar4);
        bVar5 = false;
      }
    }
  }
LAB_1008dd92d:
  FUN_10088aa50(local_a8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

