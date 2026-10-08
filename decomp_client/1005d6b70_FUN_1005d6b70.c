
bool FUN_1005d6b70(long param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QLineEdit::text();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d6bca;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d6bca:
  if (iVar1 == 0) {
    *param_2 = 0x80015174;
    return false;
  }
  QLineEdit::text();
  QLineEdit::text();
  cVar2 = operator==(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d6c36;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005d6c36:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d6c66;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005d6c66:
  if (cVar2 == '\0') {
    *param_2 = 0x80015175;
    return false;
  }
  lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  iVar3 = FUN_1005cb7c0(*(undefined4 *)(lVar4 + 0x38));
  QLineEdit::text();
  iVar1 = *(int *)(local_50 + 4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1005d6cc9;
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d6cc9:
  if (iVar3 <= iVar1) {
    *param_2 = 0;
  }
  else {
    *param_2 = 0x80015176;
  }
  return iVar3 <= iVar1;
}

