
void FUN_100735fe0(QObject *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  QObject *pQVar8;
  long local_90;
  QImage local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  double local_48;
  double local_40;
  long local_38;
  undefined1 local_29;
  
  if ((*(int *)(*(long *)(param_1 + 0x18) + 4) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
    uVar2 = FUN_100152280();
    lVar3 = FUN_100154930(uVar2,param_1 + 0x20,param_1 + 0x18);
    if (lVar3 != 0) {
      uVar2 = FUN_10018c280(lVar3);
      lVar3 = FUN_1003192a0(uVar2,*(undefined4 *)(param_1 + 0x28));
      if (lVar3 != 0) {
        if ((*(int *)(param_1 + 0x2c) < 0) || (*(int *)(param_1 + 0x30) < 0)) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(local_58);
          if (0.0 <= local_48) {
            iVar1 = (int)(local_48 + DAT_100e110f0);
          }
          else {
            iVar1 = (int)((local_48 - (double)(int)(DAT_100e110e0 + local_48)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + local_48);
          }
          if (0.0 <= local_40) {
            iVar7 = (int)(local_40 + DAT_100e110f0);
          }
          else {
            iVar7 = (int)((local_40 - (double)(int)(DAT_100e110e0 + local_40)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + local_40);
          }
          local_38 = CONCAT44(iVar7,iVar1);
        }
        else {
          local_38 = *(long *)(param_1 + 0x2c);
        }
        if ((-1 < (int)local_38) && (-1 < local_38)) {
          local_68 = 0;
          local_60 = 0xffffffffffffffff;
          pQVar4 = (QObject *)FUN_100327670(lVar3,&local_38,&local_68);
          lVar3 = *(long *)(param_1 + 0x58);
          pQVar8 = (QObject *)0x0;
          if ((lVar3 != 0) && (pQVar8 = (QObject *)0x0, *(int *)(lVar3 + 4) != 0)) {
            pQVar8 = *(QObject **)(param_1 + 0x60);
          }
          if (pQVar8 != pQVar4) {
            if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
               (*(QObject **)(param_1 + 0x60) != (QObject *)0x0)) {
              QObject::disconnect(*(QObject **)(param_1 + 0x60),"2imageUpdated(const QImage&)",
                                  param_1,"1onThumbnailImageChanged(const QImage&)");
            }
            piVar5 = (int *)0x0;
            if (pQVar4 != (QObject *)0x0) {
              piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
            }
            piVar6 = *(int **)(param_1 + 0x58);
            if (piVar6 != piVar5) {
              if (piVar5 != (int *)0x0) {
                LOCK();
                *piVar5 = *piVar5 + 1;
                local_29 = *piVar5 != 0;
                UNLOCK();
                piVar6 = *(int **)(param_1 + 0x58);
              }
              if (piVar6 != (int *)0x0) {
                LOCK();
                *piVar6 = *piVar6 + -1;
                local_29 = *piVar6 != 0;
                UNLOCK();
                if ((!(bool)local_29) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
                  operator_delete(*(void **)(param_1 + 0x58));
                }
              }
              *(int **)(param_1 + 0x58) = piVar5;
              *(QObject **)(param_1 + 0x60) = pQVar4;
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
            if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
               && (*(long *)(param_1 + 0x60) != 0)) {
              FUN_100354220(local_88);
              FUN_100736300(param_1,local_88);
              QImage::~QImage(local_88);
              uVar2 = 0;
              if ((*(long *)(param_1 + 0x58) != 0) &&
                 (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
                uVar2 = *(undefined8 *)(param_1 + 0x60);
              }
              QObject::connect(&local_90,uVar2,"2imageUpdated(const QImage&)",param_1,
                               "1onThumbnailImageChanged(const QImage&)",0);
              if (local_90 != 0) {
                QMetaObject::Connection::isConnected_helper();
              }
              QMetaObject::Connection::~Connection((Connection *)&local_90);
            }
          }
        }
      }
    }
  }
  return;
}

