
undefined8
FUN_1000d5740(long param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  QArrayData *local_a8;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_5f;
  undefined8 local_57;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_88[0] = (byte)(param_2 >> 0x1a) & 1;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 1;
  local_60 = 0;
  FUN_1007d6870(&local_5f);
  local_48._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_48._0_8_ = PTR_shared_null_100ba20d0;
  local_48._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_80 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x1940) + 0x60);
  local_70 = param_7;
  local_68 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x1940) + 0xf8);
  local_78 = param_6;
  cVar1 = FUN_1000b2290();
  if (cVar1 != '\0') {
    local_60 = 1;
    FUN_1000b2920(&local_98,*(undefined8 *)(param_1 + 0x18));
    local_57 = local_90;
    local_5f = local_98;
    FUN_1000b26c0(&local_a8,*(undefined8 *)(param_1 + 0x18));
    QByteArray::operator=((QByteArray *)local_48,(QByteArray *)&local_a8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_99 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1000d5889;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_1000d5889:
    QByteArray::operator=((QByteArray *)(local_48 + 8),"1jwwh1kjxhqw4yr83cwjehc8q4f");
  }
  cVar1 = FUN_100554900(param_1 + 0x20,param_3,(param_4 & 0xffffffff) << 0x14,
                        (param_5 & 0xffffffff) << 0x14,local_88);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0x80020000;
  }
  else {
    *(int *)(param_1 + 0x10) = (int)param_2;
  }
  if (*(int *)local_48._8_8_ != -1) {
    if (*(int *)local_48._8_8_ != 0) {
      LOCK();
      *(int *)local_48._8_8_ = *(int *)local_48._8_8_ + -1;
      local_99 = *(int *)local_48._8_8_ != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1000d590b;
    }
    QArrayData::deallocate((QArrayData *)local_48._8_8_,1,8);
  }
LAB_1000d590b:
  if (*(int *)local_48._0_8_ != -1) {
    if (*(int *)local_48._0_8_ != 0) {
      LOCK();
      *(int *)local_48._0_8_ = *(int *)local_48._0_8_ + -1;
      local_99 = *(int *)local_48._0_8_ != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1000d5941;
    }
    QArrayData::deallocate((QArrayData *)local_48._0_8_,1,8);
  }
LAB_1000d5941:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),cVar1 != '\0');
}

