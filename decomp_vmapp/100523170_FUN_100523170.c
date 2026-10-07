
void FUN_100523170(long param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  int3 iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long *plVar12;
  undefined4 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  long local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  void *local_60;
  void *local_58;
  long *local_48;
  long *plStack_40;
  long *local_38;
  
  if (param_3 < 0x2c) {
    pcVar11 = "Invalid tz data header";
  }
  else {
    iVar8 = _strncmp(param_2,"TZif",4);
    if (iVar8 == 0) {
      iVar8 = CONCAT31(CONCAT21(CONCAT11(param_2[0x20],param_2[0x21]),param_2[0x22]),param_2[0x23]);
      param_3 = param_3 + -0x2c;
      if (iVar8 * 4 <= param_3) {
        cVar1 = param_2[0x24];
        cVar2 = param_2[0x25];
        cVar3 = param_2[0x26];
        cVar4 = param_2[0x27];
        pbVar19 = (byte *)(param_2 + 0x2c);
        lVar9 = (long)iVar8;
        local_48 = (long *)0x0;
        plStack_40 = (long *)0x0;
        local_38 = (long *)0x0;
        lVar18 = 0x2c;
        if (iVar8 == 0) {
          bVar6 = false;
        }
        else {
          if (param_2[0x20] < '\0') {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          plVar10 = operator_new(lVar9 * 8);
          plVar12 = plVar10 + lVar9;
          local_48 = plVar10;
          local_38 = plVar12;
          ___bzero(plVar10,lVar9 * 8);
          bVar6 = 0 < iVar8;
          lVar18 = 0x2c;
          plStack_40 = plVar12;
          if (iVar8 < 1) {
            bVar6 = false;
          }
          else {
            lVar18 = (ulong)(iVar8 - 1) * 4 + 0x30;
            iVar14 = iVar8;
            do {
              *plVar10 = (long)CONCAT31(CONCAT21(CONCAT11(*pbVar19,pbVar19[1]),pbVar19[2]),
                                        pbVar19[3]);
              plVar10 = plVar10 + 1;
              pbVar19 = pbVar19 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            pbVar19 = (byte *)(param_2 + lVar18);
            param_3 = param_3 + iVar8 * -4;
          }
        }
        if (param_3 < iVar8) {
          FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,
                        "Wrong data. Can\'t read specified number (%i) of rules indices");
          puVar13 = (undefined4 *)___cxa_allocate_exception(4);
          *puVar13 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar13,PTR_typeinfo_100ba22d8,0);
        }
        iVar14 = CONCAT31(CONCAT21(CONCAT11(cVar1,cVar2),cVar3),cVar4);
        if (param_3 - iVar8 < iVar14 * 6) {
          FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,
                        "Wrong data. Can\'t read specified number (%i) of rules",iVar14);
          puVar13 = (undefined4 *)___cxa_allocate_exception(4);
          *puVar13 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar13,PTR_typeinfo_100ba22d8,0);
        }
        FUN_100523b10(&local_60,(long)iVar14);
        if (0 < iVar14) {
          pcVar11 = param_2 + lVar18 + lVar9;
          lVar15 = (long)local_60 + 0xc;
          lVar16 = 0;
          do {
            iVar7 = CONCAT21(CONCAT11(*pcVar11,pcVar11[1]),pcVar11[2]);
            *(int *)(lVar15 + -4) =
                 (CONCAT31(iVar7,pcVar11[3]) / 0x3c + ((int)iVar7 >> 0x17)) - ((int)iVar7 >> 0x17);
            if (1 < (byte)pcVar11[4]) {
              FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,"Wrong isDST value in tzFile (%u)")
              ;
              puVar13 = (undefined4 *)___cxa_allocate_exception(4);
              *puVar13 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(puVar13,PTR_typeinfo_100ba22d8,0);
            }
            *(bool *)lVar15 = pcVar11[4] != 0;
            lVar16 = lVar16 + 1;
            lVar15 = lVar15 + 0x10;
            pcVar11 = pcVar11 + 6;
          } while (lVar16 < iVar14);
        }
        iVar8 = 0;
        if (bVar6) {
          lVar15 = 0;
          do {
            if (param_2[lVar15 + lVar18] == '\0') {
              if (*(char *)((long)local_60 + (ulong)*pbVar19 * 0x10 + 0xc) == '\0')
              goto LAB_1005235f5;
              uVar20 = (ulong)*pbVar19;
              goto LAB_100523470;
            }
            lVar15 = lVar15 + 1;
            iVar8 = 0;
          } while (lVar15 < lVar9);
        }
        goto LAB_100523499;
      }
      FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,
                    "Wrong data. Can\'t read specified number (%i) of transition times");
      goto LAB_100523736;
    }
    pcVar11 = "Not a TZ data";
  }
  FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,pcVar11);
