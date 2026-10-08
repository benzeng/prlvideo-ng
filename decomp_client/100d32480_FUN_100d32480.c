
undefined8 * FUN_100d32480(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  QArrayData *pQVar3;
  int iVar4;
  int iVar5;
  QArrayData *local_730;
  QString local_728;
  QArrayData *local_720;
  QArrayData *local_718;
  undefined1 local_709;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  uint uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined1 local_6d0 [2];
  undefined1 local_6ce [516];
  short local_4ca;
  QString local_4c8;
  undefined1 local_4b9;
  char local_4b8 [1024];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_4c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar4 = 1;
  do {
    sVar2 = _FSGetVolumeInfo(0,iVar4,&local_4ca,0xffff,local_b8,local_6d0,0);
    if (sVar2 == 0) {
      local_6f8 = 0;
      uStack_6f0 = 0;
      uStack_6ec = 0;
      local_708 = 0;
      uStack_700 = 0;
      local_6e0 = 0;
      uStack_6e8 = 0;
      uStack_6e4 = 0;
      iVar5 = _FSGetVolumeParms((int)local_4ca,&local_708,0x2c);
      if (((iVar5 == 0) && ((uStack_6f0 & 1) != 0)) &&
         (FUN_100d322e0(CONCAT44(uStack_6e8,uStack_6ec),local_4b8,1,&local_709),
         local_4b8[0] != '\0')) {
        QString::fromRawData((QChar *)&local_718,(int)local_6ce);
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","VIUtils",2,"TR00047.03: volume[%d] is %s",iVar4,
                        local_720 + *(long *)(local_720 + 0x10));
          if (*(int *)local_720 != -1) {
            if (*(int *)local_720 != 0) {
              LOCK();
              *(int *)local_720 = *(int *)local_720 + -1;
              local_4b9 = *(int *)local_720 != 0;
              UNLOCK();
              if ((bool)local_4b9) goto LAB_100d326bf;
            }
            QArrayData::deallocate(local_720,1,8);
          }
        }
LAB_100d326bf:
        pQVar3 = (QArrayData *)QString::fromAscii_helper("/Volumes/",9);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_4b9 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        local_728.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
        QString::append(&local_728);
        QString::operator=(&local_4c8,&local_728);
        if (*(int *)local_728.field0_0x0 != -1) {
          if (*(int *)local_728.field0_0x0 != 0) {
            LOCK();
            *(int *)local_728.field0_0x0 = *(int *)local_728.field0_0x0 + -1;
            local_4b9 = *(int *)local_728.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4b9) goto LAB_100d32752;
          }
          QArrayData::deallocate((QArrayData *)local_728.field0_0x0,2,8);
        }
LAB_100d32752:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_4b9 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_4b9) goto LAB_100d32785;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100d32785:
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","VIUtils",2,"TR00047.05: find in Mac path to CD/DVD - %s",
                        local_730 + *(long *)(local_730 + 0x10));
          if (*(int *)local_730 != -1) {
            if (*(int *)local_730 != 0) {
              LOCK();
              *(int *)local_730 = *(int *)local_730 + -1;
              local_4b9 = *(int *)local_730 != 0;
              UNLOCK();
              if ((bool)local_4b9) goto LAB_100d32806;
            }
            QArrayData::deallocate(local_730,1,8);
          }
        }
LAB_100d32806:
        *param_1 = local_4c8.field0_0x0;
        if (1 < *(int *)local_4c8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_4c8.field0_0x0 = *(int *)local_4c8.field0_0x0 + 1;
          local_4b9 = *(int *)local_4c8.field0_0x0 != 0;
          UNLOCK();
        }
        if (*(int *)local_718 == -1) goto LAB_100d325ae;
        if (*(int *)local_718 != 0) {
          LOCK();
          *(int *)local_718 = *(int *)local_718 + -1;
          local_4b9 = *(int *)local_718 != 0;
          UNLOCK();
          if ((bool)local_4b9) goto LAB_100d325ae;
        }
        QArrayData::deallocate(local_718,2,8);
        goto LAB_100d325ae;
      }
    }
    else {
      iVar5 = (int)sVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar5 != -0x23);
  *param_1 = PTR_shared_null_1021e1288;
LAB_100d325ae:
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_4c8.field0_0x0 != -1) {
    if (*(int *)local_4c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4c8.field0_0x0 = *(int *)local_4c8.field0_0x0 + -1;
      local_6d0[0] = *(int *)local_4c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_6d0[0]) goto LAB_100d325f4;
    }
    QArrayData::deallocate((QArrayData *)local_4c8.field0_0x0,2,8);
  }
LAB_100d325f4:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

