
undefined4 FUN_1004cfa70(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_8c;
  QString local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  undefined4 local_68;
  undefined1 local_59;
  uint local_58;
  uint local_54;
  undefined2 local_50;
  undefined8 local_4e;
  undefined4 local_46;
  undefined2 local_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  uVar1 = *(uint *)(param_2 + 8);
  FUN_1004d6ff0(&local_80,param_1 + 8);
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  if (local_80[2] != local_80[3]) {
    lVar9 = 0;
    do {
      local_68 = 1;
      plVar7 = *(long **)local_78;
      lVar3 = *plVar7;
      local_54 = (uint)*(byte *)(lVar3 + 0x30);
      if (*(char *)(lVar3 + 0x32) != '\0') {
        local_54 = local_54 | 2;
      }
      if (*(char *)(lVar3 + 0x33) != '\0') {
        local_54 = local_54 | 4;
      }
      if (*(char *)(lVar3 + 0x34) != '\0') {
        local_54 = local_54 | 8;
      }
      if (*(char *)(lVar3 + 0x31) != '\0') {
        local_54 = local_54 | 0x10;
      }
      if (*(char *)(lVar3 + 0x35) != '\0') {
        local_54 = local_54 | 0x20;
      }
      if (((param_3 & local_54) != 0) && (cVar4 = FUN_1004d84c0(), cVar4 != '\0')) {
        lVar3 = *(long *)(*plVar7 + 0x80);
        plVar7 = (long *)0x0;
        if (lVar3 != 0) {
          plVar7 = *(long **)(lVar3 + 0x10);
        }
        local_50 = (**(code **)(*plVar7 + 0x10))();
        QString::toUtf8_helper(&local_88);
        iVar2 = *(int *)(local_88.field0_0x0 + 4);
        iVar5 = -(iVar2 + 0x19U & 3);
        uVar8 = (ulong)(iVar5 + 4);
        local_58 = iVar5 + 0x1d + iVar2;
        local_42 = 0;
        local_46 = 0;
        local_4e = 0;
        iVar5 = 2;
        if ((ulong)local_58 + lVar9 <= (ulong)uVar1) {
          FUN_1002a5a50(param_2,lVar9,&local_58,0x18);
          FUN_1002a5a50(param_2,lVar9 + 0x18,
                        (QArrayData *)(local_88.field0_0x0 + *(long *)(local_88.field0_0x0 + 0x10)),
                        (long)iVar2 + 1U & 0xffffffff);
          lVar9 = (long)iVar2 + 1U + lVar9 + 0x18;
          local_8c = 0;
          FUN_1002a5a50(param_2,lVar9,&local_8c,uVar8);
          lVar9 = uVar8 + lVar9;
          *(int *)(param_2 + 0x10) = (int)lVar9;
          iVar5 = 0;
        }
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_59 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1004cfc73;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,1,8);
        }
LAB_1004cfc73:
        if (iVar5 != 0) goto LAB_1004cfc99;
      }
      local_78 = local_78 + 2;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  iVar5 = 3;
LAB_1004cfc99:
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_59 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1004cfccd;
    }
    FUN_1004d6ab0(&local_80,local_80);
  }
LAB_1004cfccd:
  uVar6 = 0xf0000009;
  if (iVar5 == 3) {
    uVar6 = 0;
  }
  QMutex::unlock();
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

