
undefined1
FUN_100af4d50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  CHwHardDisk *this;
  undefined1 uVar2;
  long lVar3;
  QArrayData *local_90;
  QArrayData *local_88;
  CHwHardDisk *local_80;
  long local_78 [2];
  QArrayData *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  plVar1 = (long *)FUN_100b0ca70(param_3,1,4,&local_38,0);
  if (plVar1 == (long *)0x0) {
    QString::toUtf8();
    FUN_100df99c0("","pvsHostInfo",0,"Error opening disk %s code 0x%x",
                  local_40 + *(long *)(local_40 + 0x10),local_38);
    if (*(int *)local_40 == -1) {
      return 0;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return 0;
  }
  local_58 = &local_50;
  local_48 = 0;
  local_50 = 0;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  (**(code **)(*plVar1 + 0x38))(plVar1,local_78);
  lVar3 = local_60 * local_78[0];
  local_38 = FUN_100b109d0(plVar1,&local_58);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((local_38 < 0) && (local_38 != -0x7ffdef9b)) {
    uVar2 = 0;
    FUN_100df99c0("","pvsHostInfo",0,"Error 0x%x when enumerating partitions");
  }
  else {
    this = operator_new(0xd0,(nothrow_t *)PTR_nothrow_1021e1620);
    if (this == (CHwHardDisk *)0x0) {
      local_80 = (CHwHardDisk *)0x0;
      uVar2 = 0;
      FUN_100df99c0("","pvsHostInfo",0,"Error creating CHwHardDisk!");
    }
    else {
      local_88 = (QArrayData *)*param_2;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      local_90 = (QArrayData *)*param_3;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      CHwHardDisk::CHwHardDisk
                (this,(QTypedArrayData<unsigned_short> *)&local_88,lVar3,local_60,param_4,
                 (QTypedArrayData<unsigned_short> *)&local_90,0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af4f2e;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100af4f2e:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af4f5e;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100af4f5e:
      local_80 = this;
      CHwHardDisk::setRemovable(SUB81(this,0));
      CHwHardDisk::setExternal(SUB81(this,0));
      FUN_100aef1f0(this + 0x98,&local_58,param_3,local_60);
      uVar2 = 1;
      FUN_100af7e20(param_7,&local_80);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af501d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100af501d:
  FUN_100af8270(&local_58,local_50);
  return uVar2;
}

