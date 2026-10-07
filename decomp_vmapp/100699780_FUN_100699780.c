
int FUN_100699780(long *param_1,ulong param_2,ulong *param_3,void *param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  void *local_58;
  QArrayData *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  uVar11 = (ulong)param_5;
  local_38 = 0;
  lVar6 = *param_1;
  lVar8 = param_1[4];
  plVar1 = *(long **)(lVar8 + 0x38);
  uVar10 = (ulong)*(uint *)(lVar8 + 0x10);
  uVar14 = *(uint *)(lVar8 + 0x28);
  uVar12 = (ulong)*(uint *)(lVar8 + 0x30) +
           (ulong)*(uint *)(lVar8 + 0x2c) +
           *(long *)(*(long *)(*plVar1 + -0x18) + 0x38 + (long)plVar1) * uVar10 + (ulong)uVar14;
  iVar9 = (int)(param_2 % uVar10) * *(int *)(*(long *)(lVar6 + -0x18) + 0x38 + (long)param_1);
  local_40 = 0;
  if (uVar10 * *(long *)(*(long *)(*plVar1 + -0x18) + 0x38 + (long)plVar1) <
      (ulong)(iVar9 + param_5)) {
    FUN_1008e3970("","dimg",0,"Oops! Data size larger than new block can receive [%u:%u] ms: %u",
                  iVar9,uVar11,(int)uVar12);
    return -0x7fffffe8;
  }
  iVar13 = (int)uVar12 - param_5;
  if (iVar13 == 0) {
    bVar3 = false;
    local_58 = param_4;
  }
  else {
    QMutex::lock();
    local_58 = (void *)(**(code **)(*param_1 + 0xe8))(param_1);
    if (local_58 == (void *)0x0) {
      FUN_100768f70(0xc);
      iVar9 = -0x7ffffffe;
      goto LAB_100699bf1;
    }
    uVar14 = uVar14 + iVar9;
    uVar10 = (ulong)uVar14;
    ___bzero(local_58,uVar10);
    ___bzero(uVar10 + uVar11 + (long)local_58,iVar13 - uVar14);
    _memcpy((void *)((long)local_58 + uVar10),param_4,uVar11);
    lVar6 = *param_1;
    bVar3 = true;
  }
  lVar6 = (**(code **)(lVar6 + 0x120))(param_1,&local_40);
  if (lVar6 == -1) {
    uVar5 = FUN_100768f60();
    FUN_1008e3970("","dimg",0,"GetNewBlockOffset failed. %u",uVar5);
    iVar9 = -0x7ffdefaa;
  }
  else {
    lVar8 = *param_1;
    uVar7 = (ulong)*(uint *)(param_1[4] + 0x28) + lVar6;
    lVar2 = *(long *)(lVar8 + -0x18);
    uVar10 = *(ulong *)(lVar2 + 0x38 + (long)param_1);
    *param_3 = uVar7 / uVar10;
    lVar8 = *(long *)(lVar8 + -0x18);
    cVar4 = (**(code **)(*(long *)((long)param_1 + lVar8) + 0x150))
                      ((long)param_1 + lVar8,lVar2,uVar7 % uVar10);
    if (cVar4 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Disk \"%s\" is not opened, can\'t create new block. [%p]",
                    local_48 + *(long *)(local_48 + 0x10),
                    *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100699b0d;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100699b0d:
      FUN_100768f70(0xe);
      iVar9 = -0x7ffdefdf;
    }
    else {
      lVar8 = param_1[4];
      if (*(int *)(lVar8 + 0x28) == 0) {
LAB_10069995a:
        if (*(int *)(lVar8 + 0x2c) != 0) {
          iVar13 = (**(code **)(*param_1 + 0x130))
                             (param_1,(ulong)*(uint *)(lVar8 + 0x10) *
                                      *(long *)(*(long *)(**(long **)(lVar8 + 0x38) + -0x18) + 0x38
                                               + (long)*(long **)(lVar8 + 0x38)) +
                                      (ulong)*(uint *)(lVar8 + 0x28) + param_1[1]);
          if (iVar13 < 0) goto LAB_100699bd9;
          lVar8 = param_1[4];
        }
        if ((*(int *)(lVar8 + 0x30) == 0) ||
           (iVar13 = (**(code **)(*param_1 + 0x138))
                               (param_1,(ulong)*(uint *)(lVar8 + 0x2c) +
                                        (ulong)*(uint *)(lVar8 + 0x10) *
                                        *(long *)(*(long *)(**(long **)(lVar8 + 0x38) + -0x18) +
                                                  0x38 + (long)*(long **)(lVar8 + 0x38)) +
                                        (ulong)*(uint *)(lVar8 + 0x28) + param_1[1]), -1 < iVar13))
        {
          plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
          cVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,local_58,uVar12 & 0xffffffff,&local_38,lVar6)
          ;
          if (cVar4 == '\0') {
            uVar5 = FUN_100768f60();
            FUN_1008e3970("","dimg",0,"New block allocation failed. [Offset %llu, Size %u] Error %u"
                          ,param_2,uVar11,uVar5);
            iVar9 = (**(code **)(*param_1 + 0x110))(param_1);
            if (iVar9 < 0) {
              FUN_1008e3970("","dimg",0,"Block rollback failed: 0x%x",iVar9);
              (**(code **)(*param_1 + 0xf0))();
            }
            FUN_100768f70(uVar5);
            iVar9 = -0x7ffdefd9;
          }
          else {
            (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x188))
                      ((long)param_1 + *(long *)(*param_1 + -0x18),(uVar12 & 0xffffffff) + lVar6);
            iVar13 = (**(code **)(*param_1 + 0x58))
                               (param_1,param_2 / *(uint *)(param_1[4] + 0x10) & 0xffffffff,local_40
                               );
            if (iVar13 < 0) {
              (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x188))
                        ((long)param_1 + *(long *)(*param_1 + -0x18),lVar6);
              goto LAB_100699bd9;
            }
            iVar9 = -0x7ffdefdd;
            if (lVar6 + 0x3200000U <= (ulong)param_1[6]) {
              iVar9 = iVar13;
            }
          }
          goto LAB_100699be5;
        }
      }
      else {
        iVar13 = (**(code **)(*param_1 + 0x128))(param_1,param_1[1]);
        if (-1 < iVar13) {
          lVar8 = param_1[4];
          goto LAB_10069995a;
        }
      }
LAB_100699bd9:
      (**(code **)(*param_1 + 0xf0))(param_1);
      iVar9 = iVar13;
    }
  }
LAB_100699be5:
  if (!bVar3) {
    return iVar9;
  }
LAB_100699bf1:
  QMutex::unlock();
  return iVar9;
}

