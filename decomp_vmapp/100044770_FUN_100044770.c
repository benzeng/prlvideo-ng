
undefined1 FUN_100044770(undefined8 param_1,undefined8 param_2,long *param_3,char param_4)

{
  undefined *puVar1;
  Data *pDVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  ulong uVar11;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1000444a0(param_1,&local_40);
  if (param_4 == '\0') {
    uVar4 = FUN_100044b70(param_1,&local_40,param_2,param_3,0);
  }
  else {
    local_48 = (Data *)PTR_shared_null_100ba2188;
    iVar6 = *(int *)(*param_3 + 8);
    iVar5 = *(int *)(*param_3 + 0xc);
    if (iVar6 < iVar5) {
      uVar11 = 0;
      do {
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("SGAH","vm",3,"launchApp: Processing document #%i: \"%s\"",
                        uVar11 & 0xffffffff,local_50 + *(long *)(local_50 + 0x10));
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100044850;
            }
            QArrayData::deallocate(local_50,1,8);
          }
        }
LAB_100044850:
        local_58 = (QArrayData *)puVar1;
        cVar3 = FUN_100044ce0(param_1,*param_3 + 0x10 + ((long)*(int *)(*param_3 + 8) + uVar11) * 8,
                              &local_58);
        iVar7 = 6;
        if (cVar3 != '\0') {
          iVar7 = 0;
          FUN_10000c490(&local_48,&local_58);
        }
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000448b7;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1000448b7:
        iVar6 = *(int *)(*param_3 + 8);
        iVar5 = *(int *)(*param_3 + 0xc);
      } while ((iVar7 == 0) && (uVar11 = uVar11 + 1, (long)uVar11 < (long)(iVar5 - iVar6)));
    }
    if (iVar5 - iVar6 == *(int *)(local_48 + 0xc) - *(int *)(local_48 + 8)) {
      uVar4 = FUN_100044b70(param_1,&local_40,param_2,&local_48,0);
    }
    else {
      uVar4 = FUN_100044b70(param_1,&local_40,param_2,param_3,1);
    }
    pDVar2 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000449d1;
      }
      iVar6 = *(int *)(local_48 + 0xc);
      if (iVar6 != *(int *)(local_48 + 8)) {
        lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar6 * -8;
        pDVar8 = local_48 + (long)iVar6 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_1000449b0:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_1000449b0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_1000449d1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar4;
}

