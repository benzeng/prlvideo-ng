
void FUN_1002b74a0(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    FUN_1002b70d0();
    lVar1 = *(long *)(param_1 + 0x40);
    cVar2 = (char)((param_2 & 0xffffffff) >> 0x1f);
    if (lVar1 != 0) goto LAB_1002b74e5;
  }
  else {
    cVar2 = (char)((param_2 & 0xffffffff) >> 0x1f);
LAB_1002b74e5:
    if (*(int *)(lVar1 + 4) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x48);
      goto LAB_1002b74f3;
    }
  }
  iVar3 = 0;
LAB_1002b74f3:
  if (cVar2 == '\0') {
    iVar4 = 0;
    CProgressDialog::setRange(iVar3,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar4 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
    }
  }
  else {
    iVar4 = 0;
    CProgressDialog::setRange(iVar3,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar4 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
    }
  }
  CProgressDialog::setValue(iVar4);
  return;
}

