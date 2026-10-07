
undefined1 FUN_1004f1030(undefined8 *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  ulong uVar7;
  QString local_470;
  QArrayData *local_468;
  QString local_460;
  QArrayData *local_458;
  QString local_450;
  QString local_448;
  undefined1 local_439;
  char local_438 [1040];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  QString::toUtf8_helper(&local_448);
  iVar4 = FUN_1004f0ab0((QArrayData *)
                        (local_448.field0_0x0 + *(long *)(local_448.field0_0x0 + 0x10)),local_438,
                        0x400);
  if (*(int *)local_448.field0_0x0 != -1) {
    if (*(int *)local_448.field0_0x0 != 0) {
      LOCK();
      *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
      local_439 = *(int *)local_448.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1004f10ba;
    }
    QArrayData::deallocate((QArrayData *)local_448.field0_0x0,1,8);
  }
LAB_1004f10ba:
  if (iVar4 == -1) {
    piVar5 = ___error();
    if (*piVar5 == 0x16) {
      uVar6 = 0;
      goto LAB_1004f1368;
    }
    piVar5 = ___error();
    uVar6 = 0;
    if ((*piVar5 == 2) || (DAT_1011b55f8 < 1)) goto LAB_1004f1368;
    piVar5 = ___error();
    iVar4 = *piVar5;
    QString::toUtf8_helper(&local_450);
    FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to read link %s",iVar4,
                  (QArrayData *)(local_450.field0_0x0 + *(long *)(local_450.field0_0x0 + 0x10)));
    if (*(int *)local_450.field0_0x0 == -1) {
      uVar6 = 0;
      goto LAB_1004f1368;
    }
    if (*(int *)local_450.field0_0x0 != 0) {
      LOCK();
      *(int *)local_450.field0_0x0 = *(int *)local_450.field0_0x0 + -1;
      local_439 = *(int *)local_450.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) {
        uVar6 = 0;
        goto LAB_1004f1368;
      }
    }
    uVar7 = 1;
  }
  else {
    local_438[iVar4] = '\0';
    iVar4 = _access(local_438,0);
    if (iVar4 == 0) {
      cVar3 = FUN_1004f0d10(param_1);
      if ((cVar3 == '\0') || (cVar3 = FUN_1004f0160(local_438), cVar3 == '\0')) {
        _strlen(local_438);
        QString::fromUtf8_helper((char *)&local_458,(int)local_438);
        pQVar2 = (QArrayData *)*param_1;
        *param_1 = local_458;
        uVar6 = 1;
        local_458 = pQVar2;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_439 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_439) goto LAB_1004f1368;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
        goto LAB_1004f1368;
      }
    }
    else {
      piVar5 = ___error();
      if (*piVar5 != 2) {
        uVar6 = 0;
        goto LAB_1004f1368;
      }
    }
    QString::toUtf8_helper(&local_460);
    _unlink((char *)(local_460.field0_0x0 + *(long *)(local_460.field0_0x0 + 0x10)));
    if (*(int *)local_460.field0_0x0 != -1) {
      if (*(int *)local_460.field0_0x0 != 0) {
        LOCK();
        *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
        local_439 = *(int *)local_460.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_1004f1181;
      }
      QArrayData::deallocate((QArrayData *)local_460.field0_0x0,1,8);
    }
LAB_1004f1181:
    local_468 = (QArrayData *)PTR_shared_null_100ba20d0;
    cVar3 = FUN_1004f08d0(param_1,&local_468);
    if (cVar3 != '\0') {
      QString::toUtf8_helper(&local_470);
      _unlink((char *)(local_470.field0_0x0 + *(long *)(local_470.field0_0x0 + 0x10)));
      if (*(int *)local_470.field0_0x0 != -1) {
        if (*(int *)local_470.field0_0x0 != 0) {
          LOCK();
          *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
          local_439 = *(int *)local_470.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_439) goto LAB_1004f1201;
        }
        QArrayData::deallocate((QArrayData *)local_470.field0_0x0,1,8);
      }
    }
LAB_1004f1201:
    if (*(int *)local_468 == -1) {
      uVar6 = 0;
      goto LAB_1004f1368;
    }
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_439 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_439) {
        uVar6 = 0;
        goto LAB_1004f1368;
      }
    }
    uVar7 = 2;
    local_450.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_468;
  }
  QArrayData::deallocate((QArrayData *)local_450.field0_0x0,uVar7,8);
  uVar6 = 0;
LAB_1004f1368:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

