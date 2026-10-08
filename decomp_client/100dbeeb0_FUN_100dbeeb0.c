
undefined8 * FUN_100dbeeb0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  QString local_10b0;
  int *local_10a8;
  long *local_10a0;
  long *local_1098;
  uint local_1090;
  int *local_1088;
  QString local_1080;
  QArrayData *local_1078;
  QArrayData *local_1070;
  size_t local_1068;
  int local_105c;
  int local_1058 [2];
  QArrayData *local_1050;
  undefined1 local_1045;
  int local_1044 [3];
  char local_1038 [4096];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1058[0] = 1;
  local_1058[1] = 8;
  local_105c = 0;
  local_1068 = 4;
  local_38 = lVar4;
  iVar2 = _sysctl(local_1058,2,&local_105c,&local_1068,(void *)0x0,0);
  if (iVar2 < 0) {
    iVar2 = _proc_pidpath(*(int *)(*param_2 + 0x28),local_1038,0x1000);
    if (iVar2 < 1) {
      piVar9 = (int *)param_2[0xf];
      *param_1 = piVar9;
      if (1 < *piVar9 + 1U) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        local_1045 = *piVar9 != 0;
        UNLOCK();
      }
    }
    else {
      sVar5 = _strlen(local_1038);
      uVar6 = QString::fromAscii_helper(local_1038,(int)sVar5);
      *param_1 = uVar6;
    }
    goto LAB_100dbf54b;
  }
  local_1070 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_1070);
  local_1044[0] = 1;
  local_1044[1] = 0x31;
  local_1044[2] = *(undefined4 *)(*param_2 + 0x28);
  local_1068 = (size_t)local_105c;
  if ((1 < *(uint *)local_1070) || (*(long *)(local_1070 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_1070,*(uint *)(local_1070 + 4) + 1,*(uint *)(local_1070 + 8) >> 0x1f);
  }
  iVar2 = _sysctl(local_1044,3,local_1070 + *(long *)(local_1070 + 0x10),&local_1068,(void *)0x0,0);
  if (iVar2 < 0) {
    iVar2 = _proc_pidpath(*(int *)(*param_2 + 0x28),local_1038,0x1000);
    if (iVar2 < 1) {
      piVar9 = (int *)param_2[0xf];
      *param_1 = piVar9;
      if (1 < *piVar9 + 1U) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        local_1045 = *piVar9 != 0;
        UNLOCK();
      }
    }
    else {
      sVar5 = _strlen(local_1038);
      uVar6 = QString::fromAscii_helper(local_1038,(int)sVar5);
      *param_1 = uVar6;
    }
  }
  else {
    if ((1 < *(uint *)local_1070) || (*(long *)(local_1070 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_1070,*(uint *)(local_1070 + 4) + 1,*(uint *)(local_1070 + 8) >> 0x1f);
    }
    iVar2 = *(int *)(local_1070 + *(long *)(local_1070 + 0x10));
    if (iVar2 < 1) {
      iVar2 = _proc_pidpath(*(int *)(*param_2 + 0x28),local_1038,0x1000);
      if (iVar2 < 1) {
        piVar9 = (int *)param_2[0xf];
        *param_1 = piVar9;
        if (1 < *piVar9 + 1U) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          local_1045 = *piVar9 != 0;
          UNLOCK();
        }
      }
      else {
        sVar5 = _strlen(local_1038);
        uVar6 = QString::fromAscii_helper(local_1038,(int)sVar5);
        *param_1 = uVar6;
      }
    }
    else {
      QByteArray::right((int)&local_1078);
      QByteArray::operator=((QByteArray *)&local_1070,(QByteArray *)&local_1078);
      if (*(int *)local_1078 != -1) {
        if (*(int *)local_1078 != 0) {
          LOCK();
          *(int *)local_1078 = *(int *)local_1078 + -1;
          local_1045 = *(int *)local_1078 != 0;
          UNLOCK();
          if ((bool)local_1045) goto LAB_100dbf07c;
        }
        QArrayData::deallocate(local_1078,1,8);
      }
LAB_100dbf07c:
      local_1080.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
      QByteArray::split((char)&local_1088);
      local_10a8 = local_1088;
      if (*local_1088 != -1) {
        if (*local_1088 == 0) {
          QListData::detach((int)&local_10a8);
          iVar12 = local_10a8[2];
          if (iVar12 != local_10a8[3]) {
            local_1088 = local_1088 + (long)local_1088[2] * 2 + 4;
            piVar9 = local_10a8 + (long)iVar12 * 2 + 4;
            lVar4 = (long)local_10a8[3] * 8 + (long)iVar12 * -8;
            do {
              piVar1 = *(int **)local_1088;
              *(int **)piVar9 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_1045 = *piVar1 != 0;
                UNLOCK();
              }
              piVar9 = piVar9 + 2;
              local_1088 = local_1088 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
        }
        else {
          LOCK();
          *local_1088 = *local_1088 + 1;
          local_1045 = *local_1088 != 0;
          UNLOCK();
        }
      }
      local_10a0 = (long *)(local_10a8 + (long)local_10a8[2] * 2 + 4);
      local_1098 = (long *)(local_10a8 + (long)local_10a8[3] * 2 + 4);
      local_1090 = 1;
      if (local_10a8[2] != local_10a8[3]) {
        iVar12 = 0;
        do {
          iVar3 = iVar12;
          if (local_1090 == 0) {
LAB_100dbf410:
            local_10a0 = local_10a0 + 1;
            local_1090 = 1;
            iVar12 = iVar3;
          }
          else {
            lVar4 = *local_10a0;
            if (*(int *)(lVar4 + 4) == 0) {
              uVar8 = local_1090;
              if (iVar12 < 2) goto LAB_100dbf410;
            }
            else {
              if (0 < iVar12) {
                lVar10 = 0;
                pcVar11 = (char *)(*(long *)(lVar4 + 0x10) + lVar4);
                if ((pcVar11 != (char *)0x0) && (*(uint *)(lVar4 + 4) != 0)) {
                  lVar10 = 0;
                  do {
                    if (pcVar11[lVar10] == '\0') break;
                    lVar10 = lVar10 + 1;
                  } while ((uint)lVar10 < *(uint *)(lVar4 + 4));
                }
                pQVar7 = (QArrayData *)QString::fromAscii_helper(pcVar11,(int)lVar10);
                if (1 < *(int *)pQVar7 + 1U) {
                  LOCK();
                  *(int *)pQVar7 = *(int *)pQVar7 + 1;
                  local_1045 = *(int *)pQVar7 != 0;
                  UNLOCK();
                }
                local_10b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
                QString::fromUtf8_helper((char *)&local_1050,0x1e31adc);
                QString::append(&local_10b0);
                if (*(int *)local_1050 != -1) {
                  if (*(int *)local_1050 != 0) {
                    LOCK();
                    *(int *)local_1050 = *(int *)local_1050 + -1;
                    local_1045 = *(int *)local_1050 != 0;
                    UNLOCK();
                    if ((bool)local_1045) goto LAB_100dbf373;
                  }
                  QArrayData::deallocate(local_1050,2,8);
                }
LAB_100dbf373:
                QString::append(&local_1080);
                if (*(int *)local_10b0.field0_0x0 != -1) {
                  if (*(int *)local_10b0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_10b0.field0_0x0 = *(int *)local_10b0.field0_0x0 + -1;
                    local_1045 = *(int *)local_10b0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_1045) goto LAB_100dbf3be;
                  }
                  QArrayData::deallocate((QArrayData *)local_10b0.field0_0x0,2,8);
                }
LAB_100dbf3be:
                if (*(int *)pQVar7 != -1) {
                  if (*(int *)pQVar7 != 0) {
                    LOCK();
                    *(int *)pQVar7 = *(int *)pQVar7 + -1;
                    local_1045 = *(int *)pQVar7 != 0;
                    UNLOCK();
                    if ((bool)local_1045) goto LAB_100dbf3ef;
                  }
                  QArrayData::deallocate(pQVar7,2,8);
                }
              }
LAB_100dbf3ef:
              iVar3 = iVar12 + 1;
              uVar8 = local_1090;
              if (iVar12 < iVar2) goto LAB_100dbf410;
            }
            local_10a0 = local_10a0 + 1;
            local_1090 = uVar8 ^ 1;
            iVar12 = iVar3;
            if (uVar8 == 1) break;
          }
        } while (local_10a0 != local_1098);
      }
      FUN_1000ee530(&local_10a8);
      lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
      *param_1 = local_1080.field0_0x0;
      if (1 < *(int *)local_1080.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1080.field0_0x0 = *(int *)local_1080.field0_0x0 + 1;
        local_1045 = *(int *)local_1080.field0_0x0 != 0;
        UNLOCK();
      }
      FUN_1000ee530(&local_1088);
      if (*(int *)local_1080.field0_0x0 != -1) {
        if (*(int *)local_1080.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1080.field0_0x0 = *(int *)local_1080.field0_0x0 + -1;
          local_1045 = *(int *)local_1080.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1045) goto LAB_100dbf50f;
        }
        QArrayData::deallocate((QArrayData *)local_1080.field0_0x0,2,8);
      }
    }
  }
LAB_100dbf50f:
  if (*(int *)local_1070 != -1) {
    if (*(int *)local_1070 != 0) {
      LOCK();
      *(int *)local_1070 = *(int *)local_1070 + -1;
      local_1045 = *(int *)local_1070 != 0;
      UNLOCK();
      if ((bool)local_1045) goto LAB_100dbf54b;
    }
    QArrayData::deallocate(local_1070,1,8);
  }
LAB_100dbf54b:
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

