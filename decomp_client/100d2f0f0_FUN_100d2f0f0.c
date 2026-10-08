
undefined8 FUN_100d2f0f0(long param_1)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  QArrayData *pQVar6;
  QDomNode local_48 [8];
  QDomNode local_40 [15];
  undefined1 local_31;
  
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = QDomNodeList::length();
    if (iVar4 <= iVar1 + 1) {
      pvVar5 = *(void **)(param_1 + 0x20);
      if (pvVar5 == (void *)0x0) goto LAB_100d2f1fa;
      pQVar6 = *(QArrayData **)((long)pvVar5 + 0x10);
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d2f1f2;
          pQVar6 = *(QArrayData **)((long)pvVar5 + 0x10);
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_100d2f1f2:
      operator_delete(pvVar5);
LAB_100d2f1fa:
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    pcVar2 = *(code **)(param_1 + 0x28);
    QDomNodeList::item((int)local_48);
    QDomNode::toElement();
    pvVar5 = (void *)(*pcVar2)(local_40,*(undefined8 *)(param_1 + 0x10));
    QDomNode::~QDomNode(local_40);
    QDomNode::~QDomNode(local_48);
  } while (pvVar5 == (void *)0x0);
  pvVar3 = *(void **)(param_1 + 0x20);
  if ((pvVar3 == pvVar5) || (pvVar3 == (void *)0x0)) goto LAB_100d2f1b1;
  pQVar6 = *(QArrayData **)((long)pvVar3 + 0x10);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2f1a9;
      pQVar6 = *(QArrayData **)((long)pvVar3 + 0x10);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100d2f1a9:
  operator_delete(pvVar3);
LAB_100d2f1b1:
  *(void **)(param_1 + 0x20) = pvVar5;
  return 1;
}

