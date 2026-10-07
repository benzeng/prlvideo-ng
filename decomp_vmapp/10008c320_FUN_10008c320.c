
long FUN_10008c320(ulong *param_1,ulong param_2,long param_3,char param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((DAT_1011c3740 != 0) && (*(int *)(DAT_1011c3740 + 0x10) != 0)) {
    FUN_1000d60e0(DAT_1011c3740,param_2,param_3);
  }
  uVar6 = param_3 + param_2;
  uVar4 = *param_1;
  if ((param_2 < uVar4) && (param_3 != 0 && uVar6 <= uVar4)) {
    if (param_5 != '\0') {
      FUN_10008c590(param_1,param_2 >> 0xc,
                    (int)(uVar6 + 0xfffffffffff >> 0xc) + (1 - (int)(param_2 >> 0xc)));
    }
    if ((*(long *)(param_1[0xc] + 0x20) == 0) ||
       (lVar10 = *(long *)(param_1[0xc] + 0x20) + param_2, lVar10 == 0)) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000392,&local_88);
      FUN_10002d9d0(&local_88);
      lVar10 = 0;
    }
    else {
      local_68 = 0x4d430002;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_70 = 0;
      local_60 = lVar10;
      local_58 = param_3;
      if (((param_4 != '\0') && (param_3 != 0)) && (uVar6 = param_1[0x17], uVar6 != 0)) {
        uVar4 = param_2 >> 0xc;
        uVar9 = (uint)(param_2 + 0xfffffffffff + param_3 >> 0xc);
        if ((uint)uVar4 <= uVar9) {
          while( true ) {
            uVar8 = uVar4 >> 5 & 0x7ffffff;
            if ((*(uint *)(uVar6 + uVar8 * 4) >> ((byte)uVar4 & 0x1f) & 1) == 0) {
              uVar3 = *(uint *)(uVar6 + uVar8 * 4);
              do {
                puVar1 = (uint *)(uVar6 + uVar8 * 4);
                LOCK();
                uVar2 = *puVar1;
                bVar11 = uVar3 == uVar2;
                if (bVar11) {
                  *puVar1 = 1 << ((byte)uVar4 & 0x1f) | uVar3;
                  uVar2 = uVar3;
                }
                uVar3 = uVar2;
                UNLOCK();
              } while (!bVar11);
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulong)uVar3;
            if (uVar9 < uVar3) break;
            uVar6 = param_1[0x17];
          }
        }
      }
    }
  }
  else {
    pcVar5 = "(out of bound)";
    if (uVar6 <= uVar4) {
      pcVar5 = "";
    }
    pcVar7 = "(zero size)";
    if (param_3 != 0) {
      pcVar7 = "";
    }
    lVar10 = 0;
    FUN_1008e3970("","vm",0,"[GuestMem] Invalid swap region %llx %llx %llx %s %s",param_2,param_3,
                  uVar4,pcVar5,pcVar7);
    FUN_1007858f0(0,"[GuestMem]");
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar10;
}

