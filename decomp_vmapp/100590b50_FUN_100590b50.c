
int FUN_100590b50(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 local_90 [12];
  undefined4 local_84;
  QString local_80 [2];
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar9;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
  if (((uVar6 & 8) == 0) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))(), (uVar6 & 0x20) == 0)) {
    local_80[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) >> 9) * 8)
                       + (*(ulong *)(param_1 + 0x58) & 0x1ff) * 8);
    iVar4 = (**(code **)(*plVar8 + 0x38))(plVar8,local_90);
    if (iVar4 == 0) {
      QString::operator=((QString *)(param_2 + 6),local_80);
      *param_2 = local_84;
    }
    if (*(int *)local_80[0].field0_0x0 != -1) {
      if (*(int *)local_80[0].field0_0x0 != 0) {
        LOCK();
        *(int *)local_80[0].field0_0x0 = *(int *)local_80[0].field0_0x0 + -1;
        local_69 = *(int *)local_80[0].field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_100590d9a;
      }
      QArrayData::deallocate((QArrayData *)local_80[0].field0_0x0,2,8);
    }
  }
  else {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10) + 0xa0))(&local_48);
    while( true ) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      plVar8 = (long *)0x0;
      if (lVar9 != 0) {
        plVar8 = *(long **)(lVar9 + 0x10);
      }
      local_58 = local_48;
      local_50 = local_40;
      (**(code **)(*plVar8 + 0xb8))(&local_68,plVar8,&local_48,0);
      local_50 = local_60;
      local_58 = local_68;
      cVar3 = FUN_1007ea210(&local_58);
      if (cVar3 != '\0') break;
      local_40 = local_50;
      local_48 = local_58;
    }
    iVar4 = -0x7ffdd000;
    if (*(long **)(param_1 + 0x28) == (long *)0x0) {
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x28);
      plVar8 = (long *)(param_1 + 0x28);
      do {
        while (plVar7 = plVar2, iVar4 = FUN_1007ea6f0(plVar7 + 4,&local_48), iVar4 < 0) {
          plVar2 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) goto LAB_100590ce0;
        }
        plVar8 = plVar7;
        plVar2 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
LAB_100590ce0:
      iVar4 = -0x7ffdd000;
      if (plVar8 == (long *)(param_1 + 0x28)) {
        lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      else {
        iVar5 = FUN_1007ea6f0(&local_48,plVar8 + 4);
        lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (-1 < iVar5) {
          *param_2 = (int)plVar8[6];
          iVar4 = 0;
          QString::operator=((QString *)(param_2 + 6),(QString *)(plVar8 + 7));
        }
      }
    }
  }
LAB_100590d9a:
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_2 + 2) = lVar1;
  *(long *)(param_2 + 4) = *(long *)(param_1 + 0x10) - lVar1;
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

