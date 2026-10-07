
undefined8 FUN_100394020(long param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_230 [8];
  long local_228;
  long local_218;
  undefined1 local_208 [16];
  undefined4 local_1f8 [112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar6 = param_2 >> 0x10 & 0xf;
  lVar2 = **(long **)(param_1 + 0x20);
  cVar5 = '\x03';
  do {
    if (lVar2 == (*(long **)(param_1 + 0x20))[1]) {
LAB_100394091:
      FUN_1003a25c0(local_1f8,param_1 + 0x58);
      local_1f8[0] = param_3;
      FUN_10038e870(local_230,local_208,0x10);
      FUN_10036bf10(local_230,param_2 & 0xf,uVar6);
      if (*(char *)(DAT_1011c8478 + 0x2d) == '\0') {
        pcVar7 = "%s = %s%s;\n";
      }
      else if (cVar5 == '\x0f') {
        pcVar7 = "%s.xy = halfToFloat(%s.xy)%s;\n";
      }
      else {
        pcVar7 = "%s = %s%s;\n";
        if (cVar5 == '\x10') {
          pcVar7 = "%s = halfToFloat4(%s)%s;\n";
        }
      }
      pcVar4 = ".zyxw";
      if (*(char *)(DAT_1011c8478 + 0x49) == '\0') {
        pcVar4 = "";
      }
      if (cVar5 != '\x04') {
        pcVar4 = "";
      }
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = FUN_1003a2680(local_1f8);
      if (local_228 == 0) {
        local_228 = local_218;
      }
      FUN_10038e8e0(uVar1,pcVar7,uVar3,local_228,pcVar4);
      FUN_10038e8c0(local_230);
      FUN_1003a2670(local_1f8);
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (((uint)*(byte *)(lVar2 + 6) == (param_2 & 0xf)) && (*(byte *)(lVar2 + 7) == uVar6)) {
      cVar5 = *(char *)(lVar2 + 4);
      goto LAB_100394091;
    }
    lVar2 = lVar2 + 8;
  } while( true );
}

