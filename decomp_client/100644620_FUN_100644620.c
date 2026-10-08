
void FUN_100644620(long param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  bool bVar7;
  undefined *local_278;
  undefined1 local_270 [88];
  undefined1 local_218 [40];
  undefined1 local_1f0 [72];
  long local_1a8;
  undefined1 local_198 [40];
  undefined1 local_170 [72];
  long local_128;
  undefined1 local_118 [40];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined *local_c0;
  undefined1 local_b8 [88];
  undefined1 local_60 [40];
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar2 = FUN_100640cb0();
  puVar1 = PTR_shared_null_1021e1288;
  if (param_2 != -0x7ffeeff7) {
    if (param_2 == 0) {
      local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_100640930(&local_f0,param_1);
      lVar4 = FUN_10063f730(param_1);
      FUN_10061fe50(&local_e8,0,&local_e0,&local_f0,*(undefined1 *)(lVar4 + 0x160));
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_29 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006446d2;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1006446d2:
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
      if (cVar2 == '\0') {
        FUN_10061e130(uVar5,1,0,&local_e8);
      }
      else {
        FUN_10061e150(uVar5,1,0,&local_e8);
      }
      FUN_100640290(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
      uVar5 = FUN_10063f730(param_1);
      iVar3 = FUN_100676120(uVar5);
      bVar7 = true;
      if (iVar3 != 1) {
        uVar5 = FUN_10063f730(param_1);
        FUN_100676150(local_170,uVar5);
        iVar3 = *(int *)(local_128 + 4);
        FUN_100252c80(local_118);
        bVar7 = iVar3 != 0;
        FUN_100252e70(local_170);
      }
      uVar5 = FUN_10063f730(param_1);
      FUN_100676150(local_1f0,uVar5);
      iVar3 = *(int *)(local_1a8 + 4);
      FUN_100252c80(local_198);
      FUN_100252e70(local_1f0);
      if (iVar3 != 0) {
        uVar5 = FUN_10063f730(param_1);
        local_278 = puVar1;
        FUN_1002f6080(local_270,&local_278);
        FUN_100675fb0(uVar5,local_270);
        FUN_100252c80(local_218);
        FUN_100252e70(local_270);
        if (*(int *)puVar1 != -1) {
          if (*(int *)puVar1 != 0) {
            LOCK();
            *(int *)puVar1 = *(int *)puVar1 + -1;
            local_29 = *(int *)puVar1 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006449d8;
          }
          QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
        }
      }
LAB_1006449d8:
      uVar5 = FUN_10063f730(param_1);
      FUN_100676130(uVar5,0xffffffff);
      if (bVar7) {
        CAbstractWizardPage::wizardCtrl();
        CWizardController::goNext();
      }
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_29 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100644a38;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100644a38:
      if (*(int *)local_e0 == -1) {
        return;
      }
      pQVar6 = local_e0;
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        UNLOCK();
        if (*(int *)local_e0 != 0) {
          return;
        }
        local_29 = 0;
      }
LAB_100644af2:
      QArrayData::deallocate(pQVar6,2,8);
      return;
    }
    if (param_2 != -0x7ffb8fa9) {
      local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
      local_d8 = (QArrayData *)QString::fromAscii_helper("",0);
      lVar4 = FUN_10063f730(param_1);
      FUN_10061fe50(&local_d0,param_2,&local_c8,&local_d8,*(undefined1 *)(lVar4 + 0x160));
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_29 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10064487c;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_10064487c:
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
      if (cVar2 == '\0') {
        FUN_10061e130(uVar5,0,0,&local_d0);
      }
      else {
        FUN_10061e150(uVar5,0,0,&local_d0);
      }
      QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),7);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_29 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100644acb;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100644acb:
      if (*(int *)local_c8 == -1) {
        return;
      }
      pQVar6 = local_c8;
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        UNLOCK();
        if (*(int *)local_c8 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_100644af2;
    }
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10061e130(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),1,1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100644763;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100644763:
  uVar5 = FUN_10063f730(param_1);
  local_c0 = puVar1;
  FUN_1002f6080(local_b8,&local_c0);
  FUN_100675fb0(uVar5,local_b8);
  FUN_100252c80(local_60);
  FUN_100252e70(local_b8);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006447dd;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1006447dd:
  uVar5 = FUN_10063f730(param_1);
  FUN_100676130(uVar5,0xffffffff);
  return;
}

