
int FUN_1005aad70(long *param_1)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  if ((long *)*param_1 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Incoming parameters to group init are incorrect!");
    iVar8 = -0x7ffffffd;
  }
  else {
    lVar9 = (**(code **)(*(long *)*param_1 + 0x330))();
    iVar6 = (**(code **)(*(long *)*param_1 + 0x300))();
    uVar21 = CONCAT44(0,iVar6 << 0xc);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar21;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = lVar9 + -1 + uVar21;
    uVar7 = SUB164(auVar4 / auVar2,0);
    uVar20 = (ulong)uVar7;
    puVar10 = operator_new__(uVar20 * 0x40);
    if (uVar20 != 0) {
      puVar15 = puVar10;
      do {
        puVar15[4] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        *(undefined4 *)(puVar15 + 7) = 0xffffffff;
        puVar15[5] = puVar15 + 5;
        puVar15[6] = puVar15 + 5;
        puVar15 = puVar15 + 8;
      } while (puVar15 != puVar10 + uVar20 * 8);
    }
    plVar11 = operator_new(0x18);
    plVar11[2] = 0;
    plVar11[1] = 0;
    *plVar11 = (long)(plVar11 + 1);
    iVar8 = FUN_1005ab120(*param_1,plVar11,puVar10,SUB168(auVar4 / auVar2,0) & 0xffffffff);
    if (iVar8 < 0) {
      FUN_1008e3970("","vdisk",0,"Error allocating storages at groups init: 0x%x",iVar8);
      if (puVar10 != (undefined8 *)0x0) {
        operator_delete__(puVar10);
      }
      if (plVar11 != (long *)0x0) {
        FUN_1005b51c0(plVar11,plVar11[1]);
        operator_delete(plVar11);
      }
    }
    else {
      if (uVar7 != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar21;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = lVar9 + -1 + uVar21;
        uVar20 = SUB168(auVar5 / auVar3,0) + 0xffffffff;
        lVar12 = (uVar20 & 0xffffffff) + 1;
        lVar16 = lVar12 - ((ulong)~(uint)uVar20 & 1);
        lVar18 = 0;
        if (lVar16 != 0) {
          piVar13 = (int *)(puVar10 + 0xf);
          lVar19 = 0;
          do {
            piVar13[-0x10] = (int)lVar19;
            *piVar13 = (int)lVar19 + 1;
            lVar19 = lVar19 + 2;
            piVar13 = piVar13 + 0x20;
            lVar18 = lVar16;
          } while (lVar19 != lVar16);
        }
        if (lVar12 != lVar18) {
          iVar8 = (int)((lVar9 + -1 + uVar21) / uVar21);
          iVar17 = (int)lVar18;
          uVar14 = iVar8 - iVar17 & 7;
          if (uVar14 != 0) {
            puVar15 = puVar10 + lVar18 * 8 + 7;
            do {
              *(int *)puVar15 = (int)lVar18;
              lVar18 = lVar18 + 1;
              puVar15 = puVar15 + 8;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (6 < (uint)((iVar8 + -1) - iVar17)) {
            piVar13 = (int *)(puVar10 + lVar18 * 8 + 0x3f);
            do {
              iVar8 = (int)lVar18;
              piVar13[-0x70] = iVar8;
              piVar13[-0x60] = iVar8 + 1;
              piVar13[-0x50] = iVar8 + 2;
              piVar13[-0x40] = iVar8 + 3;
              piVar13[-0x30] = iVar8 + 4;
              piVar13[-0x20] = iVar8 + 5;
              piVar13[-0x10] = iVar8 + 6;
              *piVar13 = iVar8 + 7;
              lVar18 = lVar18 + 8;
              piVar13 = piVar13 + 0x80;
            } while (iVar8 + 7 != SUB164(auVar5 / auVar3,0) + -1);
          }
        }
      }
      if (param_1[2] != 0) {
        FUN_1005ab5b0(param_1);
        if ((void *)param_1[2] != (void *)0x0) {
          operator_delete__((void *)param_1[2]);
        }
        param_1[2] = 0;
        pvVar1 = (void *)param_1[8];
        if (pvVar1 != (void *)0x0) {
          FUN_1005b51c0(pvVar1,*(undefined8 *)((long)pvVar1 + 8));
          operator_delete(pvVar1);
        }
        param_1[8] = 0;
      }
      param_1[2] = (long)puVar10;
      param_1[8] = (long)plVar11;
      *(uint *)(param_1 + 3) = uVar7;
      *(int *)((long)param_1 + 0x1c) = iVar6;
      iVar8 = 0;
      FUN_1008e3970("","vdisk",0,"Group has %u blocks, maximum count %u",0x1000,0x400);
    }
  }
  return iVar8;
}

