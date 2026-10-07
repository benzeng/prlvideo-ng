
void FUN_1002b37b0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  ushort local_7c;
  ushort local_7a;
  int local_78;
  int local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  short local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(long *)(param_1[0xf] + 0xf0) = *(long *)(param_1[0xf] + 0xf0) + 1;
  local_38 = lVar13;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if (cVar3 == '\0') {
    if (2 < DAT_1011b55f8) {
      if (*(char *)((long)param_2 + 0x1c) == '\0') {
        pcVar10 = "abs";
      }
      else {
        pcVar10 = "rel";
      }
      FUN_1008e3970("","LocalDevices",3,
                    "[%s] Drop real_move, device not ready (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18]
                    ,*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),
                    *(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc),
                    *(undefined4 *)(param_2 + 3),pcVar10);
    }
    *(long *)(param_1[0x11] + 0xf0) = *(long *)(param_1[0x11] + 0xf0) + 1;
    goto LAB_1002b3ce2;
  }
  uVar6 = *param_2;
  uVar1 = param_2[3];
  local_3e = *(undefined1 *)((long)param_2 + 0x3f);
  local_40 = *(undefined2 *)((long)param_2 + 0x3d);
  local_48 = *(undefined8 *)((long)param_2 + 0x35);
  local_50 = *(undefined8 *)((long)param_2 + 0x2d);
  local_60 = *(undefined8 *)((long)param_2 + 0x1d);
  local_58 = *(undefined8 *)((long)param_2 + 0x25);
  plVar2 = (long *)param_1[0x1b];
  cVar3 = (char)((ulong)uVar1 >> 0x20);
  pbVar16 = (byte *)(plVar2 + 10);
  if (cVar3 != '\0') {
    pbVar16 = (byte *)((long)plVar2 + 0x51);
  }
  iVar7 = (int)param_2[1];
  iVar17 = (int)param_2[2];
  iVar14 = iVar7;
  if (((*pbVar16 & 0xf) != 0) && ((iVar17 == 0 || (iVar14 = iVar17, (char)param_1[0x17] == '\0'))))
  {
    iVar14 = iVar7 * 0x78;
  }
  iVar5 = (int)((ulong)param_2[1] >> 0x20);
  iVar19 = (int)((ulong)param_2[2] >> 0x20);
  iVar7 = iVar5;
  if ((0xf < *pbVar16) && ((iVar19 == 0 || (iVar7 = iVar19, (char)param_1[0x17] == '\0')))) {
    iVar7 = iVar5 * 0x78;
  }
  iVar5 = -iVar7;
  if (0 < iVar7) {
    iVar5 = iVar7;
  }
  iVar8 = -iVar14;
  if (0 < iVar14) {
    iVar8 = iVar14;
  }
  iVar11 = 0;
  if (iVar8 < iVar5) {
    iVar14 = 0;
    iVar11 = iVar7;
  }
  iVar8 = (int)((ulong)uVar6 >> 0x20);
  uVar18 = (undefined1)uVar1;
  iVar7 = (int)uVar6;
  iVar5 = (int)uVar1;
  if (((uint)((ulong)uVar1 >> 0x20) & 0xff) == (uint)*(byte *)((long)param_1 + 0x44)) {
    if (cVar3 == '\0') {
      if (((iVar7 != (int)param_1[5]) || (iVar8 != *(int *)((long)param_1 + 0x2c))) ||
         ((iVar14 != 0 || iVar11 != 0 || (iVar5 != (int)param_1[8])))) goto LAB_1002b3a74;
    }
    else if ((((iVar7 != iVar8) || (iVar7 != iVar14)) || (iVar14 != 0 || iVar11 != 0)) ||
            (iVar5 != (int)param_1[8])) goto LAB_1002b3938;
    if (2 < DAT_1011b55f8) {
      pcVar10 = "abs";
      if (cVar3 != '\0') {
        pcVar10 = "rel";
      }
      FUN_1008e3970("","LocalDevices",3,
                    "[%s] Drop real_move, bogus event (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18],
                    uVar6,iVar8,iVar14,iVar11,iVar5,pcVar10);
    }
    *(long *)(param_1[0x10] + 0xf0) = *(long *)(param_1[0x10] + 0xf0) + 1;
  }
  else {
    if (cVar3 == '\0') {
LAB_1002b3a74:
      uVar6 = FUN_100097250(DAT_1011c3698);
      FUN_1002b13c0(uVar6,&local_74,&local_78,&local_7a,&local_7c);
      local_70 = 1;
      uVar15 = *(uint *)(param_1 + 0x19);
      iVar9 = iVar7 - local_74;
      local_6f = uVar18;
      if ((iVar9 != 0 && local_74 <= iVar7) && (local_7a != 0)) {
        if (iVar9 < (int)(uint)local_7a) {
          iVar12 = uVar15 * -2 + 0x8000;
          if (iVar12 < 1) {
            iVar9 = FUN_1008e38f0(&DAT_101116b30);
            if (iVar9 != 0) {
              FUN_1008e3970("","LocalDevices",0,"Inconsistent borders for absolute mouse coors.");
            }
            uVar15 = 0;
            goto LAB_1002b3b66;
          }
          uVar4 = (short)((iVar12 / 2 + iVar9 * iVar12) / (int)(uint)local_7a) + (short)uVar15;
        }
        else {
          uVar4 = 0x7fff - (short)uVar15;
        }
        uVar15 = (uint)uVar4;
      }
LAB_1002b3b66:
      local_6e = (undefined2)uVar15;
      uVar15 = *(uint *)((long)param_1 + 0xcc);
      iVar9 = iVar8 - local_78;
      if ((iVar9 != 0 && local_78 <= iVar8) && (local_7c != 0)) {
        if (iVar9 < (int)(uint)local_7c) {
          iVar12 = uVar15 * -2 + 0x8000;
          if (iVar12 < 1) {
            iVar9 = FUN_1008e38f0(&DAT_101116b30);
            if (iVar9 == 0) {
              uVar15 = 0;
            }
            else {
              FUN_1008e3970("","LocalDevices",0,"Inconsistent borders for absolute mouse coors.");
              uVar15 = 0;
            }
            goto LAB_1002b3c12;
          }
          uVar4 = (short)((iVar12 / 2 + iVar9 * iVar12) / (int)(uint)local_7c) + (short)uVar15;
        }
        else {
          uVar4 = 0x7fff - (short)uVar15;
        }
        uVar15 = (uint)uVar4;
      }
LAB_1002b3c12:
      local_6c = (undefined2)uVar15;
      local_68 = -(short)iVar11;
      local_6a = (short)iVar14;
      (**(code **)(*(long *)param_1[0x1b] + 0xb0))((long *)param_1[0x1b],&local_70,10,0x81);
    }
    else {
LAB_1002b3938:
      local_70 = 2;
      local_6e = (undefined2)uVar6;
      local_6c = (undefined2)((ulong)uVar6 >> 0x20);
      local_68 = -(short)iVar11;
      local_6f = uVar18;
      local_6a = (short)iVar14;
      (**(code **)(*plVar2 + 0xb0))(plVar2,&local_70,10,0x82);
    }
    FUN_1002b2a50(param_1,*(undefined4 *)((long)param_2 + 0xc),1);
    *(int *)(param_1 + 5) = iVar7;
    *(int *)((long)param_1 + 0x2c) = iVar8;
    *(int *)(param_1 + 6) = iVar14;
    *(int *)((long)param_1 + 0x34) = iVar11;
    *(int *)(param_1 + 7) = iVar17;
    *(int *)((long)param_1 + 0x3c) = iVar19;
    *(int *)(param_1 + 8) = iVar5;
    *(char *)((long)param_1 + 0x44) = cVar3;
    *(undefined1 *)((long)param_1 + 0x67) = local_3e;
    *(undefined2 *)((long)param_1 + 0x65) = local_40;
    *(undefined8 *)((long)param_1 + 0x5d) = local_48;
    *(undefined8 *)((long)param_1 + 0x55) = local_50;
    *(undefined8 *)((long)param_1 + 0x4d) = local_58;
    *(undefined8 *)((long)param_1 + 0x45) = local_60;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1002b3ce2:
  if (lVar13 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

