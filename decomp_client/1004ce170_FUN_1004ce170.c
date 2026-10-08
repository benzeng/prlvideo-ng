
void FUN_1004ce170(long param_1)

{
  long *plVar1;
  QString *pQVar2;
  char cVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = FUN_10044e660();
  cVar3 = FUN_1003c06f0(uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x60);
  (**(code **)(*plVar1 + 0x68))(plVar1,cVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x70);
  (**(code **)(*plVar1 + 0x68))(plVar1,cVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x80);
  (**(code **)(*plVar1 + 0x68))(plVar1,cVar3);
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x30);
  pcVar7 = "QLabel{ margin-right: 48 }";
  if (cVar3 != '\0') {
    pcVar7 = "";
  }
  iVar6 = 0x1a;
  if (cVar3 != '\0') {
    iVar6 = 0;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(pcVar7,iVar6);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

