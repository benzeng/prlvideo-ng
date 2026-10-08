
void FUN_100798340(QString *param_1,int param_2)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  if (param_2 == 9) {
    uVar4 = 3;
LAB_1007983bc:
    CAbstractProgressOperation::setState(param_1,uVar4);
LAB_1007983c4:
    CAbstractProgressOperation::setProgress((int)param_1);
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 1) {
        uVar4 = 0;
        goto LAB_1007983bc;
      }
      CAbstractProgressOperation::setState(param_1,1);
      if (param_2 == 3) goto LAB_1007983d1;
      goto LAB_1007983c4;
    }
    CAbstractProgressOperation::setState(param_1,2);
    pQVar2 = param_1[8].field0_0x0;
    if (pQVar2 != (QTypedArrayData<unsigned_short> *)0x0) {
      local_28 = *(undefined8 *)(pQVar2 + 0x180);
      local_30 = *(undefined8 *)(pQVar2 + 0x178);
      local_40 = *(undefined8 *)(pQVar2 + 0x168);
      local_38 = *(undefined8 *)(pQVar2 + 0x170);
      FUN_1007987c0(param_1,&local_40);
    }
  }
LAB_1007983d1:
  FUN_1007990b0(&local_50,param_1);
  CAbstractProgressOperation::setName(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079841b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10079841b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079844b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10079844b:
  FUN_1007990b0(&local_60,param_1);
  CAbstractProgressOperation::setDescription(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100798493;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100798493:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007984c3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007984c3:
  iVar1 = *(int *)(param_1[8].field0_0x0 + 0x160);
  if (iVar1 == 5) {
    ppuVar3 = &PTR_s_Cancel_operation_1022708f0;
  }
  else if (iVar1 == 4) {
    ppuVar3 = &PTR_s_Cancel_operation_1022708e8;
  }
  else {
    if (iVar1 != 3) {
      local_68 = (QArrayData *)PTR_shared_null_1021e1288;
      goto LAB_100798538;
    }
    ppuVar3 = &PTR_s_Pause_download_1022708e0;
  }
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)*ppuVar3);
LAB_100798538:
  CAbstractProgressOperation::setCancelHint(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

