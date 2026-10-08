
void FUN_100545fc0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  size_t sVar5;
  int iVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  puVar3 = PTR_s_DispPreferences_102274488;
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0x60);
  iVar6 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_DispPreferences_102274488);
    iVar6 = (int)sVar5;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  local_48 = (QArrayData *)QString::fromAscii_helper("Debug.VerboseLogEnabled",0x17);
  (*pcVar2)(&local_38,plVar1,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10054605a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10054605a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10054608a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10054608a:
  cVar4 = QVariant::toBool();
  if (cVar4 == '\0') {
    FUN_100dfa570(0xffffffff);
  }
  else {
    FUN_100dfa570(3);
  }
  QVariant::~QVariant(&local_38);
  return;
}

