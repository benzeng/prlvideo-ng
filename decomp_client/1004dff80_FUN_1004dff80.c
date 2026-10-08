
void FUN_1004dff80(long param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  Data *pDVar9;
  Data *local_40;
  int local_38;
  undefined1 local_31;
  
  FUN_1004de380();
  lVar5 = FUN_1004dddd0(param_1);
  if (lVar5 == 0) {
    pcVar8 = "(!)Error: Server instance is null.";
  }
  else {
    lVar5 = FUN_1004dddc0(param_1);
    if (lVar5 != 0) {
      uVar6 = FUN_1004dddc0(param_1);
      cVar2 = FUN_10018da50(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
        cVar2 = FUN_1003e5e80(uVar6);
        if (cVar2 == '\0') {
          uVar6 = FUN_1004dddc0(param_1);
          cVar2 = FUN_10018d9f0(uVar6,&local_38);
          if ((cVar2 == '\0') || (local_38 != 1)) {
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
            FUN_1004e01f0(&local_40,param_1);
            QWidget::setEnabled(SUB81(uVar6,0));
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e010f;
              }
              iVar1 = *(int *)(local_40 + 0xc);
              if (iVar1 != *(int *)(local_40 + 8)) {
                lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
                pDVar9 = local_40 + (long)iVar1 * 8 + 8;
                do {
                  if (*(void **)pDVar9 != (void *)0x0) {
                    operator_delete(*(void **)pDVar9);
                  }
                  pDVar9 = pDVar9 + -8;
                  lVar5 = lVar5 + 8;
                } while (lVar5 != 0);
              }
              QListData::dispose(local_40);
            }
LAB_1004e010f:
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40);
            uVar7 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
            uVar3 = FUN_1004dc700(param_1);
            uVar4 = FUN_1004dc770(param_1);
            FUN_1003e5e60(uVar7,uVar3,uVar4);
            QWidget::setEnabled(SUB81(uVar6,0));
            QWidget::raise();
            QWidget::update();
            return;
          }
        }
      }
      QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38),0));
      QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40),0));
      return;
    }
    pcVar8 = "(!)Error: Vm instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar8);
  return;
}

