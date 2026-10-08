
void FUN_1005e6fb0(long param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 local_b0 [72];
  QString local_68 [2];
  undefined1 local_58 [40];
  
  lVar3 = FUN_1005ec990(param_1 + 0x38);
  *(undefined4 *)(lVar3 + 0x50) = 6;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20);
  FUN_1005e68f0();
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(int *)(*(long *)(lVar3 + 0x18) + 0xc) - *(int *)(*(long *)(lVar3 + 0x18) + 8) == 1) {
    *(undefined4 *)(lVar3 + 0x20) = 0;
  }
  else if (param_2 == 1) {
    uVar4 = FUN_1005ec990(param_1 + 0x38);
    FUN_1005b69c0(local_b0,uVar4);
    uVar6 = 0xffffffff;
    if (*(int *)(*(long *)(lVar3 + 0x18) + 8) < *(int *)(*(long *)(lVar3 + 0x18) + 0xc)) {
      lVar7 = 0;
      do {
        lVar5 = QMetaObject::cast((QObject *)&DAT_1021f4710);
        cVar2 = operator==((QString *)(lVar5 + 0x58),local_68);
        if (cVar2 != '\0') {
          uVar6 = (undefined4)lVar7;
          goto LAB_1005e70a5;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (long)*(int *)(*(long *)(lVar3 + 0x18) + 0xc) -
                       (long)*(int *)(*(long *)(lVar3 + 0x18) + 8));
      uVar6 = 0xffffffff;
    }
LAB_1005e70a5:
    *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20) = uVar6;
    FUN_100252c80(local_58);
    FUN_100252e70(local_b0);
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x20) == -1) {
      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20) = uVar1;
    }
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

