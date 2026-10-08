
undefined8 FUN_100d2ebe0(long param_1)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  QDomNode local_40 [8];
  QDomNode local_38 [8];
  
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = QDomNodeList::length();
    if (iVar4 <= iVar1 + 1) {
      pvVar5 = *(void **)(param_1 + 0x20);
      if (pvVar5 != (void *)0x0) {
        if (*(long **)((long)pvVar5 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar5 + 0x10) + 8))();
        }
        operator_delete(pvVar5);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    pcVar2 = *(code **)(param_1 + 0x28);
    QDomNodeList::item((int)local_40);
    QDomNode::toElement();
    pvVar5 = (void *)(*pcVar2)(local_38,*(undefined8 *)(param_1 + 0x10));
    QDomNode::~QDomNode(local_38);
    QDomNode::~QDomNode(local_40);
  } while (pvVar5 == (void *)0x0);
  pvVar3 = *(void **)(param_1 + 0x20);
  if ((pvVar3 != pvVar5) && (pvVar3 != (void *)0x0)) {
    if (*(long **)((long)pvVar3 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x10) + 8))();
    }
    operator_delete(pvVar3);
  }
  *(void **)(param_1 + 0x20) = pvVar5;
  return 1;
}

