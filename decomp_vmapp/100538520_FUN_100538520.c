
undefined8 FUN_100538520(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *local_48;
  long *local_40;
  long *local_38;
  
  QMutex::lock();
  bVar11 = true;
  uVar13 = 0xf000001e;
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = FUN_1002a6010(param_2);
    if (*(int *)(lVar4 + 8) == 1) {
      puVar5 = *(uint **)(param_1 + 0x10);
      uVar6 = puVar5[2];
      uVar12 = 0;
      uVar13 = uVar12;
      if (puVar5[3] != uVar6) {
        puVar10 = (undefined8 *)(param_1 + 0x10);
        if (1 < *puVar5) {
          FUN_100541b80(puVar10,puVar5[1]);
          puVar5 = (uint *)*puVar10;
          uVar6 = puVar5[2];
        }
        if (*(char *)(*(long *)(**(long **)(puVar5 + (long)(int)uVar6 * 2 + 4) + 0x10) + 0x18) !=
            '\0') {
          FUN_100541840(&local_40,puVar10);
          bVar11 = false;
          QMutex::unlock();
          if (((long *)local_40[2])[1] == 0) {
            uVar13 = 0;
            if (local_40 == (long *)0x0) goto LAB_1005388ca;
          }
          else {
            lVar2 = *(long *)local_40[2];
            pvVar7 = (void *)0x0;
            if (lVar2 != 0) {
              pvVar7 = *(void **)(lVar2 + 0x10);
            }
            _memcpy(pvVar7,(void *)(lVar4 + 0xc),0x808);
            plVar9 = (long *)local_40[2];
            local_48 = (long *)*plVar9;
            pcVar3 = (code *)plVar9[1];
            lVar4 = plVar9[2];
            if (local_48 != (long *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            (*pcVar3)(lVar4,&local_48);
            if (local_48 != (long *)0x0) {
              LOCK();
              plVar9 = local_48 + 1;
              lVar4 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)(*local_48 + 0x10))();
              }
            }
          }
          LOCK();
          plVar9 = local_40 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          uVar13 = uVar12;
          if ((int)lVar4 == 1) {
            (**(code **)(*local_40 + 0x10))(local_40);
            uVar13 = 0;
          }
        }
      }
    }
    else {
      uVar13 = 0xf0000003;
      if (*(int *)(lVar4 + 8) == 0) {
        plVar9 = *(long **)(param_1 + 0x18);
        if (plVar9 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          plVar8 = *(long **)(param_1 + 0x18);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        if ((plVar9 == (long *)0x0) || (plVar8 = plVar9, plVar9[2] == 0)) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            uVar13 = 0xf000001c;
          }
          else {
            puVar5 = *(uint **)(param_1 + 0x10);
            if (puVar5[3] != puVar5[2]) {
              puVar10 = (undefined8 *)(param_1 + 0x10);
              do {
                if (1 < *puVar5) {
                  FUN_100541b80(puVar10,puVar5[1]);
                  puVar5 = (uint *)*puVar10;
                }
                uVar6 = puVar5[2];
                if (*(char *)(*(long *)(**(long **)(puVar5 + (long)(int)uVar6 * 2 + 4) + 0x10) +
                             0x18) == '\0') {
                  if (puVar5[3] != uVar6) {
                    if (1 < *puVar5) {
                      FUN_100541b80(puVar10,puVar5[1]);
                      puVar5 = (uint *)*puVar10;
                      uVar6 = puVar5[2];
                    }
                    plVar8 = (long *)**(long **)(puVar5 + (long)(int)uVar6 * 2 + 4);
                    if (plVar8 != (long *)0x0) {
                      LOCK();
                      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                      UNLOCK();
                    }
                    if (plVar9 != (long *)0x0) {
                      LOCK();
                      plVar1 = plVar9 + 1;
                      lVar4 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar4 == 1) {
                        (**(code **)(*plVar9 + 0x10))();
                      }
                    }
                    goto LAB_10053882a;
                  }
                  break;
                }
                FUN_100541840(&local_38,puVar10);
                if (local_38 != (long *)0x0) {
                  LOCK();
                  plVar8 = local_38 + 1;
                  lVar4 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    (**(code **)(*local_38 + 0x10))();
                  }
                }
                puVar5 = (uint *)*puVar10;
              } while (puVar5[3] != puVar5[2]);
            }
            *(undefined8 *)(param_1 + 0x20) = param_2;
            uVar13 = 0xffffffff;
          }
        }
        else {
LAB_10053882a:
          QMutex::unlock();
          if (plVar8 != (long *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          lVar4 = FUN_1002a6010(param_2);
          uVar13 = 0;
          pvVar7 = (void *)0x0;
          if (*(long *)plVar8[2] != 0) {
            pvVar7 = *(void **)(*(long *)plVar8[2] + 0x10);
          }
          _memcpy((void *)(lVar4 + 0xc),pvVar7,0x808);
          *(undefined1 *)(plVar8[2] + 0x18) = 1;
          LOCK();
          plVar9 = plVar8 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          bVar11 = false;
          plVar9 = plVar8;
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
LAB_1005388ca:
  if (bVar11) {
    QMutex::unlock();
  }
  return uVar13;
}

