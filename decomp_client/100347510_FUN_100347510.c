
void FUN_100347510(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1b0);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = operator_new(8);
    FUN_100d79a40(pvVar4);
    pvVar1 = *(void **)(param_1 + 0x1b0);
    if ((pvVar1 != pvVar4) && (*(void **)(param_1 + 0x1b0) = pvVar4, pvVar1 != (void *)0x0)) {
      operator_delete(pvVar1);
      pvVar4 = *(void **)(param_1 + 0x1b0);
    }
  }
  cVar3 = FUN_100d79a50(pvVar4,param_2);
  if (cVar3 != '\0') {
    lVar5 = QDateTime::currentMSecsSinceEpoch();
    lVar2 = *(long *)(param_1 + 0x1a0);
    if (999 < lVar5 - *(long *)(lVar2 + 0x10)) {
      uVar6 = FUN_100d79b60(param_2,1);
      QByteArray::clear();
      cVar3 = FUN_100347670(uVar6,lVar2);
      if (cVar3 != '\0') {
        lVar2 = *(long *)(param_1 + 0x1a0);
        uVar6 = FUN_100d79b60(param_2,0);
        QByteArray::clear();
        cVar3 = FUN_100347670(uVar6,lVar2 + 8);
        if (cVar3 != '\0') {
          ___bzero(param_1 + 0x3c,0x114);
          if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
            *(undefined8 *)(param_1 + 0x34) = 0;
            uVar6 = 0;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
              uVar6 = *(undefined8 *)(param_1 + 0x18);
            }
            uVar6 = FUN_100319c40(uVar6);
            FUN_10032eef0(uVar6);
          }
          *(long *)(*(long *)(param_1 + 0x1a0) + 0x10) = lVar5;
        }
      }
    }
  }
  return;
}

