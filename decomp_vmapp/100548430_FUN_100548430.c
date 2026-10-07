
undefined1 FUN_100548430(long param_1,undefined8 *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_38 [15];
  undefined1 local_29;
  
  FUN_100761480(local_38);
  QString::toUtf8();
  cVar3 = FUN_100761540(local_38,local_40 + *(long *)(local_40 + 0x10),0,0,1,0,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005484b1;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1005484b1:
  if (cVar3 == '\0') {
    pQVar2 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","TransMem",0,"[CGuestMemoryMappedPlain::clone_file] failed to open file %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100548636;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100548636:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100548666;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar4 = FUN_100761880(local_38,FUN_100761810,0,*(undefined8 *)(param_1 + 0x20),lVar1);
    if (lVar1 == lVar4) {
      lVar1 = *(long *)(param_1 + 0x18);
      lVar4 = FUN_100761880(local_38,FUN_100761810,0,*(undefined8 *)(param_1 + 0x28),lVar1);
      uVar5 = 1;
      if (lVar1 == lVar4) goto LAB_100548668;
    }
    pQVar2 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","TransMem",0,"[CGuestMemoryMappedPlain::clone_file] failed to save file %s",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10054857e;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10054857e:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100548666;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_100548666:
  uVar5 = 0;
LAB_100548668:
  FUN_100761500(local_38);
  return uVar5;
}

