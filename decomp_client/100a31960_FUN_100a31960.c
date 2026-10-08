
void FUN_100a31960(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *****ppppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  undefined1 *puVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  ulong uVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  long *plVar25;
  undefined1 local_d0 [8];
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long local_78;
  long *local_70;
  long local_68;
  long ****local_60;
  long ****local_58;
  long local_50;
  long ***local_48;
  long ***local_40;
  long ***local_38;
  
  plVar25 = (long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    *(long *)(param_1 + 0x28) = param_1 + 8;
    iVar10 = _PasteboardCreate(&cf_com_apple_pasteboard_clipboard,plVar25);
    if (iVar10 != 0) {
      *plVar25 = 0;
      goto LAB_100a319f4;
    }
    iVar10 = _PasteboardSetPromiseKeeper(*plVar25,FUN_100a2feb0,plVar25);
    if (iVar10 != 0) {
      _CFRelease(*plVar25);
      *plVar25 = 0;
      goto LAB_100a319f4;
    }
    DAT_1023112a0 = 1;
    if (*plVar25 == 0) goto LAB_100a319f4;
  }
  if (*(int *)(param_1 + 400) != 0) {
    FUN_100a312a0(param_1,*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
  }
LAB_100a319f4:
  uVar11 = FUN_100a31f30(param_1);
  local_50 = 0;
  local_60 = (long ****)&local_60;
  local_58 = (long ****)&local_60;
  if ((uVar11 & 0x20) != 0) {
    FUN_100a301e0(&local_78,plVar25);
    if (local_70 != &local_78) {
      uVar1 = *(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8;
      plVar25 = local_70;
      do {
        local_98 = (undefined1 *)0x0;
        puStack_90 = (undefined1 *)0x0;
        local_88 = 0;
        uVar13 = _CFDataGetBytePtr(plVar25[2]);
        uVar12 = _CFDataGetLength(plVar25[2]);
        cVar9 = FUN_100a2d000(param_1 + 0x188,uVar1,0x20,uVar13,uVar12,&local_98);
        if (cVar9 != '\0') {
          uStack_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          ppppplVar14 = operator_new(0x28);
          std::string::string((string *)(ppppplVar14 + 2),(string *)&uStack_b8);
          ppppplVar14[1] = (long ****)&local_60;
          *ppppplVar14 = local_60;
          local_60[1] = (long ***)ppppplVar14;
          local_50 = local_50 + 1;
          local_60 = (long ****)ppppplVar14;
          std::string::~string((string *)&uStack_b8);
          puVar8 = puStack_90;
          puVar24 = local_98;
          puVar20 = puStack_90 + -1;
          pppplVar19 = (long ****)(puVar20 + -(long)local_98);
          if ((long ****)0xffffffffffffffef < pppplVar19) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (pppplVar19 < (long ****)0x17) {
            local_d0[0] = (char)pppplVar19 * '\x02';
            pppplVar15 = (long ****)(local_d0 + 1);
          }
          else {
            pppplVar15 = operator_new((ulong)(pppplVar19 + 2) & 0xfffffffffffffff0);
            local_d0 = (undefined1  [8])((ulong)(pppplVar19 + 2) & 0xfffffffffffffff0 | 1);
            ppplStack_c8 = (long ***)pppplVar19;
            ppplStack_c0 = (long ***)pppplVar15;
          }
          if (puVar24 != puVar20) {
            pppplVar16 = pppplVar15;
            if (puVar8 + (-2 - (long)puVar24) == (undefined1 *)0xffffffffffffffff) {
LAB_100a31c56:
              puVar24 = puVar24 + 1;
              do {
                *(undefined1 *)pppplVar16 = puVar24[-1];
                pppplVar16 = (long ****)((long)pppplVar16 + 1);
                puVar24 = puVar24 + 1;
              } while (puVar8 != puVar24);
            }
            else {
              puVar20 = puVar8 + ~(ulong)puVar24;
              puVar22 = (undefined1 *)((ulong)puVar20 & 0xffffffffffffffe0);
              if ((puVar22 == (undefined1 *)0x0) ||
                 ((pppplVar15 <= puVar8 + -2 &&
                  (puVar24 <=
                   (undefined1 *)((long)pppplVar15 + ((long)(puVar8 + -2) - (long)puVar24)))))) {
                puVar22 = (undefined1 *)0x0;
                puVar21 = puVar24;
              }
              else {
                pppplVar16 = (long ****)((long)pppplVar15 + (long)puVar22);
                pppplVar18 = pppplVar15 + 2;
                puVar21 = puVar24 + (long)puVar22;
                puVar23 = (undefined8 *)(puVar24 + 0x10);
                uVar17 = (ulong)puVar20 & 0xffffffffffffffe0;
                do {
                  ppplVar5 = (long ***)puVar23[-1];
                  ppplVar6 = (long ***)*puVar23;
                  ppplVar7 = (long ***)puVar23[1];
                  pppplVar18[-2] = (long ***)puVar23[-2];
                  pppplVar18[-1] = ppplVar5;
                  *pppplVar18 = ppplVar6;
                  pppplVar18[1] = ppplVar7;
                  pppplVar18 = pppplVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar17 = uVar17 - 0x20;
                } while (uVar17 != 0);
              }
              puVar24 = puVar21;
              if (puVar20 != puVar22) goto LAB_100a31c56;
            }
            pppplVar15 = (long ****)((long)pppplVar15 + (long)pppplVar19);
          }
          *(undefined1 *)pppplVar15 = 0;
          local_38 = ppplStack_c0;
          local_40 = ppplStack_c8;
          local_48 = (long ***)local_d0;
          pppplVar19 = (long ****)local_60[4];
          pppplVar15 = (long ****)local_60[2];
          pppplVar16 = (long ****)local_60[3];
          local_60[4] = ppplStack_c0;
          local_60[3] = ppplStack_c8;
          local_60[2] = (long ***)local_d0;
          local_d0 = (undefined1  [8])pppplVar15;
          ppplStack_c8 = (long ***)pppplVar16;
          ppplStack_c0 = (long ***)pppplVar19;
          std::string::~string((string *)local_d0);
        }
        if (local_98 != (undefined1 *)0x0) {
          if (puStack_90 != local_98) {
            puStack_90 = local_98;
          }
          operator_delete(local_98);
        }
        plVar25 = (long *)plVar25[1];
      } while (plVar25 != &local_78);
    }
    if (local_68 != 0) {
      lVar2 = *local_70;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_78 + 8);
      **(long **)(local_78 + 8) = lVar2;
      local_68 = 0;
      plVar25 = local_70;
      while (plVar25 != &local_78) {
        plVar3 = (long *)plVar25[1];
        if (plVar25[2] != 0) {
          _CFRelease();
        }
        operator_delete(plVar25);
        plVar25 = plVar3;
      }
    }
  }
  if (uVar11 != 0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),uVar11,&local_60);
  }
  if (local_50 != 0) {
    pppplVar19 = (long ****)*local_58;
    pppplVar19[1] = local_60[1];
    *local_60[1] = (long **)pppplVar19;
    local_50 = 0;
    ppppplVar14 = (long *****)local_58;
    while (ppppplVar14 != &local_60) {
      ppppplVar4 = (long *****)ppppplVar14[1];
      std::string::~string((string *)(ppppplVar14 + 2));
      operator_delete(ppppplVar14);
      ppppplVar14 = ppppplVar4;
    }
  }
  return;
}

