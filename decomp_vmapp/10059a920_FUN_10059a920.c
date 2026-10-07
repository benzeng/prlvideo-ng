
long * FUN_10059a920(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5,int *param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper(".vmdk",5);
  uVar2 = QString::endsWith(param_1,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059a9a9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10059a9a9:
  plVar4 = operator_new(0x13b8,(nothrow_t *)PTR_nothrow_100ba21c8);
  iVar3 = -0x7ffffffe;
  plVar5 = (long *)0x0;
  if (plVar4 == (long *)0x0) goto LAB_10059ab4b;
  FUN_100568500(plVar4,uVar2);
  iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1,param_2,param_3,param_4,param_5);
  if (iVar3 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error creating disk %s [0x%x]",local_48 + *(long *)(local_48 + 0x10)
                  ,iVar3);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059ab3f;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    pcVar1 = *(code **)(*plVar4 + 0x138);
    local_50 = (QArrayData *)QString::fromAscii_helper("CompatLevel",0xb);
    local_58 = (QArrayData *)QString::fromAscii_helper("level2",6);
    iVar3 = (*pcVar1)(plVar4,&local_50,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059aa77;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10059aa77:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059aaa7;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10059aaa7:
    plVar5 = plVar4;
    if (-1 < iVar3) goto LAB_10059ab4b;
    FUN_1008e3970("","vdisk",0,"Error setting user parameter [0x%x]",iVar3);
  }
LAB_10059ab3f:
  (**(code **)(*plVar4 + 0x10))(plVar4);
  plVar5 = (long *)0x0;
LAB_10059ab4b:
  if (param_6 != (int *)0x0) {
    *param_6 = iVar3;
  }
  return plVar5;
}

