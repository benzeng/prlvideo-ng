
void FUN_100396740(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_a0 [8];
  long local_98;
  long local_88;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x88);
  FUN_10038e870(local_a0,local_78,0x40);
  FUN_10038e8e0(local_a0,"(1.0");
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_10038e8e0(local_a0,"-blendweight.%c",(int)(char)(&DAT_100b3edd0)[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  FUN_10038e8e0(local_a0,")");
  pcVar2 = "gN";
  if (param_3 == 0) {
    pcVar2 = "gV";
  }
  pcVar3 = "OFF_MAT_IMVIEW";
  if (param_3 == 0) {
    pcVar3 = "OFF_MAT_MVIEW";
  }
  uVar5 = 0;
  do {
    FUN_10038e8e0(param_2,"%s.%c = dot(",pcVar2,(int)(char)(&DAT_100b3edd0)[uVar5]);
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        FUN_10038e8e0(param_2,"c[%s%u + %u] * blendweight.%c + ",pcVar3,uVar6 & 0xffffffff,
                      uVar5 & 0xffffffff,(int)(char)(&DAT_100b3edd0)[uVar6]);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    lVar4 = local_98;
    if (local_98 == 0) {
      lVar4 = local_88;
    }
    if (param_3 == 0) {
      FUN_10038e8e0(param_2,"c[OFF_MAT_MVIEW%u + %u] * %s, position);\n",uVar1,uVar5 & 0xffffffff,
                    lVar4);
    }
    else {
      FUN_10038e8e0(param_2,"c[OFF_MAT_IMVIEW%u + %u] * %s, vec4(normal.xyz, 0.0));\n",uVar1,
                    uVar5 & 0xffffffff,lVar4);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  FUN_10038e8c0(local_a0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

