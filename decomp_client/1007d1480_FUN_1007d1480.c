
void FUN_1007d1480(void)

{
  long lVar1;
  int iVar2;
  tm *ptVar3;
  size_t sVar4;
  uint uVar5;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  undefined1 local_109;
  uint *local_108;
  QArrayData *local_100;
  QRegExp local_f8 [8];
  uint *local_f0;
  undefined1 local_e8 [8];
  uint *local_e0;
  ulong local_d8;
  undefined1 local_d0 [8];
  uint *local_c8;
  undefined1 local_b9;
  char local_b8 [128];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_f0 = (uint *)PTR_shared_null_1021e15e8;
  local_38 = lVar1;
  FUN_1007cf850();
  iVar2 = 0;
  if (local_f0[3] != local_f0[2]) {
    local_100 = (QArrayData *)QString::fromAscii_helper("^TOTAL\\((\\d+)\\)$",0x10);
    QRegExp::QRegExp(local_f8,&local_100,1,0);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_b9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_1007d1547;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1007d1547:
    if (1 < *local_f0) {
      FUN_100036c40(&local_f0,local_f0[1]);
    }
    QRegExp::indexIn(local_f8,local_f0 + (long)(int)local_f0[2] * 2 + 4,0,0);
    QRegExp::capturedTexts();
    uVar5 = local_108[2];
    iVar2 = 0;
    if (local_108[3] - uVar5 == 2) {
      if (1 < *local_108) {
        FUN_100036c40(&local_108,local_108[1]);
        uVar5 = local_108[2];
      }
      iVar2 = QString::toInt((bool *)(local_108 + (long)(int)uVar5 * 2 + 6),(int)&local_109);
      if (1 < *local_f0) {
        FUN_100036c40(&local_f0,local_f0[1]);
      }
      local_e0 = local_f0 + (long)(int)local_f0[2] * 2 + 4;
      FUN_1000557c0(local_e8,&local_f0,&local_e0);
    }
    FUN_100039a80(&local_108);
    QRegExp::~QRegExp(local_f8);
  }
  local_d8 = in_stack_00000008 / 1000000;
  ptVar3 = _localtime((time_t *)&local_d8);
  sVar4 = _strftime(local_b8,0x80,"%m-%d %H:%M:%S",ptVar3);
  _snprintf(local_b8 + (int)sVar4,(long)(0x80 - (int)sVar4),".%03d",
            (ulong)(uint)((int)((in_stack_00000008 >> 3) / 0x7d) +
                         (int)((in_stack_00000008 >> 3) / 0x1e848) * -1000));
  local_138 = (QArrayData *)QString::fromAscii_helper("[%1] DT(%2) DOWN(%3) UP(%4)",0x1b);
  sVar4 = _strlen(local_b8);
  local_140 = (QArrayData *)QString::fromAscii_helper(local_b8,(int)sVar4);
  QString::arg(&local_130,&local_138,&local_140,0,0x20);
  QString::arg(&local_128,&local_130,in_stack_00000010,0,10,0x20);
  QString::arg(&local_120,&local_128,in_stack_00000018,0,10,0x20);
  QString::arg(&local_118,&local_120,in_stack_00000020,0,10,0x20);
  FUN_1000341d0(&local_f0,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_b9 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d1806;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1007d1806:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_b9 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d1842;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1007d1842:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_b9 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d187e;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1007d187e:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_b9 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d18ba;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1007d18ba:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_b9 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d18f6;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1007d18f6:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_b9 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d1932;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1007d1932:
  if (0x14 < (int)(local_f0[3] - local_f0[2])) {
    do {
      if (1 < *local_f0) {
        FUN_100036c40(&local_f0,local_f0[1]);
      }
      local_c8 = local_f0 + (long)(int)local_f0[2] * 2 + 4;
      FUN_1000557c0(local_d0,&local_f0,&local_c8);
    } while (0x14 < (int)(local_f0[3] - local_f0[2]));
  }
  local_150 = (QArrayData *)QString::fromAscii_helper("TOTAL(%1)",9);
  QString::arg(&local_148,&local_150,(long)(iVar2 + 1),0,10,0x20);
  FUN_1005d5580(&local_f0,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_b9 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d1a35;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1007d1a35:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_b9 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1007d1a71;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1007d1a71:
  FUN_1007d1d80();
  FUN_100039a80(&local_f0);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

