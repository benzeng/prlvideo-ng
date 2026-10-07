
/* WARNING: Removing unreachable block (ram,0x000100600b73) */
/* WARNING: Removing unreachable block (ram,0x000100600bdb) */

int FUN_100600910(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  QTypedArrayData<unsigned_short> *pQStack_160;
  QFile local_138 [16];
  QString local_128;
  QString local_120;
  QString local_118;
  QString QStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined *local_f8;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [16];
  uint local_78;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_100098d30(local_b0);
  iVar2 = (**(code **)(*(long *)*param_1 + 0x90))((long *)*param_1,local_b0);
  if (-1 < iVar2) {
    local_c0 = *param_2;
    local_b8 = param_2[1];
    (**(code **)(*(long *)*param_1 + 0x130))(local_d0);
    iVar2 = FUN_1007ea6f0(local_d0,&local_c0);
    if (iVar2 == 0) {
      (**(code **)(*(long *)*param_1 + 0x2b0))(&local_e0);
      local_b8 = local_d8;
      local_c0 = local_e0;
    }
    puVar1 = PTR_shared_null_100ba20d0;
    iVar2 = 0;
    if (local_78 != 0) {
      uVar3 = 0;
      auVar4._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar4._0_8_ = PTR_shared_null_100ba20d0;
      auVar4._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      do {
        pQStack_160 = auVar4._8_8_;
        local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
        QStack_110.field0_0x0 = pQStack_160;
        local_108 = 0;
        local_100 = 0;
        local_fc = 0;
        local_f8 = PTR_shared_null_100ba2188;
        FUN_100601990(&local_120,param_1,param_2,uVar3);
        QString::operator=(&local_118,&local_120);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_e1 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_e1) goto LAB_100600abd;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_100600abd:
        FUN_100601990(&local_128,param_1,&local_c0,uVar3);
        QString::operator=(&QStack_110,&local_128);
        if (*(int *)local_128.field0_0x0 != -1) {
          if (*(int *)local_128.field0_0x0 != 0) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
            local_e1 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_e1) goto LAB_100600b25;
          }
          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
        }
LAB_100600b25:
        local_100 = 3;
        local_fc = 0;
        QFile::QFile(local_138,&QStack_110);
        local_108 = QFile::size();
        FUN_100602b40(param_3,&local_118);
        QFile::~QFile(local_138);
        FUN_100603280(&local_118);
        uVar3 = uVar3 + 1;
        iVar2 = 0;
      } while (uVar3 < local_78);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_e1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_e1) goto LAB_100600c14;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100600c14:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_e1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_e1) goto LAB_100600c4a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100600c4a:
  FUN_100098f20(local_88);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

