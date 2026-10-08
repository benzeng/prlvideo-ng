
undefined1 FUN_100b4af50(int *param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *pFVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  undefined1 uVar8;
  QArrayData *local_288;
  QArrayData *local_280;
  QString local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QString local_260;
  QString local_258;
  QString local_250;
  QString local_248;
  char local_239 [513];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_1 = -1;
  *param_2 = 0;
  local_268 = (QArrayData *)QString::fromAscii_helper("com.parallels.vm.prl_naptd",0x1a);
  QString::fromUtf8_helper((char *)&local_260,0x1ed69a1);
  QString::append(&local_260);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_239[0] = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_239[0]) goto LAB_100b4b005;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100b4b005:
  QString::toUtf8();
  pFVar4 = _popen((char *)(local_270 + *(long *)(local_270 + 0x10)),"r");
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_239[0] = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_239[0]) goto LAB_100b4b06e;
    }
    QArrayData::deallocate(local_270,1,8);
  }
LAB_100b4b06e:
  if (pFVar4 == (FILE *)0x0) {
    FUN_100b475f0();
    uVar3 = FUN_100b47dd0();
    uVar8 = 0;
    FUN_100df99c0("","prl_net",0,"popen(launchctl list) failed with errno %d",uVar3);
  }
  else {
    local_278.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    iVar2 = _feof(pFVar4);
    if (iVar2 == 0) {
      pcVar1 = local_239 + 1;
      do {
        local_239[1] = 0;
        pcVar5 = _fgets(pcVar1,0x200,pFVar4);
        if (pcVar5 == (char *)0x0) {
          QString::fromUtf8_helper((char *)&local_250,0x1e41978);
          QString::operator=(&local_278,&local_250);
          if (*(int *)local_250.field0_0x0 == -1) goto LAB_100b4b375;
          if (*(int *)local_250.field0_0x0 != 0) {
            LOCK();
            *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
            local_239[0] = *(int *)local_250.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_239[0]) goto LAB_100b4b375;
          }
          QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
          goto LAB_100b4b375;
        }
        sVar6 = _strlen(pcVar1);
        if (1 < (int)sVar6) {
          lVar7 = (long)(int)sVar6;
          do {
            if ((local_239[lVar7] != '\n') && (local_239[lVar7] != '\r')) break;
            local_239[lVar7] = '\0';
            lVar7 = lVar7 + -1;
          } while (1 < lVar7);
        }
        _strlen(pcVar1);
        QString::fromUtf8_helper((char *)&local_248,(int)pcVar1);
        QString::operator=(&local_278,&local_248);
        if (*(int *)local_248.field0_0x0 != -1) {
          if (*(int *)local_248.field0_0x0 != 0) {
            LOCK();
            *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
            local_239[0] = *(int *)local_248.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_239[0]) goto LAB_100b4b16a;
          }
          QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
        }
LAB_100b4b16a:
        local_280 = (QArrayData *)QString::fromAscii_helper("com.parallels.vm.prl_naptd",0x1a);
        iVar2 = QString::indexOf(&local_278,&local_280,0,1);
        if (*(int *)local_280 != -1) {
          if (*(int *)local_280 != 0) {
            LOCK();
            *(int *)local_280 = *(int *)local_280 + -1;
            local_239[0] = *(int *)local_280 != 0;
            UNLOCK();
            if ((bool)local_239[0]) goto LAB_100b4b1d7;
          }
          QArrayData::deallocate(local_280,2,8);
        }
LAB_100b4b1d7:
        if (iVar2 != -1) {
          *param_2 = 1;
          QString::toUtf8();
          lVar7 = _strtol((char *)(local_288 + *(long *)(local_288 + 0x10)),(char **)0x0,10);
          iVar2 = (int)lVar7;
          *param_1 = iVar2;
          if (*(int *)local_288 != -1) {
            if (*(int *)local_288 == 0) {
LAB_100b4b23d:
              QArrayData::deallocate(local_288,1,8);
            }
            else {
              LOCK();
              *(int *)local_288 = *(int *)local_288 + -1;
              local_239[0] = *(int *)local_288 != 0;
              UNLOCK();
              if (!(bool)local_239[0]) goto LAB_100b4b23d;
            }
            iVar2 = *param_1;
          }
          if (iVar2 == 0) {
            *param_1 = -1;
          }
        }
        iVar2 = _feof(pFVar4);
      } while (iVar2 == 0);
    }
    QString::fromUtf8_helper((char *)&local_258,0x1e41978);
    QString::operator=(&local_278,&local_258);
    if (*(int *)local_258.field0_0x0 != -1) {
      if (*(int *)local_258.field0_0x0 != 0) {
        LOCK();
        *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
        local_239[0] = *(int *)local_258.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_239[0]) goto LAB_100b4b375;
      }
      QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
    }
LAB_100b4b375:
    _pclose(pFVar4);
    uVar8 = 1;
    if (*(int *)local_278.field0_0x0 != -1) {
      if (*(int *)local_278.field0_0x0 != 0) {
        LOCK();
        *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
        local_239[0] = *(int *)local_278.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_239[0]) goto LAB_100b4b3bc;
      }
      QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
    }
  }
LAB_100b4b3bc:
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_260.field0_0x0 != -1) {
    if (*(int *)local_260.field0_0x0 != 0) {
      LOCK();
      *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
      local_239[0] = *(int *)local_260.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_239[0]) goto LAB_100b4b402;
    }
    QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
  }
LAB_100b4b402:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