LAB_100523736:
  puVar13 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar13 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar13,PTR_typeinfo_100ba22d8,0);
  while (uVar20 = uVar17 - 1,
        *(char *)((long)local_60 + (ulong)(byte)param_2[uVar17 + lVar18 + -1] * 0x10 + 0xc) != '\0')
  {
LAB_100523470:
    uVar17 = uVar20;
    if ((long)uVar17 < 1) break;
  }
  iVar8 = (int)uVar17 + -1;
  if (iVar8 < 0) {
LAB_1005235f5:
    iVar14 = (int)((ulong)((long)local_58 - (long)local_60) >> 4);
    lVar9 = 0;
    if (0 < iVar14) {
      pcVar11 = (char *)((long)local_60 + 0xc);
      lVar9 = 0;
      do {
        if (*pcVar11 == '\0') break;
        lVar9 = lVar9 + 1;
        pcVar11 = pcVar11 + 0x10;
      } while (lVar9 < iVar14);
    }
    iVar8 = 0;
    if ((int)lVar9 != iVar14) {
      iVar8 = (int)lVar9;
    }
  }
LAB_100523499:
  lVar9 = (long)iVar8 * 0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)((long)local_60 + lVar9);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)((long)local_60 + lVar9 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)local_60 + lVar9 + 8);
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != *(long *)(param_1 + 0x20)) {
    *(ulong *)(param_1 + 0x28) =
         (~((lVar9 + -0x10) - *(long *)(param_1 + 0x20)) & 0xfffffffffffffff0U) + lVar9;
  }
  plVar12 = plStack_40;
  if (plStack_40 != local_48) {
    uVar20 = 0;
    do {
      local_78 = local_48[uVar20] * 1000;
      FUN_100522ce0(&local_70,&local_78,
                    (void *)((ulong)(byte)param_2[uVar20 + lVar18] * 0x10 + (long)local_60));
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      if (puVar5 == *(undefined8 **)(param_1 + 0x30)) {
        FUN_100523bd0(param_1 + 0x20,&local_70);
      }
      else {
        *puVar5 = local_70;
        *(undefined1 *)((long)puVar5 + 0xc) = local_64;
        *(undefined4 *)(puVar5 + 1) = local_68;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
      }
      uVar20 = uVar20 + 1;
      plVar12 = local_48;
    } while (uVar20 < (ulong)((long)plStack_40 - (long)local_48 >> 3));
  }
  if (local_60 != (void *)0x0) {
    if (local_58 != local_60) {
      local_58 = (void *)((~((long)local_58 + (-0x10 - (long)local_60)) & 0xfffffffffffffff0U) +
                         (long)local_58);
    }
    operator_delete(local_60);
    plVar12 = local_48;
  }
  if (plVar12 != (long *)0x0) {
    if (plStack_40 != plVar12) {
      plStack_40 = (long *)((~((long)plStack_40 + (-8 - (long)plVar12)) & 0xfffffffffffffff8U) +
                           (long)plStack_40);
    }
    operator_delete(plVar12);
  }
  return;
}

