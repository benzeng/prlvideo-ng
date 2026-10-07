
undefined4 FUN_1008b6c20(long *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined1 local_78 [48];
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_10088a650(local_78);
  pcVar3 = (char *)FUN_1008b7550(*(undefined8 *)(*param_1 + 0x18),0,0);
  uVar4 = FUN_100891710();
  iVar2 = FUN_10088a720(local_78,uVar4,0);
  uVar6 = 0;
  if (iVar2 != 0) {
    sVar5 = _strlen(pcVar3);
    iVar2 = FUN_10088a910(local_78,pcVar3,sVar5);
    uVar6 = 0;
    if (iVar2 != 0) {
      FUN_10081e1a0(pcVar3);
      iVar2 = FUN_10088a910(local_78,*(undefined8 *)(*(int **)(*param_1 + 8) + 2),
                            (long)**(int **)(*param_1 + 8));
      uVar6 = 0;
      if (iVar2 != 0) {
        iVar2 = FUN_10088a9c0(local_78,local_48,0);
        uVar6 = 0;
        if (iVar2 != 0) {
          uVar6 = local_48[0];
        }
      }
    }
  }
  FUN_10088aa50(local_78);
  if (lVar1 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

