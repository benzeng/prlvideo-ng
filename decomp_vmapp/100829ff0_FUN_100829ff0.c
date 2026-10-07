
undefined8 FUN_100829ff0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (*param_1 != 0) {
    plVar1 = param_1 + 1;
    iVar3 = FUN_10088a9c0(plVar1,local_78,&local_7c);
    if (iVar3 != 0) {
      iVar3 = FUN_10088ab60(plVar1,param_1 + 0xd);
      if (iVar3 != 0) {
        iVar3 = FUN_10088a910(plVar1,local_78,local_7c);
        if (iVar3 != 0) {
          iVar3 = FUN_10088a9c0(plVar1,param_2,param_3);
          uVar4 = 1;
          if (iVar3 != 0) goto LAB_10082a078;
        }
      }
    }
  }
  uVar4 = 0;
LAB_10082a078:
  if (lVar2 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

