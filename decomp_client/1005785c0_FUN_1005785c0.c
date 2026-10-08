
void FUN_1005785c0(void)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  int iVar7;
  long lVar8;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_com_parallels_toolbox_102271008;
  iVar7 = -1;
  if (PTR_s_com_parallels_toolbox_102271008 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_com_parallels_toolbox_102271008);
    iVar7 = (int)sVar4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar7);
  MacUtils::findAppWithIdentifier(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100578637;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100578637:
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Can\'t open Parallels Toolbox, the application bundle isn\'t found");
    goto LAB_100578784;
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("--show-ui",9);
  local_50 = pQVar5;
  FUN_1000341d0(&local_48,&local_50);
  cVar3 = MacUtils::launchApplication(&local_38,(QStringList *)&local_48.field0,0x10000);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005786b5;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005786b5:
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100578741;
    }
    iVar7 = *(int *)(local_48.field1 + 0xc);
    if (iVar7 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar7 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar7 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar5 == 0) {
LAB_100578720:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar6;
            goto LAB_100578720;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_100578741:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start Parallels Toolbox application");
  }
LAB_100578784:
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

