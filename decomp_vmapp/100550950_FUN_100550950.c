
undefined1 FUN_100550950(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  QArrayData *local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  long local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_4f;
  undefined8 local_47;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::open_existing() started");
  local_78[0] = 0;
  local_60 = 0;
  local_68 = (code *)0x0;
  local_70 = 0;
  local_58 = 1;
  local_50 = 0;
  FUN_1007d6870(&local_4f);
  local_38._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_38._0_8_ = PTR_shared_null_100ba20d0;
  local_38._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_68 = FUN_100550ca0;
  pcVar2 = *(char **)(param_1 + 0x18);
  local_70 = param_2;
  local_60 = param_1;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    local_50 = 1;
    local_4f = *(undefined8 *)(pcVar2 + 1);
    local_47 = *(undefined8 *)(pcVar2 + 9);
    QByteArray::operator=((QByteArray *)local_38,(QByteArray *)(pcVar2 + 0x18));
    QByteArray::operator=
              ((QByteArray *)(local_38 + 8),(QByteArray *)(*(long *)(param_1 + 0x18) + 0x20));
  }
  cVar3 = FUN_100554900(param_1 + 0x30,param_1,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),local_78);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"open_existing(%s) failed",local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 == -1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        if (*(int *)local_88 != 0) {
          uVar4 = 0;
          goto LAB_100550ad6;
        }
      }
      QArrayData::deallocate(local_88,1,8);
      uVar4 = 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = 1;
    FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::open_existing() done");
  }
LAB_100550ad6:
  if (*(int *)local_38._8_8_ != -1) {
    if (*(int *)local_38._8_8_ != 0) {
      LOCK();
      *(int *)local_38._8_8_ = *(int *)local_38._8_8_ + -1;
      UNLOCK();
      if (*(int *)local_38._8_8_ != 0) goto LAB_100550b06;
    }
    QArrayData::deallocate((QArrayData *)local_38._8_8_,1,8);
  }
LAB_100550b06:
  if (*(int *)local_38._0_8_ != -1) {
    if (*(int *)local_38._0_8_ != 0) {
      LOCK();
      *(int *)local_38._0_8_ = *(int *)local_38._0_8_ + -1;
      UNLOCK();
      if (*(int *)local_38._0_8_ != 0) goto LAB_100550b36;
    }
    QArrayData::deallocate((QArrayData *)local_38._0_8_,1,8);
  }
LAB_100550b36:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

