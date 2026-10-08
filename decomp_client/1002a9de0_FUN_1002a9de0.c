
void FUN_1002a9de0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar2 = *(long *)(lVar3 + 0x20);
    while (lVar2 != lVar3 + 8) {
      puVar1 = *(undefined8 **)(lVar2 + 0x28);
      if (*(int *)(lVar2 + 0x20) == 0) {
        if (puVar1 != (undefined8 *)0x0) goto LAB_1002a9e75;
      }
      else if (puVar1 != (undefined8 *)0x0) {
        pQVar4 = (QArrayData *)*puVar1;
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            UNLOCK();
            if (*(int *)pQVar4 != 0) goto LAB_1002a9e75;
            pQVar4 = (QArrayData *)*puVar1;
          }
          QArrayData::deallocate(pQVar4,1,8);
        }
LAB_1002a9e75:
        operator_delete(puVar1);
      }
      lVar2 = QMapNodeBase::nextNode();
      lVar3 = *(long *)(param_1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1000f0500((long *)(param_1 + 8));
  return;
}

