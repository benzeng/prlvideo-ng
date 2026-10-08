
void FUN_10019da70(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  QStackedWidget::setCurrentIndex((int)*(undefined8 *)(param_1 + 0x68));
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xd8),0));
  lVar5 = *(long *)(param_1 + 0xf0);
  if (*(long *)(lVar5 + 0x20) == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get Server instance.");
    return;
  }
  iVar1 = *(int *)(lVar5 + 0x28);
  plVar4 = operator_new(8);
  if (iVar1 == 0) {
    *plVar4 = (long)PTR_shared_null_1021e15e8;
    FUN_1000341d0(plVar4,lVar5);
  }
  else {
    piVar2 = *(int **)(lVar5 + 8);
    *plVar4 = (long)piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 == 0) {
        QListData::detach((int)plVar4);
        lVar3 = *plVar4;
        iVar1 = *(int *)(lVar3 + 8);
        if (iVar1 != *(int *)(lVar3 + 0xc)) {
          puVar6 = (undefined8 *)
                   (*(long *)(lVar5 + 8) + 0x10 + (long)*(int *)(*(long *)(lVar5 + 8) + 8) * 8);
          puVar7 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
          lVar5 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar6;
            *puVar7 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
  }
  FUN_1001612d0(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20),plVar4);
  FUN_100039a80(plVar4);
  operator_delete(plVar4);
  return;
}

