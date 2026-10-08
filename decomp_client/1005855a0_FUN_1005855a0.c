
void FUN_1005855a0(long *param_1,undefined4 param_2)

{
  QString *pQVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QKeySequence local_70 [8];
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_1005896e0(&local_60,param_1);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_10058566b:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10058566b;
    }
    if (local_40 == 0) goto LAB_10058578d;
  }
  if (local_50 != local_48) {
    do {
      pQVar1 = *(QString **)local_50;
      plVar2 = (long *)*param_1;
      iVar7 = 0;
      if (*(int *)((long)plVar2 + 0x14) != 0) {
        iVar7 = 0;
        if (*(uint *)(plVar2 + 4) != 0) {
          uVar4 = (uint)((ulong)pQVar1 >> 0x1f) ^ (uint)pQVar1 ^ *(uint *)((long)plVar2 + 0x24);
          plVar3 = *(long **)(plVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar2 + 4)) * 8);
          iVar7 = 0;
          if (plVar3 != plVar2) {
            do {
              if ((*(uint *)(plVar3 + 1) == uVar4) && (pQVar1 == (QString *)plVar3[2])) {
                iVar7 = 0;
                if (plVar3 != plVar2) {
                  iVar7 = (int)plVar3[3];
                }
                goto LAB_100585710;
              }
              plVar3 = (long *)*plVar3;
            } while (plVar3 != plVar2);
            iVar7 = 0;
          }
        }
      }
LAB_100585710:
      QKeySequence::QKeySequence(local_70,iVar7,0,0,0);
      FUN_1007170a0(&local_68,local_70,param_2);
      QAbstractButton::setText(pQVar1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100585768;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100585768:
      QKeySequence::~QKeySequence(local_70);
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_10058578d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

