
void FUN_1000af8c0(long param_1,QString *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  QString *this;
  QTypedArrayData<unsigned_short> *pQVar9;
  long *local_40;
  undefined1 local_31;
  
  puVar7 = operator_new(0x18);
  *puVar7 = &PTR_FUN_10226ccc0;
  pQVar9 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  puVar7[1] = PTR_shared_null_1021e1288;
  this = (QString *)(puVar7 + 1);
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar8 != (long *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)puVar7;
    *plVar8 = (long)&PTR_FUN_10226ce10;
    goto LAB_1000af97e;
  }
  *puVar7 = &PTR_FUN_10226ccc0;
  puVar4 = PTR_shared_null_1021e1288;
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000af973;
      pQVar9 = this->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar9,2,8);
  }
LAB_1000af973:
  operator_delete(puVar7);
  plVar8 = (long *)0x0;
LAB_1000af97e:
  cVar5 = QFile::exists(param_2);
  if (cVar5 != '\0') {
    QString::operator=(this,param_2);
    uVar6 = QDir::separator();
    cVar5 = QString::endsWith(this,uVar6,1);
    if (cVar5 != '\0') {
      QString::chop((int)this);
    }
    *(undefined4 *)(puVar7 + 2) = param_3;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if (plVar8 != (long *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_40 = plVar8;
    FUN_1000eef10(uVar2,&local_40);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}

