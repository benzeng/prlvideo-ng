
void FUN_10013ddd0(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  QString local_b8;
  QString local_b0;
  int local_a4;
  long local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  uint local_58;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  iVar3 = (int)param_1;
  QComboBox::itemData((int)&local_48,iVar3);
  QVariant::operator=((QVariant *)(param_1 + 0x38),&local_48);
  QComboBox::findData(param_1,&local_48,0x100,0x10);
  QComboBox::setCurrentIndex(iVar3);
  QComboBox::itemText((int)&local_50);
  FUN_10013ea50(&local_70,param_1 + 0x30);
  local_68 = (undefined8 *)(local_70 + 0x10 + (long)*(int *)(local_70 + 8) * 8);
  local_60 = (undefined8 *)(local_70 + 0x10 + (long)*(int *)(local_70 + 0xc) * 8);
  local_58 = 1;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      FUN_10013e6e0(&local_b8,*local_68);
      if (local_58 != 0) {
        if (((local_a4 == -1) || (cVar1 = QVariant::cmp(&local_48), cVar1 == '\0')) ||
           ((cVar1 = operator==(&local_b8,&local_50), cVar1 == '\0' &&
            (cVar1 = operator==(&local_b0,&local_50), cVar1 == '\0')))) {
          local_58 = 0;
        }
        else {
          QComboBox::setItemText(iVar3,(QString *)(ulong)param_2);
        }
      }
      FUN_10013e850(&local_b8);
      local_68 = local_68 + 1;
      uVar2 = local_58 ^ 1;
      bVar4 = local_58 != 1;
      local_58 = uVar2;
    } while ((bVar4) && (local_68 != local_60));
  }
  FUN_10013e3d0(&local_70);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013df7e;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10013df7e:
  QVariant::~QVariant(&local_48);
  return;
}

