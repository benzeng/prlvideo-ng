
undefined8 FUN_1003c1ac0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_468 [544];
  undefined1 local_248 [544];
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(ushort *)(param_2 + 0x4c);
  local_28 = lVar2;
  if (uVar1 < 0x17) {
    if (uVar1 != 6) {
      if (uVar1 != 10) goto LAB_1003c1bb4;
      uVar5 = *(undefined8 *)(param_1 + 8);
      pcVar4 = "default:\n";
LAB_1003c1b5a:
      FUN_10038e8e0(uVar5,pcVar4);
      goto LAB_1003c1bb4;
    }
    FUN_1003b9a60(local_468,*(undefined8 *)(param_2 + 0x40),2,1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_1003ba9d0(local_468);
    FUN_10038e8e0(uVar5,"case %s:\n",uVar3);
    puVar6 = local_468;
  }
  else {
    if (uVar1 == 0x17) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      pcVar4 = "}\n";
      goto LAB_1003c1b5a;
    }
    if (uVar1 != 0x4c) goto LAB_1003c1bb4;
    FUN_1003b9a60(local_248,*(undefined8 *)(param_2 + 0x40),2,1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_1003ba9d0(local_248);
    FUN_10038e8e0(uVar5,"switch (%s)\n{\n",uVar3);
    puVar6 = local_248;
  }
  FUN_1003b9b40(puVar6);
LAB_1003c1bb4:
  if (lVar2 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

