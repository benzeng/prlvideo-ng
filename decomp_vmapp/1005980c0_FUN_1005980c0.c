
int FUN_1005980c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  local_38 = lVar9;
  FUN_100584e90();
  uVar4 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
  iVar5 = FUN_100597910(param_1,param_2,uVar4 & 0xfffffffb);
  if (iVar5 < 0) {
    FUN_1007d6a70(&local_70,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Can\'t open image with uid %s. Error 0x%x",
                  local_68 + *(long *)(local_68 + 0x10),iVar5);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_59 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_10059823b;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10059823b:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_59 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_10059846e;
      }
      QArrayData::deallocate(local_70,2,8);
    }
    goto LAB_10059846e;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10);
  (**(code **)(*plVar10 + 0xb8))(&local_48,plVar10,param_2,0);
  while (cVar3 = FUN_1007ea210(&local_48), cVar3 == '\0') {
    iVar5 = FUN_100597910(param_1,&local_48,uVar4 & 0xfffffff9);
    if (iVar5 < 0) {
      FUN_1007d6a70(&local_80,&local_48);
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Can\'t open image with uid %s. Error 0x%x",
                    local_78 + *(long *)(local_78 + 0x10),iVar5);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_59 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_100598351;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_100598351:
      if (*(int *)local_80 == -1) goto LAB_10059846e;
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_59 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_10059846e;
      }
      QArrayData::deallocate(local_80,2,8);
      goto LAB_10059846e;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    plVar10 = (long *)0x0;
    if (lVar9 != 0) {
      plVar10 = *(long **)(lVar9 + 0x10);
    }
    (**(code **)(*plVar10 + 0xb8))(&local_58,plVar10,&local_48,0);
    local_40 = local_50;
    local_48 = local_58;
  }
  plVar10 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x28);
  plVar8 = plVar10;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_1005983b1:
    plVar8 = plVar10;
  }
  else {
    do {
      while (plVar7 = plVar2, iVar5 = FUN_1007ea6f0(plVar7 + 4,param_2), iVar5 < 0) {
        plVar2 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) goto LAB_10059839c;
      }
      plVar8 = plVar7;
      plVar2 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_10059839c:
    if ((plVar8 == plVar10) || (iVar5 = FUN_1007ea6f0(param_2,plVar8 + 4), iVar5 < 0))
    goto LAB_1005983b1;
  }
  FUN_100585d90(&local_88,param_1,plVar8 + 7);
  QString::operator=((QString *)(param_1 + 0x80),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_59 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10059840c;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10059840c:
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  iVar5 = (int)*(undefined8 *)(param_1 + 0x60);
  if (iVar5 != 0) {
    lVar9 = 0;
    do {
      uVar6 = *(long *)(param_1 + 0x58) + lVar9;
      plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar6 >> 9) * 8) +
                          (uVar6 & 0x1ff) * 8);
      (**(code **)(*plVar10 + 0x58))(plVar10,uVar1);
      lVar9 = lVar9 + 1;
    } while (iVar5 != (int)lVar9);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  iVar5 = 0;
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10059846e:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

