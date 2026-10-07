
undefined1 FUN_100703390(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  QArrayData *local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  QString::toUtf8();
  lVar4 = _getpwnam(local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1007033eb;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007033eb:
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if (*(int *)(lVar4 + 0x10) != 0) {
      lVar4 = _getgrnam("admin");
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        puVar5 = *(undefined8 **)(lVar4 + 0x18);
        QString::toUtf8();
        piVar2 = (int *)CONCAT71(uStack_37,local_38);
        do {
          if (puVar5 == (undefined8 *)0x0) {
            uVar6 = 0;
            break;
          }
          pcVar1 = (char *)*puVar5;
          if (pcVar1 == (char *)0x0) {
            uVar6 = 0;
            break;
          }
          puVar5 = puVar5 + 1;
          iVar3 = _strcmp(pcVar1,(char *)(*(long *)(piVar2 + 4) + (long)piVar2));
          uVar6 = 1;
        } while (iVar3 != 0);
        if (*piVar2 != -1) {
          if (*piVar2 != 0) {
            LOCK();
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 != 0) {
              return uVar6;
            }
          }
          QArrayData::deallocate((QArrayData *)CONCAT71(uStack_37,local_38),1,8);
        }
      }
    }
  }
  return uVar6;
}

