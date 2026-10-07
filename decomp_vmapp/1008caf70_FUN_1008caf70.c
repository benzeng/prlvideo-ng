
long FUN_1008caf70(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = FUN_100885600(param_2);
  if (iVar2 < 1) {
    if (param_3 == 0) {
LAB_1008cb0ab:
      param_3 = FUN_100884e10();
    }
  }
  else {
    iVar2 = 0;
    do {
      puVar4 = (undefined8 *)FUN_100885620(param_2,iVar2);
      param_3 = FUN_1008c5b00(param_1,puVar4[1],param_3);
      if (param_3 == 0) goto LAB_1008cb0ab;
      lVar5 = FUN_100885620(param_3,iVar2);
      FUN_1008993a0(local_88,0x50,*puVar4);
      sVar6 = _strlen(local_88);
      sVar7 = _strlen(*(char **)(lVar5 + 8));
      uVar1 = sVar6 + 5 + sVar7;
      lVar8 = FUN_10081ddd0(uVar1 & 0xffffffff,"v3_info.c",0x7f);
      if (lVar8 == 0) {
        FUN_100887ce0(0x22,0x8a,0x41,"v3_info.c",0x82);
        param_3 = 0;
        break;
      }
      lVar9 = (long)(int)uVar1;
      FUN_10087d1f0(lVar8,local_88,lVar9);
      FUN_10087d250(lVar8," - ",lVar9);
      FUN_10087d250(lVar8,*(undefined8 *)(lVar5 + 8),lVar9);
      FUN_10081e1a0(*(undefined8 *)(lVar5 + 8));
      *(long *)(lVar5 + 8) = lVar8;
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100885600(param_2);
    } while (iVar2 < iVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}

