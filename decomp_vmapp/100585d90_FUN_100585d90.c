
QString * FUN_100585d90(QString *param_1,long param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  long *plVar7;
  QFileInfo local_50 [8];
  QTypedArrayData<unsigned_short> *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  cVar4 = FUN_100778a30();
  puVar3 = PTR_shared_null_100ba20d0;
  if (cVar4 != '\0') {
    pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
    param_1->field0_0x0 = pQVar1;
    if (*(int *)pQVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    return param_1;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar2 = *(long *)(*(long *)(param_2 + 0x70) + 8);
  plVar7 = (long *)0x0;
  if (lVar2 != 0) {
    plVar7 = *(long **)(lVar2 + 0x10);
  }
  cVar4 = (**(code **)(*plVar7 + 0x48))(plVar7,&local_38);
  if (cVar4 == '\0') {
    FUN_1008e3970("","vdisk",0,"Error: getting of descriptor file path failed!");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xa40,
                  "GenFullName");
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
    goto LAB_100585f87;
  }
  QFileInfo::QFileInfo(local_50,&local_38);
  QFileInfo::absolutePath();
  uVar5 = QDir::separator();
  local_40.field0_0x0 = local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_29 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_48 + 4);
  if ((1 < *(uint *)local_48) || ((*(uint *)(local_48 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_40.field0_0x0 + 4);
  }
  *(uint *)(local_40.field0_0x0 + 4) = uVar6 + 1;
  *(undefined2 *)
   (local_40.field0_0x0 + (long)(int)uVar6 * 2 + *(long *)(local_40.field0_0x0 + 0x10)) = uVar5;
  *(undefined2 *)
   (local_40.field0_0x0 +
   (long)(int)*(uint *)(local_40.field0_0x0 + 4) * 2 + *(long *)(local_40.field0_0x0 + 0x10)) = 0;
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_29 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100585ee9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100585ee9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100585f19;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
LAB_100585f19:
  QFileInfo::~QFileInfo(local_50);
LAB_100585f87:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

