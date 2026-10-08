
AnonymousUnion0 * FUN_1005b9020(AnonymousUnion0 *param_1)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  long local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [32];
  QArrayData *local_40;
  AnonymousUnion0 local_30;
  undefined1 local_19;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
  uVar1 = FUN_100748240();
  uVar1 = FUN_100748290(uVar1,&local_68);
  FUN_100746ae0(local_60,uVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b9093;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005b9093:
  if (*(int *)(local_30.field1 + 4) != 0) {
    *param_1 = local_30;
    if (1 < *(int *)local_30.field1 + 1U) {
      LOCK();
      *(int *)local_30.field1 = *(int *)local_30.field1 + 1;
      local_19 = *(int *)local_30.field1 != 0;
      UNLOCK();
    }
    goto LAB_1005b9267;
  }
  local_70 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::split(&local_78,&local_70,&local_80,0,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b9131;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005b9131:
  if (*(int *)(local_78 + 0xc) - *(int *)(local_78 + 8) < 3) {
    param_1->field1 = (Data *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100054f90(&local_88,&local_78);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_19 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005b917d;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1005b917d:
    FUN_100054f90(&local_90,&local_78);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_19 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005b91bc;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1005b91bc:
    pQVar2 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&param_1->field0,(QChar *)&local_78,
               (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_19 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005b922e;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1005b922e:
  FUN_100039a80(&local_78);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b9267;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005b9267:
  FUN_10012ac30(local_60);
  return param_1;
}

