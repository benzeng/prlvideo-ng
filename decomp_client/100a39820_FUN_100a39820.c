
void FUN_100a39820(int param_1,long *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int local_58 [2];
  QArrayData *local_50;
  undefined4 local_48;
  int *local_40;
  undefined1 local_31;
  
  lVar3 = DAT_1023112a8;
  if (DAT_1023112a8 != 0) {
    local_40 = (int *)PTR_shared_null_1021e15e8;
    lVar1 = *param_2;
    if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
      puVar6 = (undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
      do {
        pQVar2 = (QArrayData *)*puVar6;
        iVar4 = *(int *)pQVar2;
        if (1 < iVar4 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          iVar4 = *(int *)pQVar2;
        }
        if (1 < iVar4 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        local_48 = 0;
        local_58[0] = param_1;
        local_50 = pQVar2;
        FUN_100a3f200(&local_40,local_58);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 == 0) {
LAB_100a398cb:
            QArrayData::deallocate(pQVar2,2,8);
          }
          else {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_100a398cb;
          }
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_31 = *(int *)pQVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a39910;
            }
            QArrayData::deallocate(pQVar2,2,8);
          }
        }
LAB_100a39910:
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
    }
    if (param_1 == 1) {
      if (DAT_102310a08 == (void *)0x0) {
        pvVar5 = operator_new(0x220);
        FUN_1007cc3f0(pvVar5);
        DAT_102273890 = 1;
        DAT_102310a08 = pvVar5;
      }
      FUN_1007d5010(DAT_102310a08);
    }
    else if (param_1 == 0) {
      if (DAT_102310a08 == (void *)0x0) {
        pvVar5 = operator_new(0x220);
        FUN_1007cc3f0(pvVar5);
        DAT_102273890 = 1;
        DAT_102310a08 = pvVar5;
      }
      FUN_1007d4bf0(DAT_102310a08);
    }
    FUN_100a39180(lVar3,&local_40);
    if (*local_40 != -1) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 + -1;
        UNLOCK();
        if (*local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      FUN_100a3fda0(&local_40,local_40);
    }
  }
  return;
}

