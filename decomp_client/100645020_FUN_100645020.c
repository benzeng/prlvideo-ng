
void FUN_100645020(long param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar2 = FUN_100640cb0();
  if (-1 < param_2) {
    return;
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  lVar3 = FUN_10063f730(param_1);
  FUN_10061fe50(&local_38,param_2,&local_30,&local_40,*(undefined1 *)(lVar3 + 0x160));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006450b2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006450b2:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
  if (cVar2 == '\0') {
    FUN_10061e130(uVar1,0,0,&local_38);
  }
  else {
    FUN_10061e150(uVar1,0,0,&local_38);
  }
  QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),7);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100645123;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100645123:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

