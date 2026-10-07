
undefined8 FUN_1003a52b0(long param_1,short param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long local_98;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10038e870(local_80,local_58,0x18);
  if (param_2 == 8) {
    pcVar7 = ".xyz";
  }
  else if (param_2 == 0x5a) {
    if (param_4[0x80] == 0) {
      FUN_1003a2100(param_4 + 0x5c,param_4 + 0x80);
    }
    lVar10 = *(long *)(param_4 + 0x82);
    if (lVar10 == 0) {
      lVar10 = *(long *)(param_4 + 0x86);
    }
    FUN_10038e8e0(local_80," + %s",lVar10);
    pcVar7 = ".xy";
  }
  else {
    pcVar7 = "";
  }
  puVar1 = param_4 + 0x24;
  if (param_4[0x24] == 0) {
    FUN_1003a2100(param_4,puVar1);
  }
  local_98 = *(long *)(param_4 + 0x26);
  if (local_98 == 0) {
    local_98 = *(long *)(param_4 + 0x2a);
  }
  puVar2 = param_4 + 0x2e;
  puVar3 = param_4 + 0x52;
  if (param_4[0x52] == 0) {
    FUN_1003a2100(puVar2,puVar3);
  }
  lVar10 = *(long *)(param_4 + 0x54);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_4 + 0x58);
  }
  if (*pcVar7 != '\0') {
    uVar6 = *param_4;
    uVar4 = param_4[0x2e];
    if ((uVar6 & uVar4 & 0x2000) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      FUN_10038e8e0(uVar5,"src0");
      FUN_10038e8e0(uVar5," = ");
      FUN_1003a2100(param_4,uVar5);
      FUN_10038e8e0(uVar5,";\n");
      puVar9 = *(undefined1 **)(param_4 + 0x26);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(param_4 + 0x2a);
      }
      *puVar9 = 0;
      *puVar1 = 0;
      FUN_10038e8e0(puVar1,"src0");
      if (uVar6 == uVar4) {
        if (*puVar1 == 0) {
          FUN_1003a2100(param_4,puVar1);
        }
        lVar10 = *(long *)(param_4 + 0x26);
        local_98 = lVar10;
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_4 + 0x2a);
          local_98 = lVar10;
        }
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 8);
        FUN_10038e8e0(uVar5,"src1");
        FUN_10038e8e0(uVar5," = ");
        FUN_1003a2100(puVar2,uVar5);
        FUN_10038e8e0(uVar5,";\n");
        puVar9 = *(undefined1 **)(param_4 + 0x54);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)(param_4 + 0x58);
        }
        *puVar9 = 0;
        *puVar3 = 0;
        FUN_10038e8e0(puVar3,"src1");
        if (*puVar1 == 0) {
          FUN_1003a2100(param_4,puVar1);
        }
        local_98 = *(long *)(param_4 + 0x26);
        if (local_98 == 0) {
          local_98 = *(long *)(param_4 + 0x2a);
        }
        if (*puVar3 == 0) {
          FUN_1003a2100(puVar2,puVar3);
        }
        lVar10 = *(long *)(param_4 + 0x54);
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_4 + 0x58);
        }
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (param_3[8] == 0) {
    puVar9 = *(undefined1 **)(param_3 + 0x34);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar9 = 0;
    param_3[0x32] = 0;
    FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
    FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
    lVar13 = *(long *)(param_3 + 0x34);
    if (lVar13 == 0) {
      lVar13 = *(long *)(param_3 + 0x38);
    }
  }
  else {
    lVar13 = *(long *)(param_3 + 10);
    if (lVar13 == 0) {
      lVar13 = *(long *)(param_3 + 0xe);
    }
  }
  if (param_3[8] == 0) {
    puVar9 = *(undefined1 **)(param_3 + 0x4e);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_3 + 0x52);
    }
    *puVar9 = 0;
    param_3[0x4c] = 0;
    uVar6 = *param_3;
    if ((uVar6 & 0x100000) != 0) {
      FUN_10038e8e0(param_3 + 0x4c,"clamp(");
      uVar6 = *param_3;
    }
    uVar6 = uVar6 >> 0x18;
    uVar4 = uVar6 | 0xfffffff0;
    if ((uVar6 & 8) == 0) {
      uVar4 = uVar6 & 0xf;
    }
    if (uVar4 != 0) {
      FUN_10038e8e0(param_3 + 0x4c,"(");
    }
    pcVar11 = *(char **)(param_3 + 0x4e);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = *(char **)(param_3 + 0x52);
    }
  }
  else {
    pcVar11 = "";
  }
  lVar12 = local_78;
  if (local_78 == 0) {
    lVar12 = local_68;
  }
  if (param_3[8] == 0) {
    puVar9 = *(undefined1 **)(param_3 + 0x68);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar9 = 0;
    param_3[0x66] = 0;
    FUN_1003a28c0(param_3,param_3 + 0x66);
    pcVar8 = *(char **)(param_3 + 0x68);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = *(char **)(param_3 + 0x6c);
    }
  }
  else {
    pcVar8 = "";
  }
  FUN_10038e8e0(uVar5,"%s = %svec4(dot(%s%s, %s%s)%s)%s;\n",lVar13,pcVar11,local_98,pcVar7,lVar10,
                pcVar7,lVar12,pcVar8);
  FUN_10038e8c0(local_80);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

