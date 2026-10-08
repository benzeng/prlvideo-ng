
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c5ba60(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar16;
  
  piVar1 = *(int **)(param_1 + 0x30);
  iVar2 = (int)param_2;
  if (100 < iVar2) {
    if (0x74 < iVar2) {
      iVar9 = (int)param_3;
      if (iVar2 == 0x75) {
        iVar2 = iVar9;
        if (param_4 != (int *)0x0) {
          if (*param_4 == 0) {
            iVar9 = piVar1[1];
          }
          else {
            iVar2 = *piVar1;
          }
        }
        lVar4 = *(long *)(piVar1 + 2);
        lVar10 = *(long *)(piVar1 + 6);
        if (((iVar2 < 0x1001) || (iVar2 == *piVar1)) ||
           (lVar4 = FUN_100bf3540(param_3 & 0xffffffff,"bf_buff.c",0x171), lVar4 != 0)) {
          if (((iVar9 < 0x1001) || (iVar9 == piVar1[1])) ||
             (lVar10 = FUN_100bf3540(param_3 & 0xffffffff,"bf_buff.c",0x176), lVar10 != 0)) {
            if (*(long *)(piVar1 + 2) != lVar4) {
              FUN_100bf3910();
              *(long *)(piVar1 + 2) = lVar4;
              piVar1[5] = 0;
              piVar1[4] = 0;
              *piVar1 = iVar2;
            }
            if (*(long *)(piVar1 + 6) != lVar10) {
              FUN_100bf3910();
              *(long *)(piVar1 + 6) = lVar10;
              piVar1[9] = 0;
              piVar1[8] = 0;
              piVar1[1] = iVar9;
              return 1;
            }
            return 1;
          }
          if (lVar4 != *(long *)(piVar1 + 2)) {
            FUN_100bf3910(lVar4);
          }
        }
      }
      else {
        if (iVar2 != 0x7a) goto switchD_100c5ba9b_caseD_2;
        if ((long)param_3 <= (long)*piVar1) {
          pvVar3 = *(void **)(piVar1 + 2);
LAB_100c5bddf:
          piVar1[5] = 0;
          piVar1[4] = iVar9;
          _memcpy(pvVar3,param_4,(long)iVar9);
          return 1;
        }
        pvVar3 = (void *)FUN_100bf3540(param_3 & 0xffffffff,"bf_buff.c",0x153);
        if (pvVar3 != (void *)0x0) {
          if (*(long *)(piVar1 + 2) != 0) {
            FUN_100bf3910();
          }
          *(void **)(piVar1 + 2) = pvVar3;
          goto LAB_100c5bddf;
        }
      }
      FUN_100c62ee0(0x20,0x72,0x41,"bf_buff.c",0x1c1);
      goto LAB_100c5be9e;
    }
    if (iVar2 == 0x65) {
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_100c58810(param_1,0xf);
        lVar4 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x38),0x65,param_3,param_4);
        FUN_100c59780(param_1);
        return lVar4;
      }
      return 0;
    }
    if (iVar2 == 0x74) {
      uVar6 = (ulong)piVar1[4];
      if ((long)uVar6 < 1) {
        return 0;
      }
      uVar8 = 0;
      lVar4 = 0;
      if (piVar1[4] != 0) {
        lVar4 = 0;
        lVar10 = 0;
        lVar13 = 0;
        lVar16 = 0;
        uVar8 = 0;
        if ((uVar6 & 0xfffffffffffffffc) != 0) {
          puVar7 = (ushort *)((long)piVar1[5] + 2 + *(long *)(piVar1 + 2));
          uVar5 = uVar6 & 0xfffffffffffffffc;
          lVar4 = 0;
          lVar10 = 0;
          lVar13 = 0;
          lVar16 = 0;
          do {
            auVar14 = pshufb(ZEXT216(puVar7[-1]),_DAT_101dae730);
            auVar14 = auVar14 & _DAT_101dae740;
            auVar11 = pshufb(ZEXT216(*puVar7),_DAT_101dae730);
            auVar11 = auVar11 & _DAT_101dae740;
            auVar15._0_4_ = -(uint)(auVar14._0_4_ == _DAT_101dae750);
            auVar15._4_4_ = -(uint)(auVar14._4_4_ == _UNK_101dae754);
            auVar15._8_4_ = -(uint)(auVar14._8_4_ == _UNK_101dae758);
            auVar15._12_4_ = -(uint)(auVar14._12_4_ == _UNK_101dae75c);
            auVar14._4_4_ = auVar15._0_4_;
            auVar14._0_4_ = auVar15._4_4_;
            auVar14._8_4_ = auVar15._12_4_;
            auVar14._12_4_ = auVar15._8_4_;
            auVar14 = auVar14 & auVar15 & _DAT_100e18980;
            auVar12._0_4_ = -(uint)(auVar11._0_4_ == _DAT_101dae750);
            auVar12._4_4_ = -(uint)(auVar11._4_4_ == _UNK_101dae754);
            auVar12._8_4_ = -(uint)(auVar11._8_4_ == _UNK_101dae758);
            auVar12._12_4_ = -(uint)(auVar11._12_4_ == _UNK_101dae75c);
            auVar11._4_4_ = auVar12._0_4_;
            auVar11._0_4_ = auVar12._4_4_;
            auVar11._8_4_ = auVar12._12_4_;
            auVar11._12_4_ = auVar12._8_4_;
            auVar11 = auVar11 & auVar12 & _DAT_100e18980;
            lVar4 = auVar14._0_8_ + lVar4;
            lVar10 = auVar14._8_8_ + lVar10;
            lVar13 = auVar11._0_8_ + lVar13;
            lVar16 = auVar11._8_8_ + lVar16;
            puVar7 = puVar7 + 2;
            uVar5 = uVar5 - 4;
            uVar8 = uVar6 & 0xfffffffffffffffc;
          } while (uVar5 != 0);
        }
        lVar4 = lVar10 + lVar16 + lVar4 + lVar13;
        if (uVar6 == uVar8) {
          return lVar4;
        }
      }
      do {
        lVar4 = lVar4 + (ulong)(*(char *)(*(long *)(piVar1 + 2) + (long)piVar1[5] + uVar8) == '\n');
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)uVar6);
      return lVar4;
    }
