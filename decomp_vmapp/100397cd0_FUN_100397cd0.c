
void FUN_100397cd0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined1 local_70 [8];
  char *local_68;
  char *local_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  FUN_10038e870(local_70,local_48,0x10);
  FUN_10036bdb0(local_70,5,param_4);
  iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + (ulong)(param_4 + 5) * 4);
  if (param_3 == 0) {
    if (iVar1 == 0) {
      local_68 = "vec4(0.0, 0.0, 0.0, 1.0)";
    }
    else if (local_68 == (char *)0x0) {
      local_68 = local_58;
    }
    FUN_10038e8e0(param_2,"%s",local_68);
  }
  else {
    switch(iVar1) {
    case 0:
      FUN_10038e8e0(param_2,"vec4(1.0, 0.0, 0.0, 0.0)");
      break;
    case 1:
      if (local_68 == (char *)0x0) {
        local_68 = local_58;
      }
      FUN_10038e8e0(param_2,"vec4(%s.s, 1.0, 0.0, 0.0)",local_68);
      break;
    case 2:
      if (local_68 == (char *)0x0) {
        local_68 = local_58;
      }
      FUN_10038e8e0(param_2,"vec4(%s.st, 1.0, 0.0)",local_68);
      break;
    case 3:
      if (local_68 == (char *)0x0) {
        local_68 = local_58;
      }
      FUN_10038e8e0(param_2,"vec4(%s.stp, 1.0)",local_68);
      break;
    case 4:
      if (local_68 == (char *)0x0) {
        local_68 = local_58;
      }
      FUN_10038e8e0(param_2,local_68);
    }
  }
  FUN_10038e8c0(local_70);
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

