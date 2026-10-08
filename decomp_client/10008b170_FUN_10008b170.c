
/* WARNING: Type propagation algorithm not settling */

void FUN_10008b170(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  QObject *pQVar6;
  QImage local_68 [32];
  long local_48 [3];
  undefined1 local_29;
  
  if ((((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
      (*(long *)(param_1 + 0x58) != 0)) &&
     ((uVar1 = FUN_1003542e0(), (int)uVar1 == *param_2 &&
      ((int)((ulong)uVar1 >> 0x20) == param_2[1])))) {
    return;
  }
  FUN_100087700(param_1);
  if ((0 < *param_2) && (0 < param_2[1])) {
    piVar5 = (int *)0x0;
    pQVar6 = (QObject *)0x0;
    if (*(long *)(param_1 + 0x20) != 0) {
      piVar5 = (int *)0x0;
      pQVar6 = (QObject *)0x0;
      if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
        piVar5 = (int *)0x0;
        pQVar6 = (QObject *)0x0;
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar1 = FUN_10018c280();
          lVar2 = FUN_100319960(uVar1);
          piVar5 = (int *)0x0;
          pQVar6 = (QObject *)0x0;
          if (lVar2 != 0) {
            local_48[1] = 0;
            local_48[2] = 0xffffffffffffffff;
            pQVar3 = (QObject *)FUN_100327670(lVar2,param_2,local_48 + 1,DAT_100e151e0);
            piVar5 = (int *)0x0;
            pQVar6 = (QObject *)0x0;
            if (pQVar3 != (QObject *)0x0) {
              piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
              pQVar6 = pQVar3;
            }
          }
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x50);
    if (piVar4 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x50);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x50));
        }
      }
      *(int **)(param_1 + 0x50) = piVar5;
      *(QObject **)(param_1 + 0x58) = pQVar6;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar5);
      }
    }
    if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
       (*(long *)(param_1 + 0x58) != 0)) {
      QObject::connect(local_48,*(long *)(param_1 + 0x58),"2imageUpdated(const QImage&)",param_1,
                       "1onVmThumbnailUpdated(const QImage&)",0);
      if (local_48[0] != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)local_48);
      uVar1 = 0;
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x58);
      }
      FUN_100354220(local_68,uVar1);
      FUN_10008b0f0(param_1,local_68);
      QImage::~QImage(local_68);
    }
  }
  return;
}

