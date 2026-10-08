
void FUN_100ad7990(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  Data *pDVar8;
  Data *pDVar9;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  QArrayData *local_50;
  Data *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  lVar7 = *param_2;
  iVar1 = *(int *)(lVar7 + 4);
  local_40 = param_3;
  iVar6 = QString::compare_helper(lVar7 + *(long *)(lVar7 + 0x10),iVar1,"--fakestub",0xffffffff,1);
  if (iVar6 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"Fake stub connected, psn{%d;%d}",
                    param_3 & 0xffffffff,param_3 >> 0x20);
    }
    *(ulong *)((long)param_1 + 0xaac) = param_3;
  }
  if (iVar1 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"Interctive(psn) stub connected, psn{%d;%d}",
                    param_3 & 0xffffffff,param_3 >> 0x20);
    }
    *(ulong *)((long)param_1 + 0xab4) = param_3;
  }
  cVar4 = FUN_100acadf0(param_1[2],1);
  if (cVar4 == '\0') {
    return;
  }
  QMutex::lock();
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    return;
  }
  DAT_1023108b0 = DAT_1023108b0 + 1;
  QMutex::unlock();
  if (iVar6 == 0) {
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000aaa10(&local_48,&local_40);
  FUN_100ad3450(&local_50,param_1,param_1 + 0x132);
  FUN_1000abcb0(&local_58,&local_48);
  FUN_100ad31f0(param_1,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad7bb2;
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (iVar2 != *(int *)(local_58 + 8)) {
      lVar7 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_58 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100ad7bb2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad7be2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100ad7be2:
  FUN_1000abcb0(&local_60,&local_48);
  FUN_100ad3ab0(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad7c72;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar7 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_60 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_100ad7c72:
  FUN_1000abcb0(&local_68,&local_48);
  FUN_100ad4000(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad7d02;
    }
    iVar2 = *(int *)(local_68 + 0xc);
    if (iVar2 != *(int *)(local_68 + 8)) {
      lVar7 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_68 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_100ad7d02:
  FUN_100ad9f80(param_1 + 0x138,&local_40);
  local_70 = (Data *)PTR_shared_null_1021e15e8;
  if (iVar1 != 0 && iVar6 != 0) {
    FUN_100adbd80(&local_80,param_1 + 0x20,param_2,param_4);
    FUN_100ad9740(&local_70,&local_80);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ad7dc8;
      }
      QListData::dispose(local_80);
    }
  }
  else {
    FUN_100adc210(&local_78);
    FUN_100ad9740(&local_70,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ad7dc8;
      }
      QListData::dispose(local_78);
    }
  }
LAB_100ad7dc8:
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    pDVar9 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    do {
      lVar7 = *(long *)pDVar9;
      uVar3 = *(undefined8 *)(lVar7 + 0x38);
      if (((((int)((ulong)uVar3 >> 0x20) != local_40._4_4_) || ((int)uVar3 != (int)local_40)) &&
          ((iVar6 != 0 ||
           ((((*(ushort *)(lVar7 + 0x18) & 0x4010) != 0 ||
             (*(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x28) < 0x10)) ||
            (*(int *)(lVar7 + 0x34) - *(int *)(lVar7 + 0x2c) < 0x10)))))) &&
         ((iVar1 != 0 ||
          ((((*(ushort *)(lVar7 + 0x18) & 0x4010) == 0 &&
            (0xf < *(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x28))) &&
           (0xf < *(int *)(lVar7 + 0x34) - *(int *)(lVar7 + 0x2c))))))) {
        if (iVar1 != 0 && iVar6 != 0) {
          if ((*(uint *)(lVar7 + 0x18) & 0x4000) != 0) goto LAB_100ad7f70;
          *(undefined8 *)(lVar7 + 0x40) = uVar3;
          *(ulong *)(lVar7 + 0x38) = local_40;
          if ((*(uint *)(lVar7 + 0x18) & 0x4010) == 0) {
            if (*(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x28) < 0x10) {
              bVar5 = false;
            }
            else {
              bVar5 = 0xf < *(int *)(lVar7 + 0x34) - *(int *)(lVar7 + 0x2c);
            }
          }
          else {
            bVar5 = false;
          }
          FUN_100ace6b0(param_1[0x1f],*(undefined4 *)(lVar7 + 8),bVar5,param_2);
        }
        else {
          *(undefined8 *)(lVar7 + 0x40) = uVar3;
          *(ulong *)(lVar7 + 0x38) = local_40;
        }
        FUN_100ad1890(param_1,lVar7,&local_40);
        if ((*(int *)(lVar7 + 8) == (int)param_1[0x122]) &&
           ((*(char *)(param_1[0x146] + 0x10) != '\0' || (*(char *)((long)param_1 + 0xaa6) != '\0'))
           )) {
          if ((*(ushort *)(lVar7 + 0x18) & 0x4010) == 0) {
            if (*(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x28) < 0x10) {
              bVar5 = false;
            }
            else {
              bVar5 = 0xf < *(int *)(lVar7 + 0x34) - *(int *)(lVar7 + 0x2c);
            }
          }
          else {
            bVar5 = false;
          }
          FUN_100ae31d0(param_1,*(int *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x10),bVar5);
        }
      }
LAB_100ad7f70:
      pDVar9 = pDVar9 + 8;
    } while (pDVar9 != local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad7fac;
    }
    QListData::dispose(local_70);
  }
LAB_100ad7fac:
  pDVar9 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad800f;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_100ad800f:
  FUN_100055290(&DAT_102310898);
  return;
}

