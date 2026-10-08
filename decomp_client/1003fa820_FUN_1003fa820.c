
void FUN_1003fa820(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  QString *pQVar2;
  QVariant *pQVar3;
  QObject *pQVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  QVariant local_88;
  int *local_78;
  int *local_70;
  int *local_68;
  undefined4 local_60;
  QVariant local_58;
  int *local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  pcVar8 = (char *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (pcVar8 == (char *)0x0) {
    return;
  }
  QObject::property((char *)&local_58);
  FUN_10041aa80(&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  piVar10 = (int *)*param_3;
  if (local_48 == piVar10) goto LAB_1003faa84;
  iVar6 = local_48[3];
  iVar1 = local_48[2];
  if (iVar6 - iVar1 == piVar10[3] - piVar10[2]) {
    if (iVar6 != iVar1) {
      piVar9 = local_48 + (long)iVar1 * 2 + 4;
      piVar10 = piVar10 + (long)piVar10[2] * 2 + 4;
      lVar11 = (long)iVar6 * 8 + (long)iVar1 * -8;
      do {
        pQVar2 = *(QString **)piVar9;
        cVar5 = operator==(pQVar2,*(QString **)piVar10);
        if ((cVar5 == '\0') || (cVar5 = QVariant::cmp((QVariant *)(pQVar2 + 1)), cVar5 == '\0'))
        goto LAB_1003fa911;
        piVar9 = piVar9 + 2;
        piVar10 = piVar10 + 2;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    goto LAB_1003faa84;
  }
LAB_1003fa911:
  QComboBox::clear();
  FUN_1003df730(&local_78,param_3);
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  if (local_78[2] != local_78[3]) {
    do {
      local_60 = 1;
      pQVar3 = *(QVariant **)local_70;
      pQVar4 = (pQVar3->field0_0x0).field0_0x0.field15;
      iVar6 = QString::compare_helper
                        (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),"Separator",
                         0xffffffff,1);
      if (iVar6 == 0) {
        QComboBox::count();
        QComboBox::insertSeparator((int)pcVar8);
      }
      else {
        uVar7 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem((int)pcVar8,(QIcon *)(ulong)uVar7,(QString *)local_40,pQVar3);
        QIcon::~QIcon(local_40);
      }
      local_70 = local_70 + 2;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003faa2c;
    }
    FUN_10041b480(&local_78,local_78);
  }
LAB_1003faa2c:
  if (DAT_102273f30 == 0) {
    DAT_102273f30 = FUN_10041ab90("CVmEdWidgetIniterPrivate::PathValuesList",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_88,DAT_102273f30,param_3,0);
  QObject::setProperty(pcVar8,(QVariant *)"InitInfo");
  QVariant::~QVariant(&local_88);
LAB_1003faa84:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10041b480(&local_48,local_48);
  }
  return;
}

