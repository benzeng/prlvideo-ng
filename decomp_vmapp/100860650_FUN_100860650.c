
undefined1 * FUN_100860650(long *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  char local_38;
  
  if ((int)param_1[1] == 0) {
    puVar5 = (undefined1 *)FUN_10081ddd0(1,"ec_mult.c",0xc3);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      *param_3 = 1;
      return puVar5;
    }
    uVar9 = 0x41;
    uVar11 = 0xc5;
  }
  else if (param_2 - 1U < 7) {
    local_38 = '\x01';
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    if ((int)param_1[2] != 0) {
      local_38 = -1;
    }
    if (*param_1 == 0) {
      uVar9 = 0x44;
      uVar11 = 0xdb;
    }
    else {
      iVar3 = FUN_10084b410(param_1);
      puVar5 = (undefined1 *)FUN_10081ddd0(iVar3 + 1,"ec_mult.c",0xe0);
      if (puVar5 != (undefined1 *)0x0) {
        uVar1 = uVar2 * 2 - 1;
        uVar6 = (ulong)iVar3;
        uVar4 = *(uint *)*param_1 & uVar1;
        uVar7 = 0;
        do {
          if (uVar4 == 0) {
            uVar8 = 0;
            uVar10 = 0;
            if (uVar6 <= (long)param_2 + 1 + uVar7) {
              if (uVar7 <= uVar6 + 1) {
                *param_3 = uVar7;
                return puVar5;
              }
              uVar9 = 0x125;
              goto LAB_100860931;
            }
          }
          else {
            uVar8 = 0;
            uVar10 = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar8 = uVar4;
              if ((uVar2 & uVar4) != 0) {
                uVar8 = uVar4 & (int)uVar1 >> 1;
                if ((long)param_2 + 1 + uVar7 < uVar6) {
                  uVar8 = uVar4 + uVar2 * -2;
                }
              }
              if ((((int)uVar2 <= (int)uVar8) || ((int)uVar8 <= (int)-uVar2)) || ((uVar8 & 1) == 0))
              {
                uVar9 = 0x108;
                goto LAB_100860931;
              }
              uVar10 = uVar4 - uVar8;
              if (((uVar10 != uVar2) && (uVar4 != uVar8)) && (uVar10 != uVar2 * 2)) {
                uVar9 = 0x114;
                goto LAB_100860931;
              }
            }
          }
          puVar5[uVar7] = (char)uVar8 * local_38;
          iVar3 = FUN_10084c160(param_1,param_2 + 1 + (int)uVar7);
          uVar4 = (iVar3 << ((byte)param_2 & 0x1f)) + ((int)uVar10 >> 1);
          uVar7 = uVar7 + 1;
        } while ((int)uVar4 <= (int)(uVar2 * 2));
        uVar9 = 0x11f;
LAB_100860931:
        FUN_100887ce0(0x10,0x8f,0x44,"ec_mult.c",uVar9);
        goto LAB_1008608b0;
      }
      uVar9 = 0x41;
      uVar11 = 0xe5;
    }
  }
  else {
    uVar9 = 0x44;
    uVar11 = 0xcf;
  }
  FUN_100887ce0(0x10,0x8f,uVar9,"ec_mult.c",uVar11);
  puVar5 = (undefined1 *)0x0;
LAB_1008608b0:
  FUN_10081e1a0(puVar5);
  return (undefined1 *)0x0;
}

