
int FUN_10056b1c0(long *param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  long local_68;
  QArrayData *local_60;
  undefined1 local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar1 = (long *)param_1[0x225];
  plVar2 = (long *)param_1[0x226];
  local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_78 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_10059f090(param_3);
  param_3[1] = *(undefined4 *)((long)param_1 + 0x1144);
  *param_3 = *(undefined4 *)((long)param_1 + 0x114c);
  param_3[2] = (int)param_1[0x229];
  param_3[7] = *(undefined4 *)((long)param_1 + 0x115c);
  *(long *)(param_3 + 8) = param_1[0x22c];
  lVar9 = param_1[0x22a];
  if ((int)param_1[0x224] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x388))(param_1);
    lVar9 = lVar9 - (ulong)uVar4;
  }
  *(long *)(param_3 + 4) = lVar9;
  param_3[0x10] = (int)param_1[0x22b];
  plVar8 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar8 = *(long **)(param_1[1] + 0x10);
  }
  (**(code **)(*plVar8 + 0xd8))(&local_48);
  *(undefined8 *)(param_3 + 0x13) = local_40;
  *(undefined8 *)(param_3 + 0x11) = local_48;
  QString::operator=((QString *)(param_3 + 0x1c),(QString *)(param_1 + 0x23e));
  uVar3 = *(undefined8 *)((long)param_1 + 0x11d9);
  *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)((long)param_1 + 0x11e1);
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  if (plVar1 == plVar2) {
    param_3[6] = 0;
    iVar6 = 0;
  }
  else {
    uVar5 = (**(code **)(*(long *)*plVar1 + 0x28))();
    param_3[6] = uVar5;
    plVar8 = (long *)(param_3 + 10);
    iVar6 = 0;
    do {
      lVar9 = *plVar1;
      if (lVar9 != 0) {
        if (param_2 == 0) {
          iVar6 = FUN_100590b50(lVar9,&local_78);
        }
        else {
          iVar6 = FUN_100590a20(lVar9,&local_78);
        }
        plVar7 = operator_new(0x38);
        plVar7[4] = local_68;
        plVar7[3] = local_70;
        plVar7[2] = CONCAT44(uStack_74,local_78);
        plVar7[5] = (long)local_60;
        if (1 < *(int *)local_60 + 1U) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_49 = *(int *)local_60 != 0;
          UNLOCK();
        }
        *(undefined1 *)(plVar7 + 6) = local_58;
        plVar7[1] = (long)plVar8;
        lVar9 = *plVar8;
        *plVar7 = lVar9;
        *(long **)(lVar9 + 8) = plVar7;
        *plVar8 = (long)plVar7;
        *(long *)(param_3 + 0xe) = *(long *)(param_3 + 0xe) + 1;
      }
    } while ((plVar2 != plVar1 + 1) && (plVar1 = plVar1 + 1, -1 < iVar6));
  }
  if (*(long *)(param_3 + 0xe) == 0) {
    iVar6 = -0x7ffdeff9;
    FUN_1008e3970("","vdisk",0,"The storages size is 0");
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10056b445;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10056b445:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

