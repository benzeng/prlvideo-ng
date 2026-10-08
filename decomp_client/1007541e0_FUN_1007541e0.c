
void FUN_1007541e0(long param_1,char param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  QDateTime local_40;
  QDateTime local_38;
  
  plVar6 = (long *)(param_1 + 0x10);
  iVar5 = 0;
  bVar2 = false;
  do {
    while( true ) {
      lVar1 = *plVar6;
      if (iVar5 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) break;
LAB_1007542d8:
      bVar3 = !bVar2;
      iVar5 = 0;
      bVar2 = false;
      if (bVar3) {
        return;
      }
    }
    if (0 < iVar5) {
      QDateTime::QDateTime
                (&local_38,
                 (QDateTime *)
                 (*(long *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)(iVar5 + -1)) * 8) +
                 0x18));
      QDateTime::QDateTime
                (&local_40,
                 (QDateTime *)
                 (*(long *)(*plVar6 + 0x10 + ((long)iVar5 + (long)*(int *)(*plVar6 + 8)) * 8) + 0x18
                 ));
      if (param_2 == '\0') {
        cVar4 = QDateTime::operator<(&local_38,&local_40);
      }
      else {
        cVar4 = QDateTime::operator<(&local_40,&local_38);
      }
      bVar3 = true;
      if (cVar4 == '\0') {
        bVar3 = bVar2;
      }
      bVar2 = bVar3;
      if (bVar2) {
        FUN_100754680(plVar6,iVar5,iVar5 + -1);
      }
      QDateTime::~QDateTime(&local_40);
      QDateTime::~QDateTime(&local_38);
      if (bVar2) goto LAB_1007542d8;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

