
void FUN_100412bb0(long param_1,char param_2)

{
  int iVar1;
  char cVar2;
  QArrayData *local_28;
  QArrayData *local_20;
  
  if (param_2 == '\0') {
    cVar2 = QFile::remove((QString *)(param_1 + 0x18));
    if (cVar2 != '\0') {
      return;
    }
    if (DAT_1011b55f8 < 2) {
      return;
    }
    QString::toUtf8();
    FUN_1008e3970("","PrlPsConverter",2,
                  "[PrlPostscript] Failed to remove pdf file after convertation from ps: %s",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 == -1) {
      return;
    }
    local_20 = local_28;
    if (*(int *)local_28 == 0) goto LAB_100412c94;
    LOCK();
    *(int *)local_28 = *(int *)local_28 + -1;
    iVar1 = *(int *)local_28;
    UNLOCK();
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","PrlPsConverter",0,"[PrlPostscript] Keep pdf file %s",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 == -1) {
      return;
    }
    if (*(int *)local_20 == 0) goto LAB_100412c94;
    LOCK();
    *(int *)local_20 = *(int *)local_20 + -1;
    iVar1 = *(int *)local_20;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_100412c94:
  QArrayData::deallocate(local_20,1,8);
  return;
}

