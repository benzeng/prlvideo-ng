
ulong FUN_1008993b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    pcVar5 = "NULL";
    uVar4 = 4;
  }
  else {
    uVar1 = FUN_100822110(local_88,0x50,param_2,0);
    if (0x4f < (int)uVar1) {
      puVar2 = (undefined1 *)FUN_10081ddd0(uVar1 + 1,"a_object.c",0xe3);
      uVar3 = 0xffffffff;
      if (puVar2 != (undefined1 *)0x0) {
        FUN_100822110(puVar2,uVar1 + 1,param_2,0);
        FUN_10087d780(param_1,puVar2,uVar1);
        if (puVar2 != local_88) {
          FUN_10081e1a0(puVar2);
        }
        uVar3 = (ulong)uVar1;
      }
      goto LAB_100899474;
    }
    if (0 < (int)uVar1) {
      FUN_10087d780(param_1,local_88,uVar1);
      uVar3 = (ulong)uVar1;
      goto LAB_100899474;
    }
    pcVar5 = "<INVALID>";
    uVar4 = 9;
  }
  uVar3 = FUN_10087d780(param_1,pcVar5,uVar4);
LAB_100899474:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

