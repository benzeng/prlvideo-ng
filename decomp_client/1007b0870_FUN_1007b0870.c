
void FUN_1007b0870(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  QSize *pQVar7;
  int local_48;
  int local_44;
  undefined8 local_40;
  long local_38;
  
  cVar3 = (**(code **)(**(long **)(param_1 + 0x110) + 0x80))();
  if (cVar3 == '\0') {
    local_44 = 0;
    local_48 = 0;
    cVar3 = FUN_1007a7bb0(*(undefined8 *)(param_1 + 0x100),&local_44,&local_48);
    if (cVar3 == '\0') {
      plVar2 = *(long **)(param_1 + 0x110);
      iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2);
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          iVar5 = (**(code **)(*plVar2 + 0x78))(plVar2);
          iVar6 = 0;
          if (0 < iVar5) {
            do {
              local_38 = 0;
              iVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,iVar4,iVar6);
              if (((iVar5 == 4) && (local_38 != 0)) && (*(int *)(local_38 + 0x28) == 7)) {
                local_48 = iVar6;
                local_44 = iVar4;
                FUN_1007a7b50(*(undefined8 *)(param_1 + 0x100),iVar4,iVar6);
                goto LAB_1007b09ca;
              }
              iVar6 = iVar6 + 1;
              iVar5 = (**(code **)(*plVar2 + 0x78))(plVar2);
            } while (iVar6 < iVar5);
          }
          iVar4 = iVar4 + 1;
          iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
        } while (iVar4 < iVar5);
      }
    }
LAB_1007b09ca:
    pQVar7 = *(QSize **)(param_1 + 0x100);
    (**(code **)((long)*pQVar7 + 0x70))(pQVar7);
  }
  else {
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe8),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
    pQVar7 = *(QSize **)(param_1 + 0x100);
    lVar1 = *(long *)(*(long *)(param_1 + 0xf8) + 0x28);
    local_40 = CONCAT44((*(int *)(lVar1 + 0x20) + 1) - *(int *)(lVar1 + 0x18),
                        (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14));
  }
  QWidget::resize(pQVar7);
  return;
}

