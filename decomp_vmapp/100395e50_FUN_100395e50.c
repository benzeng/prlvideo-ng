
void FUN_100395e50(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *param_3;
  uVar1 = (param_3[1] - lVar3) * -0x5555555555555555;
  if ((int)uVar1 != 0) {
    uVar5 = 1;
    lVar6 = 0;
    while( true ) {
      if (*(char *)(lVar3 + lVar6) == '\x05') {
        if (*(int *)(*(long *)(param_1 + 0xa8) + 0x60) == 0) {
          FUN_10038e870(local_70,local_48,0x10);
          FUN_10038e8e0(local_70,"out_tex_%d",*(undefined1 *)(lVar3 + 2 + lVar6));
          lVar2 = local_68;
          if (local_68 == 0) {
            lVar2 = local_58;
          }
          FUN_10036c4f0(param_2,lVar3 + lVar6,lVar2);
          FUN_10038e8c0(local_70);
        }
      }
      else if (*(char *)(lVar3 + lVar6) == '\n') {
        pcVar4 = "out_color_1";
        if (*(char *)(lVar3 + 2 + lVar6) == '\0') {
          pcVar4 = "out_color_0";
        }
        FUN_10038e8e0(param_2,"%s = clamp(%s, 0.0, 1.0);\n",pcVar4,pcVar4);
        FUN_10036c4f0(param_2,lVar3 + lVar6,pcVar4);
      }
      if ((uVar1 & 0xffffffff) <= uVar5) break;
      lVar3 = *param_3;
      lVar6 = lVar6 + 3;
      uVar5 = uVar5 + 1;
    }
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_10038e8e0(param_2,"v_fogCoord = fogCoord;\n");
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

