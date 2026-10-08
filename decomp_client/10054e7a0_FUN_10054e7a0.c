
void FUN_10054e7a0(void)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  size_t sVar4;
  Data *pDVar5;
  int iVar6;
  QArrayData *pQVar7;
  long lVar8;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_com_parallels_mobile_102271000;
  iVar6 = -1;
  if (PTR_s_com_parallels_mobile_102271000 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_com_parallels_mobile_102271000);
    iVar6 = (int)sVar4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  MacUtils::findAppWithIdentifier(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054e817;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10054e817:
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Can\'t open Parallels Access agent, the application bundle isn\'t found");
    goto LAB_10054e914;
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  cVar3 = MacUtils::launchApplication(&local_38,(QStringList *)&local_48.field0,0x10000);
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054e8d1;
    }
    iVar6 = *(int *)(local_48.field1 + 0xc);
    if (iVar6 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar6 * -8;
      pDVar5 = (Data *)(local_48.field1 + (long)iVar6 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_10054e8b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_10054e8b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_10054e8d1:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start Parallels Access application");
  }
LAB_10054e914:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

