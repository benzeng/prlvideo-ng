
int FUN_10068b3f0(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  iVar3 = (**(code **)(*param_1 + 0x38))();
  if (iVar3 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Error initializing for the %s",local_40 + *(long *)(local_40 + 0x10))
    ;
    if (*(int *)local_40 == -1) {
      return iVar3;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return iVar3;
  }
  if (param_1[4] != 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_Info",
                  "DiskImageComp.cpp",CONCAT44(uVar9,0x1da),"Open");
  }
  plVar5 = operator_new(0x90,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    FUN_1008e3970("","dimg",0,"Error: no memory for CStructInfo");
    return -0x7ffdefe0;
  }
  plVar5[1] = 0x100000004;
  *(undefined4 *)(plVar5 + 2) = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[7] = (long)param_1;
  *plVar5 = (long)&PTR_FUN_100bca3a0;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 9) = 0x746f6e59;
  *(undefined8 *)((long)plVar5 + 0x84) = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined8 *)((long)plVar5 + 0x74) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0;
  *(undefined8 *)((long)plVar5 + 100) = 0;
  *(undefined8 *)((long)plVar5 + 0x5c) = 0;
  *(undefined8 *)((long)plVar5 + 0x54) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  param_1[4] = (long)plVar5;
  iVar3 = FUN_100693060(plVar5);
  iVar4 = -0x7ffdefd7;
  if (iVar3 < 0) goto LAB_10068b8d5;
  (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
            ((long)param_1 + *(long *)(*param_1 + -0x18),plVar5[4]);
  lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar1 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  pcVar2 = *(code **)(lVar1 + 0x188);
  uVar6 = (**(code **)(lVar1 + 0x160))(lVar7);
  (*pcVar2)(lVar7,uVar6);
  uVar8 = *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) * plVar5[0xe] +
          *(long *)(*(long *)(*param_1 + -0x18) + 0x50 + (long)param_1);
  iVar3 = FUN_1007da520("devices.hdd.cbt",0);
  if (iVar3 != 0) {
    iVar4 = FUN_10068b150(param_1);
    if (iVar4 < 0) goto LAB_10068b8d5;
    lVar7 = FUN_1006a7690(param_1[0x3020]);
    uVar8 = uVar8 + lVar7;
  }
  if (((param_3 & 0x400) != 0) ||
     (((int)plVar5[0xf] != 0x746f6e59 &&
      (*(ulong *)(*(long *)(*param_1 + -0x18) + 0x58 + (long)param_1) <= uVar8))))
  goto LAB_10068b83d;
  if ((param_3 & 2) == 0) {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Image %s was incorrectly closed, but is opened as readonly",
                  local_48 + *(long *)(local_48 + 0x10));
    iVar4 = -0x7ffdefb9;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068b8d5;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_10068b8d5;
  }
  FUN_1008e3970("","dimg",0,"Image was incorrectly closed!!");
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  iVar4 = (**(code **)(*param_1 + 0x198))
                    (param_1,6,&local_4c,&local_50,&local_54,&local_58,&DAT_1011bcc30);
  if (iVar4 < 0) {
    FUN_1008e3970("","dimg",0,"Error at checking disk consistency");
    goto LAB_10068b8d5;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  uVar6 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  QString::toUtf8();
  FUN_1008e3970("","dimg",0,"Disk size after check is %llu. Path %s",uVar6,
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068b83d;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10068b83d:
  *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 1;
  if ((param_3 & 2) == 0) {
    if ((*(byte *)(plVar5 + 0x10) & 1) == 0) {
      return 0;
    }
    (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x28))();
    return 0;
  }
  *(undefined4 *)(plVar5 + 0xf) = 0x746f6e59;
  iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (-1 < iVar3) {
    return 0;
  }
  FUN_1008e3970("","dimg",0,"m_Header.m_DiskInUse = 0x%X write failed",(int)plVar5[0xf]);
  FUN_1008e3970("","dimg",0,"Header write failed %x",iVar3);
  iVar4 = -0x7ffdefd9;
LAB_10068b8d5:
  (**(code **)(*(long *)param_1[4] + 0x10))();
  (**(code **)(*param_1 + 0x178))(param_1);
  return iVar4;
}

