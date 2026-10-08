
uint FUN_10013bc40(undefined8 param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  byte bVar9;
  QVariant local_40;
  
  iVar4 = *(int *)(param_2[6] + 8);
  iVar1 = *(int *)(param_2[6] + 0xc);
  if (iVar1 == iVar4) {
    (**(code **)(*param_2 + 0x18))(&local_40,param_2,0,10);
    uVar3 = QVariant::toInt((bool *)&local_40);
    QVariant::~QVariant(&local_40);
  }
  else {
    bVar2 = true;
    lVar7 = 0;
    bVar9 = 0;
    if (iVar4 < iVar1) {
      bVar8 = false;
      do {
        QTreeWidgetItem::executePendingSort();
        lVar5 = param_2[6];
        iVar4 = *(int *)(lVar5 + 8);
        if (*(long *)(lVar5 + 0x10 + (iVar4 + lVar7) * 8) != 0) {
          iVar4 = FUN_10013bc40(param_1);
          bVar6 = 1;
          if (iVar4 != 2) {
            bVar8 = true;
            bVar6 = bVar9;
          }
          lVar5 = param_2[6];
          iVar4 = *(int *)(lVar5 + 8);
          bVar9 = bVar6;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (long)*(int *)(lVar5 + 0xc) - (long)iVar4);
      bVar2 = !bVar8;
      if ((!bVar8) && (bVar9 != 0)) {
        return 2;
      }
    }
    uVar3 = (uint)(bVar2 | bVar9);
  }
  return uVar3;
}