switchD_100c5ba9b_caseD_2:
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 == 0) {
      return 0;
    }
    goto LAB_100c5bcb6;
  }
  switch(iVar2) {
  case 1:
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 == 0) {
      return 0;
    }
    param_2 = 1;
    goto LAB_100c5bcb6;
  default:
    goto switchD_100c5ba9b_caseD_2;
  case 3:
    lVar4 = (long)piVar1[8];
    break;
  case 10:
    lVar4 = (long)piVar1[4];
    if (lVar4 == 0) {
      lVar10 = *(long *)(param_1 + 0x38);
      lVar4 = 0;
      if (lVar10 != 0) {
        param_2 = 10;
        goto LAB_100c5bcb6;
      }
    }
    break;
  case 0xb:
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 == 0) {
      return 0;
    }
    if (0 < piVar1[8]) {
      while (FUN_100c58810(param_1,0xf), 0 < piVar1[8]) {
        iVar2 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                              (long)piVar1[9] + *(long *)(piVar1 + 6));
        FUN_100c59780(param_1);
        if (iVar2 < 1) {
          return (long)iVar2;
        }
        piVar1[9] = piVar1[9] + iVar2;
        piVar1[8] = piVar1[8] - iVar2;
      }
      piVar1[8] = 0;
      piVar1[9] = 0;
      lVar10 = *(long *)(param_1 + 0x38);
    }
    param_2 = 0xb;
LAB_100c5bcb6:
    lVar4 = FUN_100c58d60(lVar10,param_2,param_3,param_4);
    return lVar4;
  case 0xc:
    lVar4 = FUN_100c58c80(param_4,0x75,(long)*piVar1,0);
    if ((lVar4 != 0) && (lVar4 = FUN_100c58c80(param_4,0x75,(long)piVar1[1],1), lVar4 != 0)) {
      return 1;
    }
LAB_100c5be9e:
    lVar4 = 0;
    break;
  case 0xd:
    lVar4 = (long)piVar1[8];
    if (lVar4 == 0) {
      lVar10 = *(long *)(param_1 + 0x38);
      lVar4 = 0;
      if (lVar10 != 0) {
        param_2 = 0xd;
        goto LAB_100c5bcb6;
      }
    }
  }
  return lVar4;
}

