
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100dbfc70(undefined8 *param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  undefined *local_110;
  QArrayData *local_108;
  undefined1 local_100 [120];
  QArrayData *local_88;
  long local_78 [2];
  QArrayData *local_68;
  QString local_60;
  size_t local_58;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_49 = '\0';
  local_38 = lVar6;
  iVar1 = FUN_100dfb040(&local_49);
  if ((iVar1 == 0) && (local_49 != '\0')) {
    local_48 = _DAT_101db3930;
    uStack_40 = _UNK_101db3938;
    local_58 = 0x288000;
    pvVar2 = operator_new__(0x66840000);
    iVar1 = _sysctl((int *)&local_48,3,pvVar2,&local_58,(void *)0x0,0);
    if (iVar1 < 0) {
      operator_delete__(pvVar2);
      uVar4 = QString::fromAscii_helper("",0);
      *param_1 = uVar4;
      goto LAB_100dc00bd;
    }
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("\n",1);
    FUN_100dba8d0(&local_68);
    QString::append(&local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dbfd5d;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100dbfd5d:
    FUN_100dba790(local_78);
    if (0x287 < local_58) {
      uVar5 = 0;
      pvVar7 = pvVar2;
      do {
        FUN_100dbf770(local_100,pvVar7,local_78);
        FUN_100dbc140(&local_108,local_100);
        QString::append(&local_60);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_49 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100dbfdfb;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100dbfdfb:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_49 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100dbfe2b;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100dbfe2b:
        uVar5 = uVar5 + 1;
        pvVar7 = (void *)((long)pvVar7 + 0x288);
      } while (uVar5 < local_58 / 0x288);
    }
    operator_delete__(pvVar2);
    *param_1 = local_60.field0_0x0;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_49 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (local_78[0] != 0) {
      _dlclose();
    }
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_49 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc00bd;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
    goto LAB_100dc00bd;
  }
  local_110 = PTR_shared_null_1021e15e8;
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("ps aux",6);
  local_120 = pQVar3;
  FUN_1000341d0(&local_110,&local_120);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_49 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dbff4d;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100dbff4d:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("top -i 1 -l 3 -o cpu -S -d",0x1a);
  local_128 = pQVar3;
  FUN_1000341d0(&local_110,&local_128);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_49 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dbffa6;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100dbffa6:
  if (param_2 != '\0') {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("lsof",4);
    local_130 = pQVar3;
    FUN_1000341d0(&local_110,&local_130);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_49 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc0004;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
LAB_100dc0004:
  FUN_100dc0360(&local_138,&local_110);
  QString::append(&local_118);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_49 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dc0060;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100dc0060:
  *param_1 = local_118.field0_0x0;
  if (1 < *(int *)local_118.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
    local_49 = *(int *)local_118.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_49 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dc00b1;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100dc00b1:
  FUN_100039a80(&local_110);
LAB_100dc00bd:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

