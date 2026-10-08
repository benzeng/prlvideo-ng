
undefined1 FUN_100dae5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  undefined1 uVar8;
  bool bVar9;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QVariant local_120;
  QProcess local_110 [16];
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined4 local_f0 [2];
  char **local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  QArrayData *local_98;
  undefined1 local_89;
  char *local_88;
  size_t local_80;
  char *local_78;
  undefined4 local_70;
  char *local_68;
  size_t local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_a8 = DAT_10225c080;
  local_b0 = DAT_10225c078;
  local_b8 = DAT_10225c070;
  local_c0 = PTR_s__10225c068;
  local_d0[0] = 1;
  local_c8 = &local_c0;
  local_38 = lVar6;
  QString::toUtf8();
  QString::toUtf8();
  pQVar1 = local_d8;
  pcVar4 = _calloc((long)*(int *)(local_d8 + 4) + 1,1);
  if (pcVar4 == (char *)0x0) {
    uVar8 = 0;
  }
  else {
    pcVar5 = _calloc((long)*(int *)(local_e0 + 4) + 1,1);
    if (pcVar5 == (char *)0x0) {
      _free(pcVar4);
      uVar8 = 0;
    }
    else {
      _strncpy(pcVar4,(char *)(pQVar1 + *(long *)(pQVar1 + 0x10)),(long)*(int *)(pQVar1 + 4));
      _strncpy(pcVar5,(char *)(local_e0 + *(long *)(local_e0 + 0x10)),(long)*(int *)(local_e0 + 4));
      local_88 = "username";
      local_80 = _strlen(pcVar4);
      local_70 = 0;
      local_68 = "password";
      local_78 = pcVar4;
      local_60 = _strlen(pcVar5);
      local_50 = 0;
      local_f0[0] = 2;
      local_e8 = &local_88;
      local_58 = pcVar5;
      iVar3 = _AuthorizationCreate(0,0,0,&local_a0);
      if (iVar3 == 0) {
        iVar3 = _AuthorizationCopyRights(local_a0,local_d0,local_f0,0x12,0);
        bVar9 = true;
        if (iVar3 != 0) {
          if (iVar3 == -0xea67) {
            local_f8 = (QArrayData *)QString::fromAscii_helper("/usr/bin/dscl .",0xf);
            local_100 = (QArrayData *)PTR_shared_null_1021e1288;
            QProcess::QProcess(local_110,(QObject *)0x0);
            local_130 = (QArrayData *)QString::fromAscii_helper("authonly %1 %2\n",0xf);
            local_48 = param_2;
            local_40 = param_3;
            QString::multiArg((int)&local_128,(QString **)&local_130);
            QVariant::QVariant(&local_120,&local_128);
            QObject::setProperty((char *)local_110,(QVariant *)"authonly");
            QVariant::~QVariant(&local_120);
            if (*(int *)local_128.field0_0x0 != -1) {
              if (*(int *)local_128.field0_0x0 != 0) {
                LOCK();
                *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                local_89 = *(int *)local_128.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_100dae8b9;
              }
              QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
            }
LAB_100dae8b9:
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_89 = *(int *)local_130 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_100dae8f5;
              }
              QArrayData::deallocate(local_130,2,8);
            }
LAB_100dae8f5:
            cVar2 = FUN_100dc0bd0(&local_f8,&local_100,4000,local_110,FUN_100daed70);
            if (cVar2 == '\0') {
              bVar9 = false;
            }
            else {
              QProcess::readAllStandardError();
              bVar9 = *(int *)(local_138 + 4) == 0;
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_89 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_89) goto LAB_100dae9ad;
                }
                QArrayData::deallocate(local_138,1,8);
              }
            }
LAB_100dae9ad:
            QProcess::~QProcess(local_110);
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_89 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_100dae9f5;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_100dae9f5:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_89 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_100daea31;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
          }
          else {
            bVar9 = false;
            FUN_100df99c0("","CAuth",0,"AuthorizationCopyRights() failed with errcode: %ld",
                          (long)iVar3);
          }
        }
      }
      else {
        bVar9 = false;
        FUN_100df99c0("","CAuth",0,"AuthorizationCreate() failed with errcode: %ld",(long)iVar3);
      }
LAB_100daea31:
      _AuthorizationFree(local_a0,8);
      _free(pcVar4);
      _free(pcVar5);
      if (bVar9) {
        QString::toUtf8();
        lVar6 = _getpwnam(local_98 + *(long *)(local_98 + 0x10));
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_89 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_100daeab4;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_100daeab4:
        if (lVar6 == 0) {
          piVar7 = ___error();
          uVar8 = 0;
          FUN_100df99c0("","CAuth",0,
                        "Couldn\'t identify user. getpwnam() call returned error code: %d",*piVar7);
        }
        else {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 0x10);
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x14);
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_89 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100daeb48;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100daeb48:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_89 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100daeb84;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100daeb84:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

