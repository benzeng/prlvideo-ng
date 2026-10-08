
void FUN_100678090(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined *local_140;
  undefined1 local_138 [88];
  undefined1 local_e0 [40];
  QArrayData *local_b8;
  char local_b0 [64];
  QArrayData *local_70;
  char local_68 [71];
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  uVar5 = FUN_10016f500();
  if (param_2 != 8) {
    if (param_2 == 7) {
      iVar4 = CAbstractWizardModel::currentPageId();
      if (iVar4 == 2) {
        uVar7 = 1;
        uVar5 = 1;
      }
      else {
        iVar4 = CAbstractWizardModel::currentPageId();
        if (iVar4 != 10) {
          iVar4 = CAbstractWizardModel::currentPageId();
          if (iVar4 != 0xc) {
            iVar4 = CAbstractWizardModel::currentPageId();
            if (iVar4 != 1) {
              uVar8 = 0x23c;
              goto LAB_1006784d0;
            }
            cVar3 = FUN_10061b4d0(uVar5,0x8000);
            if (cVar3 != '\0') {
              FUN_100678a70(param_1);
              return;
            }
            if (*(char *)(param_1 + 0x160) != '\0') {
              FUN_100678b80(param_1);
              return;
            }
          }
          goto LAB_10067853a;
        }
        uVar7 = 0xc;
        uVar5 = 0;
      }
      CAbstractWizardModel::goToPage(param_1,uVar7,uVar5);
      return;
    }
    if (param_2 != 6) {
      return;
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if (iVar4 == 0xc) {
      if ((((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
          (*(long *)(param_1 + 0x60) != 0)) && (cVar3 = FUN_10061b4d0(uVar5,0x80), cVar3 == '\0')) {
        uVar5 = FUN_100748240();
        local_70 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
        uVar5 = FUN_100748290(uVar5,&local_70);
        FUN_100746ae0(local_68,uVar5);
        FUN_10012ac30(local_68);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100678251;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100678251:
        if (local_68[0] == '\0') {
LAB_100678556:
          CAbstractWizardModel::goToPage(param_1,7,0);
          goto LAB_100678565;
        }
      }
      uVar5 = 4;
      goto LAB_10067825e;
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if ((iVar4 == 1) || (iVar4 = CAbstractWizardModel::currentPageId(), iVar4 == 10)) {
      cVar3 = FUN_10061b4d0(uVar5,0x8080);
      lVar1 = *(long *)(param_1 + 0x58);
      if (cVar3 == '\0') {
        if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
           ((*(long *)(param_1 + 0x60) != 0 &&
            ((*(char *)(param_1 + 0x160) == '\0' &&
             (cVar3 = FUN_10061b4d0(uVar5,0x80), cVar3 == '\0')))))) {
          uVar5 = FUN_100748240();
          local_b8 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
          uVar5 = FUN_100748290(uVar5,&local_b8);
          FUN_100746ae0(local_b0,uVar5);
          FUN_10012ac30(local_b0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_21 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_10067848b;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_10067848b:
          if (local_b0[0] == '\0') goto LAB_100678556;
        }
        iVar4 = CAbstractWizardModel::currentPageId();
        if (iVar4 == 1) {
          if (*(char *)(param_1 + 0x160) == '\0') {
            uVar5 = 0;
LAB_10067825e:
            uVar7 = 0;
          }
          else {
            uVar5 = 1;
            uVar7 = 2;
          }
          FUN_1006085d0(uVar5,uVar7);
        }
        else {
          iVar4 = CAbstractWizardModel::currentPageId();
          if (iVar4 == 10) {
            uVar5 = 2;
            goto LAB_10067825e;
          }
        }
      }
      else if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) && (*(long *)(param_1 + 0x60) != 0)) {
        CContentModel::setBusy(SUB81(param_1,0));
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x60);
        }
        uVar7 = FUN_10016f500(uVar7);
        FUN_10068bc30(uVar5,uVar7);
      }
    }
LAB_100678565:
    iVar4 = CAbstractWizardModel::currentPageId();
    if ((iVar4 == 2) && (*(char *)(param_1 + 0x15d) == '\0')) {
      *(undefined1 *)(param_1 + 0x15d) = 1;
      CAbstractWizardModel::finished((int)param_1);
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if (iVar4 == 3) {
      *(undefined1 *)(param_1 + 0x160) = 1;
      *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
      CAbstractWizardModel::goToPage(param_1,1,0);
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if (iVar4 != 0xb) {
      return;
    }
    uVar6 = *(undefined1 *)(param_1 + 0x15e);
    uVar5 = 3;
    goto LAB_1006785d7;
  }
  iVar4 = CAbstractWizardModel::currentPageId();
  puVar2 = PTR_shared_null_1021e1288;
  if (iVar4 != 0xc) {
    iVar4 = CAbstractWizardModel::currentPageId();
    if (iVar4 == 1) {
      FUN_100678c60(param_1);
      return;
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if (iVar4 != 10) {
      uVar8 = 0x250;
LAB_1006784d0:
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                    "License/WizardEngine/CLicenseWizardModel.cpp",uVar8,"onCustomButtonClicked");
      return;
    }
LAB_10067853a:
    FUN_100678780(param_1);
    return;
  }
  local_140 = PTR_shared_null_1021e1288;
  FUN_1002f6080(local_138,&local_140);
  FUN_100675fb0(param_1,local_138);
  FUN_100252c80(local_e0);
  FUN_100252e70(local_138);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100678187;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100678187:
  uVar5 = 1;
  uVar6 = 0;
LAB_1006785d7:
  CAbstractWizardModel::goToPage(param_1,uVar5,uVar6);
  return;
}

