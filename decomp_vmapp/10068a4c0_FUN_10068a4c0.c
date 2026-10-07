
int FUN_10068a4c0(long *param_1,ulong *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  ulong uVar14;
  
  local_38 = 0;
  if ((param_3 & 2) == 0) {
    pcVar16 = "Create structured image without write access specified";
LAB_10068a56b:
    FUN_1008e3970("","dimg",0,pcVar16);
    return -0x7ffdefef;
  }
  if (*param_2 == 0) {
    pcVar16 = "Error: zero passed as image size!";
    goto LAB_10068a56b;
  }
  if ((int)param_2[1] == 0) {
    pcVar16 = "Error: zero passed as block size!";
    goto LAB_10068a56b;
  }
  if (~*param_2 < (ulong)((int)param_2[1] - 1)) {
    FUN_1008e3970("","dimg",0,"Error: requested capacity too big %llu");
    return -0x7ffdefef;
  }
  lVar1 = *(long *)(*param_1 + -0x18);
  uVar12 = *param_2;
  *(ulong *)(lVar1 + 0x28 + (long)param_1) = param_2[1];
  *(ulong *)(lVar1 + 0x20 + (long)param_1) = uVar12;
  QString::operator=((QString *)(lVar1 + 0x30 + (long)param_1),(QString *)(param_2 + 2));
  *(ulong *)(lVar1 + 0x38 + (long)param_1) = param_2[3];
  iVar5 = (**(code **)(*param_1 + 0x38))(param_1,(QString *)(param_2 + 2),param_3,1);
  if (iVar5 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Create: Error initializing for the %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068abcd;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
    if ((lVar1 == 0x200) || (iVar5 = -0x7ffffffd, lVar1 == 0x1000)) {
      if (param_1[4] != 0) {
        FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_Info",
                      "DiskImageComp.cpp",0xfc,"Create");
      }
      plVar9 = operator_new(0x90,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar9 == (long *)0x0) {
        FUN_1008e3970("","dimg",0,"Error: no memory for CStructInfo");
        return -0x7ffdefe0;
      }
      plVar9[1] = 0x100000004;
      *(undefined4 *)(plVar9 + 2) = 0;
      *(undefined4 *)(plVar9 + 6) = 0;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[3] = 0;
      plVar9[7] = (long)param_1;
      *plVar9 = (long)&PTR_FUN_100bca3a0;
      plVar9[8] = 0;
      *(undefined4 *)(plVar9 + 9) = 0x746f6e59;
      *(undefined8 *)((long)plVar9 + 0x84) = 0;
      *(undefined8 *)((long)plVar9 + 0x7c) = 0;
      *(undefined8 *)((long)plVar9 + 0x74) = 0;
      *(undefined8 *)((long)plVar9 + 0x6c) = 0;
      *(undefined8 *)((long)plVar9 + 100) = 0;
      *(undefined8 *)((long)plVar9 + 0x5c) = 0;
      *(undefined8 *)((long)plVar9 + 0x54) = 0;
      *(undefined8 *)((long)plVar9 + 0x4c) = 0;
      iVar5 = FUN_10068add0(plVar9,*(long *)(*param_1 + -0x18) + 0x20 + (long)param_1);
      if (-1 < iVar5) {
        puVar10 = _valloc(0x100000);
        if (puVar10 == (undefined8 *)0x0) {
          FUN_1008e3970("","dimg",0,"FillBlock Memory allocation failed [%u]",0x100000);
          iVar5 = -0x7ffdefe0;
        }
        else {
          ___bzero(puVar10,0x100000);
          puVar10[7] = *(undefined8 *)((long)plVar9 + 0x84);
          puVar10[6] = *(undefined8 *)((long)plVar9 + 0x7c);
          puVar10[5] = *(undefined8 *)((long)plVar9 + 0x74);
          puVar10[4] = *(undefined8 *)((long)plVar9 + 0x6c);
          puVar10[3] = *(undefined8 *)((long)plVar9 + 100);
          puVar10[2] = *(undefined8 *)((long)plVar9 + 0x5c);
          uVar15 = *(undefined8 *)((long)plVar9 + 0x4c);
          puVar10[1] = *(undefined8 *)((long)plVar9 + 0x54);
          *puVar10 = uVar15;
          lVar1 = plVar9[8];
          lVar11 = FUN_100697940(plVar9);
          uVar12 = FUN_100697940(plVar9);
          uVar20 = 0;
          lVar13 = FUN_100697940(plVar9);
          uVar12 = lVar13 * ((ulong)(lVar1 + -1 + lVar11) / uVar12);
          uVar19 = uVar12 >> 0x14;
          plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
          (**(code **)(*plVar2 + 0x60))(plVar2,0,0);
          uVar18 = (uint)uVar19;
          if (uVar18 != 0) {
            do {
              plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              cVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,puVar10,0x100000,&local_38);
              if (cVar4 == '\0') {
                iVar5 = FUN_100768f60();
                FUN_1008e3970("","dimg",0,"Filling write() failed at step %u with error %d",uVar20,
                              iVar5);
                iVar5 = (uint)(iVar5 != 0x1c) * 5 + -0x7ffdefde;
                goto LAB_10068ab11;
              }
              if (uVar20 == 0) {
                puVar10[7] = 0;
                puVar10[6] = 0;
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[1] = 0;
                *puVar10 = 0;
              }
              uVar14 = (ulong)(uVar20 * 1000) / (uVar19 & 0xffffffff);
              puVar17 = param_4;
              while( true ) {
                pcVar3 = (code *)*puVar17;
                if ((pcVar3 == (code *)0x0) && (puVar17[4] == 0)) goto LAB_10068a8d4;
                iVar5 = (int)uVar14;
                if ((-1 < iVar5) && (1 < *(uint *)(puVar17 + 2))) {
                  iVar7 = *(int *)((long)puVar17 + 0x14);
                  if (iVar5 < *(int *)((long)puVar17 + 0x14)) {
                    *(int *)((long)puVar17 + 0x14) = iVar5;
                    goto LAB_10068a8d4;
                  }
                  *(int *)((long)puVar17 + 0x14) = iVar5;
                  uVar6 = (uint)(iVar5 - iVar7) / *(uint *)(puVar17 + 2) + *(int *)(puVar17 + 3);
                  uVar14 = (ulong)uVar6;
                  *(uint *)(puVar17 + 3) = uVar6;
                }
                if (pcVar3 != (code *)0x0) break;
                puVar17 = (undefined8 *)puVar17[4];
              }
              cVar4 = (*pcVar3)(uVar14,puVar17[1]);
              if (cVar4 == '\0') {
                FUN_1008e3970("","dimg",0,"Interrupting create at step %u",uVar20);
                iVar5 = -0x7ffdefc8;
                goto LAB_10068ab11;
              }
LAB_10068a8d4:
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar18);
          }
          uVar12 = uVar12 & 0xfffff;
          if ((uVar12 == 0) ||
             (plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1),
             cVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,puVar10,uVar12,&local_38), cVar4 != '\0'))
          {
            _free(puVar10);
            if (uVar18 == 0) {
              iVar5 = 1000;
              while( true ) {
                pcVar3 = (code *)*param_4;
                if ((pcVar3 == (code *)0x0) && (param_4[4] == 0)) goto LAB_10068ab22;
                if ((-1 < iVar5) && (1 < *(uint *)(param_4 + 2))) {
                  iVar7 = *(int *)((long)param_4 + 0x14);
                  if (iVar5 < *(int *)((long)param_4 + 0x14)) {
                    *(int *)((long)param_4 + 0x14) = iVar5;
                    goto LAB_10068ab22;
                  }
                  *(int *)((long)param_4 + 0x14) = iVar5;
                  iVar5 = (uint)(iVar5 - iVar7) / *(uint *)(param_4 + 2) + *(int *)(param_4 + 3);
                  *(int *)(param_4 + 3) = iVar5;
                }
                if (pcVar3 != (code *)0x0) break;
                param_4 = (undefined8 *)param_4[4];
              }
              cVar4 = (*pcVar3)(iVar5,param_4[1]);
              if (cVar4 == '\0') {
                FUN_1008e3970("","dimg",0,"Interrupting create at completion");
                iVar5 = -0x7ffdefc8;
                goto LAB_10068abb7;
              }
            }
LAB_10068ab22:
            iVar5 = (**(code **)(*param_1 + 0x28))(param_1);
            if (-1 < iVar5) {
              (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
                        ((long)param_1 + *(long *)(*param_1 + -0x18),plVar9[4]);
              lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
              lVar11 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
              pcVar3 = *(code **)(lVar11 + 0x188);
              uVar15 = (**(code **)(lVar11 + 0x160))(lVar1);
              (*pcVar3)(lVar1,uVar15);
              param_1[4] = (long)plVar9;
              *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 1;
              return 0;
            }
            FUN_1008e3970("","dimg",0,"Error: flush failed, 0x%x",iVar5);
          }
          else {
            uVar8 = FUN_100768f60();
            FUN_1008e3970("","dimg",0,"Filling write() last step failed with error %d",uVar8);
            iVar5 = -0x7ffdefd9;
LAB_10068ab11:
            _free(puVar10);
          }
        }
      }
LAB_10068abb7:
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
LAB_10068abcd:
  (**(code **)(*param_1 + 0x178))(param_1);
  QString::toUtf8();
  iVar7 = _remove((char *)(local_48 + *(long *)(local_48 + 0x10)));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068ac26;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10068ac26:
  if (iVar7 == 0) {
    return iVar5;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_50 + 0x10);
  uVar8 = FUN_100768f60();
  FUN_1008e3970("","dimg",0,"Error: can\'t remove file \'%s\', err %d",local_50 + lVar1,uVar8);
  if (*(int *)local_50 == -1) {
    return iVar5;
  }
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return iVar5;
    }
    local_31 = 0;
  }
  QArrayData::deallocate(local_50,1,8);
  return iVar5;
}

