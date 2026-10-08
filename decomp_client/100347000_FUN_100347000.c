
bool FUN_100347000(long param_1,undefined8 param_2,short param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  
  lVar3 = QDateTime::currentMSecsSinceEpoch();
  lVar1 = *(long *)(param_1 + 0x1a0);
  bVar6 = true;
  if (999 < lVar3 - *(long *)(lVar1 + 0x10)) {
    if (param_3 == 9) {
      QByteArray::clear();
      cVar2 = FUN_100347670(param_2,lVar1 + 8);
      if (cVar2 != '\0') {
        plVar5 = *(long **)(param_1 + 0x1a0);
        if (*(int *)(*plVar5 + 4) != 0) {
          ___bzero(param_1 + 0x3c,0x114);
          if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
            *(undefined8 *)(param_1 + 0x34) = 0;
            uVar4 = 0;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
              uVar4 = *(undefined8 *)(param_1 + 0x18);
            }
            uVar4 = FUN_100319c40(uVar4);
            FUN_10032eef0(uVar4);
            plVar5 = *(long **)(param_1 + 0x1a0);
          }
          plVar5[2] = lVar3;
        }
      }
    }
    else if (param_3 == 6) {
      QByteArray::clear();
      cVar2 = FUN_100347670(param_2,lVar1);
    }
    else {
      cVar2 = '\0';
    }
    bVar6 = cVar2 != '\0';
  }
  return bVar6;
}

