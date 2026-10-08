
void FUN_1007bd2f0(QMenu *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_10222dc70;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_10222de20;
  FUN_1007bd4d0();
  pQVar3 = *(QArrayData **)((long)&param_1[2].field1_0x8.field0_0x0 + 4);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007bd34b;
      pQVar3 = *(QArrayData **)((long)&param_1[2].field1_0x8.field0_0x0 + 4);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007bd34b:
  pQVar3 = *(QArrayData **)((long)&param_1[2].field0_0x0 + 4);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007bd37b;
      pQVar3 = *(QArrayData **)((long)&param_1[2].field0_0x0 + 4);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007bd37b:
  piVar2 = *(int **)((long)&param_1[1].field1_0x8.field0_0x0 + 6);
  if (*piVar2 != -1) {
    puVar1 = (undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6);
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1007bd3a4;
      piVar2 = (int *)*puVar1;
    }
    FUN_1007c5ae0(puVar1,piVar2);
  }
LAB_1007bd3a4:
  pQVar3 = *(QArrayData **)((long)&param_1[1].field0_0x0 + 6);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007bd3d4;
      pQVar3 = *(QArrayData **)((long)&param_1[1].field0_0x0 + 6);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007bd3d4:
  QMenu::~QMenu(param_1);
  return;
}

