
void FUN_10042de40(double param_1,double param_2,long param_3,char param_4)

{
  QMapNodeBase *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  QMapNodeBase *local_40;
  Data *local_38;
  Data *local_30;
  undefined1 local_21;
  
  dVar5 = param_1;
  if (param_4 == '\0') {
    dVar5 = DAT_100e150e8;
  }
  QDoubleSpinBox::setMinimum(dVar5);
  QDoubleSpinBox::setMaximum(param_2);
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  if (0.0 <= param_1) {
    iVar2 = (int)(DAT_100e110f0 + param_1);
  }
  else {
    iVar2 = (int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_1);
  }
  FUN_1003ba890((double)iVar2,&local_30,&local_38);
  if (0.0 <= param_1) {
    iVar2 = (int)(DAT_100e110f0 + param_1);
  }
  else {
    iVar2 = (int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_1);
  }
  if (0.0 <= param_2) {
    iVar4 = (int)(param_2 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((param_2 - (double)(int)(DAT_100e110e0 + param_2)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_2);
  }
  if (0.0 <= param_1) {
    iVar3 = (int)(param_1 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_1);
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  CMemorySlider::initialize
            (*(undefined8 *)(param_3 + 0x60),iVar2,iVar4,iVar3,0xffffffff,0xffffffff,4,&local_30,
             &local_38,&local_40);
  pQVar1 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10042e03c;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      QMapDataBase::freeTree(local_40,(int)*(long *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10042e03c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10042e062;
    }
    QListData::dispose(local_38);
  }
LAB_10042e062:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

