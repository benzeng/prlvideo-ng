
long * FUN_1008e14c0(undefined8 *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined1 local_a8 [48];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar14 = (long *)0x0;
  local_38 = lVar1;
  if (param_1 == (undefined8 *)0x0) goto LAB_1008e17b5;
  iVar6 = FUN_100885600(*param_1);
  if (0 < iVar6) {
    do {
      plVar7 = (long *)FUN_100885620(*param_1,plVar14);
      iVar6 = _strcmp((char *)*plVar7,param_2);
      if (iVar6 == 0) {
        if (plVar7 != (long *)0x0) {
          plVar8 = (long *)FUN_10081ddd0(0x30,"srp_vfy.c",0xc9);
          plVar14 = (long *)0x0;
          if (plVar8 == (long *)0x0) goto LAB_1008e17b5;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[3] = 0;
          plVar8[2] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
          uVar3 = *(undefined4 *)((long)plVar7 + 0x1c);
          lVar9 = plVar7[4];
          uVar4 = *(undefined4 *)((long)plVar7 + 0x24);
          *(int *)(plVar8 + 3) = (int)plVar7[3];
          *(undefined4 *)((long)plVar8 + 0x1c) = uVar3;
          *(int *)(plVar8 + 4) = (int)lVar9;
          *(undefined4 *)((long)plVar8 + 0x24) = uVar4;
          lVar9 = plVar7[5];
          if (*plVar7 == 0) {
LAB_1008e15c0:
            if (lVar9 != 0) {
              lVar9 = FUN_10087d050(lVar9);
              plVar8[5] = lVar9;
              if (lVar9 == 0) goto LAB_1008e1604;
            }
            lVar9 = FUN_10084b840(plVar7[1]);
            lVar12 = FUN_10084b840(plVar7[2]);
            plVar8[2] = lVar12;
            plVar8[1] = lVar9;
            if ((lVar9 != 0) && (plVar14 = plVar8, lVar12 != 0)) goto LAB_1008e17b5;
          }
          else {
            lVar12 = FUN_10087d050();
            *plVar8 = lVar12;
            if (lVar12 != 0) goto LAB_1008e15c0;
          }
LAB_1008e1604:
          FUN_10084b4b0(plVar8[1]);
          FUN_10084b440(plVar8[2]);
          FUN_10081e1a0(*plVar8);
          FUN_10081e1a0(plVar8[5]);
          goto LAB_1008e17ae;
        }
        break;
      }
      uVar13 = (int)plVar14 + 1;
      plVar14 = (long *)(ulong)uVar13;
      iVar6 = FUN_100885600(*param_1);
    } while ((int)uVar13 < iVar6);
  }
  plVar14 = (long *)0x0;
  if (((param_1[2] == 0) || (plVar14 = (long *)0x0, param_1[3] == 0)) ||
     (plVar14 = (long *)0x0, param_1[4] == 0)) goto LAB_1008e17b5;
  plVar8 = (long *)FUN_10081ddd0(0x30,"srp_vfy.c",0xc9);
  plVar14 = (long *)0x0;
  if (plVar8 == (long *)0x0) goto LAB_1008e17b5;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  plVar8[1] = 0;
  *plVar8 = 0;
  uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((long)plVar8 + 0x1c) = uVar3;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x24) = uVar5;
  if (param_2 == (char *)0x0) {
LAB_1008e16d0:
    iVar6 = FUN_100886f90(local_58,0x14);
    if (-1 < iVar6) {
      FUN_10088a650();
      uVar10 = FUN_100891760();
      FUN_10088a720(local_a8,uVar10,0);
      pcVar2 = (char *)param_1[2];
      sVar11 = _strlen(pcVar2);
      FUN_10088a910(local_a8,pcVar2,sVar11);
      sVar11 = _strlen(param_2);
      FUN_10088a910(local_a8,param_2,sVar11);
      FUN_10088a9c0(local_a8,local_78,0);
      FUN_10088aa50(local_a8);
      lVar9 = FUN_10084bc20(local_78,0x14,0);
      lVar12 = FUN_10084bc20(local_58,0x14,0);
      plVar8[2] = lVar12;
      plVar8[1] = lVar9;
      if ((lVar9 != 0) && (plVar14 = plVar8, lVar12 != 0)) goto LAB_1008e17b5;
    }
  }
  else {
    lVar9 = FUN_10087d050(param_2);
    *plVar8 = lVar9;
    if (lVar9 != 0) goto LAB_1008e16d0;
  }
  FUN_10084b4b0(plVar8[1]);
  FUN_10084b440(plVar8[2]);
  FUN_10081e1a0(*plVar8);
  FUN_10081e1a0(plVar8[5]);
LAB_1008e17ae:
  FUN_10081e1a0(plVar8);
  plVar14 = (long *)0x0;
LAB_1008e17b5:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar14;
}

